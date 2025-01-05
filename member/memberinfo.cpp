#include "memberinfo.h"
#include "ui_memberinfo.h"

memberinfo::memberinfo(int memberId, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::memberinfo)
    , currentMemberId(memberId)
    , currentSelectedButton(nullptr)
{
    ui->setupUi(this);

    // 创建页面实例
    memberCenter *page0 = new memberCenter(currentMemberId, this);
    courseReservation *page1 = new courseReservation(currentMemberId, this);
    paymentquery *page2 = new paymentquery(currentMemberId, this);

    // 将页面添加到 QStackedWidget
    ui->stackedWidget->addWidget(page0); // Index 0
    ui->stackedWidget->addWidget(page1); // Index 1
    ui->stackedWidget->addWidget(page2); // Index 2

    // 初始化时显示 membercenter 页面
    ui->stackedWidget->setCurrentIndex(0);

    // 初始化时设置个人中心按钮为选中状态
    currentSelectedButton = ui->centerButton;
    setButtonSelectedStyle(currentSelectedButton);
}

memberinfo::~memberinfo()
{
    delete ui;
}

// 进入个人中心
void memberinfo::on_centerButton_clicked()
{
    if (currentSelectedButton) {
        setButtonDefaultStyle(currentSelectedButton);
    }

    currentSelectedButton = ui->centerButton;
    setButtonSelectedStyle(currentSelectedButton);

    ui->stackedWidget->setCurrentIndex(0);
}

// 进入课程预约
void memberinfo::on_courseButton_clicked()
{
    if (currentSelectedButton) {
        setButtonDefaultStyle(currentSelectedButton);
    }

    currentSelectedButton = ui->courseButton;
    setButtonSelectedStyle(currentSelectedButton);

    ui->stackedWidget->setCurrentIndex(1);
}

void memberinfo::setButtonSelectedStyle(QPushButton *button)
{
    // 设置选中按钮的样式，例如改变背景颜色、字体颜色等
    button->setStyleSheet("background-color: lightblue; color: white;");
}

void memberinfo::setButtonDefaultStyle(QPushButton *button)
{
    // 恢复按钮的默认样式
    button->setStyleSheet("");
}

// 进入缴费记录查询
void memberinfo::on_billButton_clicked()
{
    if (currentSelectedButton) {
        setButtonDefaultStyle(currentSelectedButton);
    }

    currentSelectedButton = ui->billButton;
    setButtonSelectedStyle(currentSelectedButton);

    ui->stackedWidget->setCurrentIndex(2);
}

