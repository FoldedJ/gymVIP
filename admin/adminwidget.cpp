#include "adminwidget.h"
#include "ui_adminwidget.h"

adminwidget::adminwidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::adminwidget)
{
    ui->setupUi(this);
    // 设置密码输入框显示为黑色圆点
    ui->passwordLineEdit->setEchoMode(QLineEdit::Password);
}

adminwidget::~adminwidget()
{
    delete ui;
}


// 登录
void adminwidget::on_loginButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (username == "admin" && password == "123456") {
        admininfo *ai = new admininfo(this);
        ai->setWindowFlag(Qt::Window); // 设置为独立窗口
        ai->show();
    } else {
        if (username.isEmpty() || password.isEmpty()) {
            QMessageBox::warning(this, "登录失败", "用户名和密码不能为空，请重新输入！");
        } else {
            QMessageBox::warning(this, "登录失败", "用户名或密码错误，请检查后重新输入！");
        }
    }
}

