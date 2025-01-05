#include "admininfo.h"
#include "ui_admininfo.h"

admininfo::admininfo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admininfo)
    , currentSelectedButton(nullptr)
{
    ui->setupUi(this);

    // 创建页面实例
    page0 = new insertTrainer(this);
    page1 = new courseManage(this);
    page2 = new memberQuery(this);
    page3 = new trainerQuery(this);
    page4 = new PaymentWidget(this);
    page5 = new AdminStatistics(this);

    // 将页面添加到 QStackedWidget
    ui->stackedWidget->addWidget(page0); // Index 0
    ui->stackedWidget->addWidget(page1); // Index 1
    ui->stackedWidget->addWidget(page2); // Index 2
    ui->stackedWidget->addWidget(page3); // Index 3
    ui->stackedWidget->addWidget(page4); // Index 4
    ui->stackedWidget->addWidget(page5); // Index 5

    // 初始化时显示 membercenter 页面
    ui->stackedWidget->setCurrentIndex(2);

    // 初始化时设置会员信息查询按钮为选中状态
    currentSelectedButton = ui->pushButton;
    setButtonSelectedStyle(currentSelectedButton);
}

admininfo::~admininfo()
{
    delete ui;
}

// 教练信息插入
void admininfo::on_insertButton_clicked()
{
    if (currentSelectedButton) {
        setButtonDefaultStyle(currentSelectedButton);
    }

    currentSelectedButton = ui->insertButton;
    setButtonSelectedStyle(currentSelectedButton);

    ui->stackedWidget->setCurrentIndex(0);
}

// 课程管理
void admininfo::on_courseManageButton_clicked()
{
    if (currentSelectedButton) {
        setButtonDefaultStyle(currentSelectedButton);
    }

    currentSelectedButton = ui->courseManageButton;
    setButtonSelectedStyle(currentSelectedButton);

    ui->stackedWidget->setCurrentIndex(1);
}

// 会员信息查询
void admininfo::on_pushButton_clicked()
{
    if (currentSelectedButton) {
        setButtonDefaultStyle(currentSelectedButton);
    }

    currentSelectedButton = ui->pushButton;
    setButtonSelectedStyle(currentSelectedButton);

    ui->stackedWidget->setCurrentIndex(2);
}

void admininfo::setButtonSelectedStyle(QPushButton *button)
{
    // 这里可以设置选中按钮的样式，例如改变背景颜色、字体颜色等
    button->setStyleSheet("background-color: lightblue; color: white;");
}

void admininfo::setButtonDefaultStyle(QPushButton *button)
{
    // 恢复按钮的默认样式
    button->setStyleSheet("");
}

// 教练信息查询
void admininfo::on_pushButton_3_clicked()
{
    if (currentSelectedButton) {
        setButtonDefaultStyle(currentSelectedButton);
    }

    currentSelectedButton = ui->pushButton_3;
    setButtonSelectedStyle(currentSelectedButton);

    ui->stackedWidget->setCurrentIndex(3);
}

// 充值入口
void admininfo::on_pushButton_6_clicked()
{
    if (currentSelectedButton) {
        setButtonDefaultStyle(currentSelectedButton);
    }

    currentSelectedButton = ui->pushButton_6;
    setButtonSelectedStyle(currentSelectedButton);

    ui->stackedWidget->setCurrentIndex(4);
}

// 统计入口
void admininfo::on_pushButton_5_clicked()
{
    if (currentSelectedButton) {
        setButtonDefaultStyle(currentSelectedButton);
    }

    currentSelectedButton = ui->pushButton_5;
    setButtonSelectedStyle(currentSelectedButton);

    ui->stackedWidget->setCurrentIndex(5);
}

