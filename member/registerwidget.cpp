#include "registerwidget.h"
#include "ui_registerwidget.h"

registerwidget::registerwidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::registerwidget)
{
    ui->setupUi(this);
}

registerwidget::~registerwidget()
{
    delete ui;
}

void registerwidget::on_yesButton_clicked()
{
    QString name = ui->namelineEdit->text();
    QString gender = ui->gendercomboBox->currentText();
    QDate birth_date = ui->dateEdit->date();
    QString dateString = birth_date.toString("yyyy-MM-dd");
    QString phone = ui->phonelineEdit->text();
    QString email = ui->emaillineEdit->text();
    QString address = ui->addresslineEdit->text();
    QString type = ui->typecomboBox_2->currentText();
    QString pw = ui->pwlineEdit->text();

    // 判断姓名、邮箱和密码是否为空
    if (name.isEmpty() || email.isEmpty() || pw.isEmpty()) {
        QMessageBox::warning(this, "信息不完整", "姓名、邮箱和密码不能为空，请重新填写！");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO members (name, gender, birth_date, contact_number, email, address, membership_type, password)"
                  "VALUES (:name, :gender, :birth_date, :phone, :email, :address, :type, :pw)");
    query.bindValue(":name", name);
    query.bindValue(":gender", gender);
    query.bindValue(":birth_date", dateString);
    query.bindValue(":phone", phone);
    query.bindValue(":email", email);
    query.bindValue(":address", address);
    query.bindValue(":type", type);
    query.bindValue(":pw", pw);

    if (query.exec()) {
        QMessageBox::information(this, "注册成功", "会员注册成功！");
        this->close();
    } else {
        QMessageBox::warning(this, "注册失败", "注册失败: " + query.lastError().text());
    }
}
