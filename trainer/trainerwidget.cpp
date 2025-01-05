#include "trainerwidget.h"
#include "ui_trainerwidget.h"

trainerwidget::trainerwidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::trainerwidget)
{
    ui->setupUi(this);
    // 设置密码输入框显示为黑色圆点
    ui->passwordLineEdit->setEchoMode(QLineEdit::Password);
}

trainerwidget::~trainerwidget()
{
    delete ui;
}

// 登录
void trainerwidget::on_loginButton_clicked()
{
    QString trainerId = ui->trainerIdLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    QSqlQuery query;
    query.prepare("SELECT * FROM Trainers WHERE trainer_id = :trainer_id AND password = :password");
    query.bindValue(":trainer_id", trainerId);
    query.bindValue(":password", password);

    if (query.exec() && query.next()) {
        int id = query.value("trainer_id").toInt(); // 获取教练的 id 值
        trainerinfo *ti = new trainerinfo(id, this); // 创建 trainerinfo 对象并传递 id
        ti->setWindowFlag(Qt::Window); // 设置为独立窗口
        ti->show();
    } else {
        if (trainerId.isEmpty() || password.isEmpty()) {
            QMessageBox::warning(this, "登录失败", "教练ID和密码不能为空，请重新输入！");
        } else {
            QMessageBox::warning(this, "登录失败", "教练ID或密码错误，请检查后重新输入！");
        }
    }
}

