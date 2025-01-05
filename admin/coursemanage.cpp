#include "coursemanage.h"
#include "ui_coursemanage.h"

courseManage::courseManage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::courseManage)
    , currentSelectedButton(nullptr)
{
    ui->setupUi(this);

    // 创建页面实例
    page0 = new insertCourse(this);
    page2 = new queryAndModifyCourse(this);

    // 将页面添加到 QStackedWidget
    ui->stackedWidget->addWidget(page0); // Index 0
    ui->stackedWidget->addWidget(page2); // Index 1

    // 初始化时显示 insertCourse 页面（假设索引为 0）
    ui->stackedWidget->setCurrentIndex(0);

    // 初始化时设置新增课程按钮为选中状态
    currentSelectedButton = ui->pushButton;
    setButtonSelectedStyle(currentSelectedButton);
}

courseManage::~courseManage()
{
    delete ui;
}

// 新增课程
void courseManage::on_pushButton_clicked()
{
    if (currentSelectedButton) {
        setButtonDefaultStyle(currentSelectedButton);
    }

    currentSelectedButton = ui->pushButton;
    setButtonSelectedStyle(currentSelectedButton);

    ui->stackedWidget->setCurrentIndex(0);
}


// 查询与修改课程
void courseManage::on_pushButton_3_clicked()
{
    if (currentSelectedButton) {
        setButtonDefaultStyle(currentSelectedButton);
    }

    currentSelectedButton = ui->pushButton_3;
    setButtonSelectedStyle(currentSelectedButton);

    ui->stackedWidget->setCurrentIndex(1);
}

void courseManage::setButtonSelectedStyle(QPushButton *button)
{
    // 自定义选中按钮的样式，示例为改变背景颜色和字体颜色
    button->setStyleSheet("background-color: lightblue; color: white;");
}

void courseManage::setButtonDefaultStyle(QPushButton *button)
{
    // 恢复按钮的默认样式
    button->setStyleSheet("");
}
