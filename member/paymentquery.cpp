#include "paymentquery.h"
#include "ui_paymentquery.h"

paymentquery::paymentquery(int member_id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::paymentquery),
    currentMemberId(member_id),
    paymentModel(new QSqlQueryModel(this))
{
    ui->setupUi(this);

    setupModel();
    if (!loadPaymentRecords()) {
        QMessageBox::warning(this, "错误", "加载缴费记录失败，请检查网络或联系管理员！");
    }
}

paymentquery::~paymentquery()
{
    delete ui;
}

void paymentquery::setupModel()
{
    ui->tableView->setModel(paymentModel);
}

bool paymentquery::loadPaymentRecords()
{
    QSqlQuery query;
    query.prepare("SELECT payment_id, payment_amount, payment_date, payment_method, membership_period_start, membership_period_end FROM payment_records WHERE member_id = :member_id ORDER BY payment_id DESC");
    query.bindValue(":member_id", this->currentMemberId);
    if (query.exec()) {
        this->paymentModel->setQuery(query);
        this->paymentModel->setHeaderData(0, Qt::Horizontal, "缴费 ID");
        this->paymentModel->setHeaderData(1, Qt::Horizontal, "缴费金额");
        this->paymentModel->setHeaderData(2, Qt::Horizontal, "缴费日期");
        this->paymentModel->setHeaderData(3, Qt::Horizontal, "缴费方式");
        this->paymentModel->setHeaderData(4, Qt::Horizontal, "起始日期");
        this->paymentModel->setHeaderData(5, Qt::Horizontal, "截止日期");
        return true;
    } else {
        qDebug() << "查询缴费记录出错: " << query.lastError().text();
        return false;
    }
}
