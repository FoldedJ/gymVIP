#include "inserttrainer.h"
#include "ui_inserttrainer.h"

insertTrainer::insertTrainer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::insertTrainer)
{
    ui->setupUi(this);
}

insertTrainer::~insertTrainer()
{
    delete ui;
}

// 教练信息插入
void insertTrainer::on_yesButton_clicked()
{
    QString name = ui->nameLineEdit->text();
    QString gender = ui->genderComboBox->currentText();
    QString contactNumber = ui->contactNumberLineEdit->text();
    QString email = ui->emailLineEdit->text();
    QString specialty = ui->specialtyLineEdit->text();
    QString qualification = ui->qualificationLineEdit->text();
    QString workSchedule = ui->workScheduleTextEdit->text();
    QString password = ui->pw->text();

    // 获取当前日期并格式化为 yyyymmdd 模式
    QDate currentDate = QDate::currentDate();
    QString hireDate = currentDate.toString("yyyyMMdd");

    // 检查必填项是否为空
    if (name.isEmpty() || gender.isEmpty() || contactNumber.isEmpty() || email.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "插入失败", "姓名、联系电话、邮箱、密码不能为空，请重新填写！");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO trainers (name, gender, contact_number, email, specialty, qualification, hire_date, work_schedule, password) "
                  "VALUES (:name, :gender, :contact_number, :email, :specialty, :qualification, :hire_date, :work_schedule, :password)");
    query.bindValue(":name", name);
    query.bindValue(":gender", gender);
    query.bindValue(":contact_number", contactNumber);
    query.bindValue(":email", email);
    query.bindValue(":specialty", specialty);
    query.bindValue(":qualification", qualification);
    query.bindValue(":hire_date", hireDate);
    query.bindValue(":work_schedule", workSchedule);
    query.bindValue(":password", password);

    if (query.exec()) {
        QMessageBox::information(this, "插入成功", "教练信息已成功插入！");
        // 可以在这里添加代码清空输入框内容，以便继续插入新的教练信息
    } else {
        QMessageBox::warning(this, "插入失败", "插入教练信息时出现错误: " + query.lastError().text());
    }
}

