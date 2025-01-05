#include "membercenter.h"
#include "ui_membercenter.h"

memberCenter::memberCenter(int memberId, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::memberCenter)
    , currentMemberId(memberId)
{
    ui->setupUi(this);
}

memberCenter::~memberCenter()
{
    delete ui;
}

// 查询信息功能
void memberCenter::queryMemberInfo()
{
    query.prepare("SELECT * FROM members WHERE member_id = :member_id");
    query.bindValue(":member_id", currentMemberId);

    if (query.exec() && query.next()) {
        QSqlRecord record = query.record();
        displayMemberInfo(record);
    } else {
        QMessageBox::warning(this, "查询失败", "获取会员信息失败，请联系管理员");
    }
}

// 显示信息
void memberCenter::displayMemberInfo(const QSqlRecord &record)
{
    // 根据字段索引显示会员信息到对应的界面控件
    ui->nameLineEdit->setText(record.value("name").toString());
    ui->nameLineEdit->setReadOnly(true); // 设置姓名文本框为只读

    ui->genderComboBox->setCurrentText(record.value("gender").toString());
    ui->genderComboBox->setEnabled(false); // 设置性别下拉框不可操作

    ui->birthDateEdit->setDate(record.value("birth_date").toDate());
    ui->birthDateEdit->setReadOnly(true); // 设置出生日期文本框为只读

    ui->phoneLineEdit->setText(record.value("contact_number").toString());
    // 联系电话可修改，不设置为只读

    ui->addressLineEdit->setText(record.value("address").toString());
    // 地址可修改，不设置为只读

    ui->emailLineEdit->setText(record.value("email").toString());
    ui->emailLineEdit->setReadOnly(true); // 设置邮箱文本框为只读

    ui->membershipTypeComboBox->setCurrentText(record.value("membership_type").toString());
    ui->membershipTypeComboBox->setEnabled(false); // 设置会员类型下拉框不可操作

    ui->membershipStartDateEdit->setDate(record.value("membership_start_date").toDate());
    ui->membershipStartDateEdit->setReadOnly(true); // 设置会员开始日期文本框为只读

    ui->membershipEndDateEdit->setDate(record.value("membership_end_date").toDate());
    ui->membershipEndDateEdit->setReadOnly(true); // 设置会员结束日期文本框为只读

    ui->accountBalanceLineEdit->setText(record.value("account_balance").toString());
    ui->accountBalanceLineEdit->setReadOnly(true); // 设置账户余额文本框为只读

    ui->passwordLineEdit->setText(record.value("password").toString());
    // 密码可修改，不设置为只读
}

// 查询按钮
void memberCenter::on_queryButton_clicked()
{
    queryMemberInfo();
}

// 修改按钮
void memberCenter::on_yesButton_2_clicked()
{
    QString newPhone = ui->phoneLineEdit->text();
    QString newAddress = ui->addressLineEdit->text();
    QString newPassword = ui->passwordLineEdit->text();

    query.prepare("UPDATE members SET contact_number = :phone, address = :address, password = :password WHERE member_id = :member_id");
    query.bindValue(":phone", newPhone);
    query.bindValue(":address", newAddress);
    query.bindValue(":password", newPassword);
    query.bindValue(":member_id", currentMemberId);

    if (query.exec()) {
        QMessageBox::information(this, "保存成功", "会员信息修改成功");
    } else {
        QMessageBox::warning(this, "保存失败", "修改会员信息失败: " + query.lastError().text());
    }
}

