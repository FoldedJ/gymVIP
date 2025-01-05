#include "memberQuery.h"
#include "ui_memberquery.h"

memberQuery::memberQuery(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::memberQuery),
    model(new QSqlQueryModel(this))
{
    ui->setupUi(this);
    ui->tableView->setModel(model);
}

memberQuery::~memberQuery()
{
    delete ui;
}

void memberQuery::on_queryButton_clicked()
{
    QString queryCondition = ui->conditionComboBox->currentText();
    QString queryValue = ui->valueLineEdit->text();

    QString sqlQuery;
    if (queryCondition == "所有会员") {
        sqlQuery = "SELECT member_id, name, gender, birth_date, contact_number, email, address, membership_type, membership_start_date, membership_end_date, account_balance FROM members";
    } else if (queryCondition == "会员ID") {
        sqlQuery = QString("SELECT member_id, name, gender, birth_date, contact_number, email, address, membership_type, membership_start_date, membership_end_date, account_balance FROM members WHERE member_id = '%1'").arg(queryValue);
    } else if (queryCondition == "会员姓名") {
        sqlQuery = QString("SELECT member_id, name, gender, birth_date, contact_number, email, address, membership_type, membership_start_date, membership_end_date, account_balance FROM members WHERE name LIKE '%%1%'").arg(queryValue);
    } else if (queryCondition == "联系电话") {
        sqlQuery = QString("SELECT member_id, name, gender, birth_date, contact_number, email, address, membership_type, membership_start_date, membership_end_date, account_balance FROM members WHERE contact_number LIKE '%%1%'").arg(queryValue);
    } else if (queryCondition == "邮箱") {
        sqlQuery = QString("SELECT member_id, name, gender, birth_date, contact_number, email, address, membership_type, membership_start_date, membership_end_date, account_balance FROM members WHERE email LIKE '%%1%'").arg(queryValue);
    }

    QSqlQuery query(sqlQuery);
    model->setQuery(std::move(query));
    if (model->lastError().isValid()) {
        QMessageBox::warning(this, "查询错误", "查询会员信息时出错: " + model->lastError().text());
    } else {
        // 设置表头
        model->setHeaderData(0, Qt::Horizontal, "会员 ID");
        model->setHeaderData(1, Qt::Horizontal, "会员姓名");
        model->setHeaderData(2, Qt::Horizontal, "性别");
        model->setHeaderData(3, Qt::Horizontal, "出生日期");
        model->setHeaderData(4, Qt::Horizontal, "联系电话");
        model->setHeaderData(5, Qt::Horizontal, "邮箱");
        model->setHeaderData(6, Qt::Horizontal, "地址");
        model->setHeaderData(7, Qt::Horizontal, "会员类型");
        model->setHeaderData(8, Qt::Horizontal, "会员开始日期");
        model->setHeaderData(9, Qt::Horizontal, "会员结束日期");
        model->setHeaderData(10, Qt::Horizontal, "累计充值");
    }
}
