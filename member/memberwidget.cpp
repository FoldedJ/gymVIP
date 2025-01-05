#include "memberwidget.h"
#include "ui_memberwidget.h"
#include <QPushButton>

memberwidget::memberwidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::memberwidget)
{
    ui->setupUi(this);
    // 设置密码输入框显示为黑色圆点
    ui->passwordLineEdit->setEchoMode(QLineEdit::Password);
}

memberwidget::~memberwidget()
{
    delete ui;
}

// 进入注册页面
void memberwidget::on_regButton_clicked()
{
    registerwidget * rw = new registerwidget(); // 定义一个registerwidget类的对象
    rw->show();
}

// 登录
void memberwidget::on_loginButton_clicked()
{
    QString email = ui->emailLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    QSqlQuery query;
    query.prepare("SELECT * FROM members WHERE email = :email AND password = :password");
    query.bindValue(":email", email);
    query.bindValue(":password", password);

    if (query.exec() && query.next()) {
        // 登录成功，创建 memberinfo 对象（如果之前没有创建）并显示，然后关闭当前窗口
        int memberId = query.value("member_id").toInt();
        memberinfo * mi = new memberinfo(memberId, this);

        mi->setWindowFlag(Qt::Window); // 设置为独立窗口
        mi->show();
    } else {
        // 登录失败，根据错误情况显示提示信息
        if (email.isEmpty() || password.isEmpty()) {
            QMessageBox::warning(this, "登录失败", "邮箱和密码不能为空，请重新输入！");
        } else {
            QMessageBox::warning(this, "登录失败", "邮箱或密码错误，请检查后重新输入！");
        }
    }
}

