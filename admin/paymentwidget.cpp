#include "paymentwidget.h"
#include "ui_paymentwidget.h"

PaymentWidget::PaymentWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PaymentWidget)
{
    ui->setupUi(this);
}

PaymentWidget::~PaymentWidget()
{
    delete ui;
}

void PaymentWidget::on_payButton_clicked()
{
    QString memberIdStr = ui->memberIdLineEdit->text();
    QString amountStr = ui->amountLineEdit->text();
    QString paymentMethod = ui->methodComboBox->currentText();

    // 检查会员ID是否为空
    if (memberIdStr.isEmpty()) {
        QMessageBox::warning(this, "缴费失败", "会员ID不能为空，请输入会员ID！");
        return;
    }

    bool ok;
    int memberId = memberIdStr.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "缴费失败", "会员ID必须为整数，请重新输入！");
        return;
    }

    // 验证会员ID是否存在
    if (!validateMemberId(memberId)) {
        QMessageBox::warning(this, "缴费失败", "输入的会员ID不存在，请检查！");
        return;
    }

    // 检查缴费金额是否为空
    if (amountStr.isEmpty()) {
        QMessageBox::warning(this, "缴费失败", "缴费金额不能为空，请输入缴费金额！");
        return;
    }

    int paymentAmount = amountStr.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "缴费失败", "缴费金额必须为数字，请重新输入！");
        return;
    }

    // 验证缴费金额是否有效（这里可以根据你的业务规则添加更详细的验证，例如金额不能为负数等）
    if (!validateAmount(paymentAmount)) {
        QMessageBox::warning(this, "缴费失败", "缴费金额无效，请检查！");
        return;
    }

    QSqlQuery query;
    QDate membershipPeriodStart;
    QDate membershipPeriodEnd;

    // 获取会员的会员截止日期
    query.prepare("SELECT membership_end_date FROM members WHERE member_id = :member_id");
    query.bindValue(":member_id", memberId);
    if (query.exec() && query.next()) {
        membershipPeriodStart = query.value(0).toDate();
    } else {
        membershipPeriodStart = QDate::currentDate();
    }

    // 根据充值规则计算会员有效期结束日期
    if (paymentAmount == 200) {
        membershipPeriodEnd = membershipPeriodStart.addDays(30);
    } else if (paymentAmount == 500) {
        membershipPeriodEnd = membershipPeriodStart.addMonths(3);
    } else if (paymentAmount == 1000) {
        membershipPeriodEnd = membershipPeriodStart.addYears(1);
    } else if (paymentAmount % 1000 == 0) {
        int yearsToAdd = static_cast<int>(paymentAmount / 1000);
        membershipPeriodEnd = membershipPeriodStart.addYears(yearsToAdd);
    } else {
        QMessageBox::warning(this, "缴费失败", "无效的缴费金额！");
        return;
    }

    query.prepare("INSERT INTO payment_records (member_id, payment_amount, payment_method, membership_period_start, membership_period_end) "
                  "VALUES (:member_id, :payment_amount, :payment_method, :membership_period_start, :membership_period_end)");
    query.bindValue(":member_id", memberId);
    query.bindValue(":payment_amount", paymentAmount);
    query.bindValue(":payment_method", paymentMethod);
    query.bindValue(":membership_period_start", membershipPeriodStart.toString("yyyy-MM-dd"));
    query.bindValue(":membership_period_end", membershipPeriodEnd.toString("yyyy-MM-dd"));

    if (query.exec()) {
        QMessageBox::information(this, "缴费成功", "会员缴费成功！");

        // 更新members表中的会员有效期结束日期（假设你已经有相应的触发器处理）

    } else {
        QMessageBox::warning(this, "缴费失败", "会员缴费时出现错误: " + query.lastError().text());
    }
}

// 验证会员ID是否存在
bool PaymentWidget::validateMemberId(int memberId)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM members WHERE member_id = :member_id");
    query.bindValue(":member_id", memberId);
    query.exec();
    query.next();
    int count = query.value(0).toInt();
    return count > 0;
}

// 验证缴费金额是否有效
bool PaymentWidget::validateAmount(double amount)
{
    return amount > 0;
}

// 根据会员id加载缴费记录，并按缴费记录id降序排列
void PaymentWidget::loadPaymentRecordsByMemberId(int memberId2)
{
    QSqlQueryModel *model = new QSqlQueryModel(this);
    QSqlQuery query;
    query.prepare("SELECT payment_id, payment_amount, payment_date, payment_method FROM payment_records WHERE member_id = :member_id ORDER BY payment_id DESC");
    query.bindValue(":member_id", memberId2);
    if (query.exec()) {
        model->setQuery(query);
        model->setHeaderData(0, Qt::Horizontal, "缴费记录ID");
        model->setHeaderData(1, Qt::Horizontal, "缴费金额");
        model->setHeaderData(2, Qt::Horizontal, "缴费日期");
        model->setHeaderData(3, Qt::Horizontal, "缴费方式");

        // 将查询结果模型设置给界面上的TableView控件
        ui->paymentRecordsTableView->setModel(model);
    } else {
        QMessageBox::warning(this, "查询失败", "根据会员ID查询缴费记录时出现错误: " + query.lastError().text());
    }
}

// 查询按钮点击槽函数，调用加载缴费记录函数
void PaymentWidget::on_queryButton_clicked()
{
    QString memberIdStr2 = ui->queryMemberIdLineEdit->text();
    bool ok;
    int memberId2 = memberIdStr2.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "查询失败", "请输入有效的会员ID！");
        return;
    }
    loadPaymentRecordsByMemberId(memberId2);
}
