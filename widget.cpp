#include "widget.h"
#include "ui_widget.h"
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , currentSelectedButton(nullptr)
{
    ui->setupUi(this);

    // 连接数据库
    db = QSqlDatabase::addDatabase("QMYSQL"); // 加载mysql数据库驱动

    db.setDatabaseName("gymVIP");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("123456");

    if (!db.open()) {
        // 获取详细的数据库错误信息
        QSqlError error = db.lastError();
        QString errorMessage = QString("数据库连接失败: %1").arg(error.text());
        // 弹出消息框显示详细的错误信息，方便排查问题
        QMessageBox::critical(this, "数据库连接错误", errorMessage);
    }
    else{
        qDebug() << "数据库连接成功";
    }

    // 创建页面实例
    page0 = new memberwidget(this);
    page1 = new trainerwidget(this);
    page2 = new adminwidget(this);

    // 将页面添加到 QStackedWidget
    ui->stackedWidget->addWidget(page0); // Index 0
    ui->stackedWidget->addWidget(page1); // Index 1
    ui->stackedWidget->addWidget(page2); // Index 2

    // 初始化时显示 membercenter 页面（假设索引为 0）
    ui->stackedWidget->setCurrentIndex(0);

    // 初始化时设置会员按钮为选中状态
    currentSelectedButton = ui->memberButton;
    setButtonSelectedStyle(currentSelectedButton);
}

Widget::~Widget()
{
    if (db.isOpen()) {
        db.close();
        qDebug() << "数据库连接已关闭";
    }
    delete ui;
}

// 点击前往会员界面
void Widget::on_memberButton_clicked()
{
    if (currentSelectedButton) {
        setButtonDefaultStyle(currentSelectedButton);
    }

    currentSelectedButton = ui->memberButton;
    setButtonSelectedStyle(currentSelectedButton);

    ui->stackedWidget->setCurrentIndex(0);
}

// 点击前往教练界面
void Widget::on_trainerButton_clicked()
{
    if (currentSelectedButton) {
        setButtonDefaultStyle(currentSelectedButton);
    }

    currentSelectedButton = ui->trainerButton;
    setButtonSelectedStyle(currentSelectedButton);

    ui->stackedWidget->setCurrentIndex(1);
}

// 点击前往管理员界面
void Widget::on_adminButton_clicked()
{
    if (currentSelectedButton) {
        setButtonDefaultStyle(currentSelectedButton);
    }

    currentSelectedButton = ui->adminButton;
    setButtonSelectedStyle(currentSelectedButton);

    ui->stackedWidget->setCurrentIndex(2);
}

void Widget::setButtonSelectedStyle(QPushButton *button)
{
    // 设置选中按钮的样式，例如改变背景颜色、字体颜色等
    button->setStyleSheet("background-color: lightblue; color: white;");
}

void Widget::setButtonDefaultStyle(QPushButton *button)
{
    // 恢复按钮的默认样式
    button->setStyleSheet("");
}
