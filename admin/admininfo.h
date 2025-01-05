#ifndef ADMININFO_H
#define ADMININFO_H

#include <QWidget>
#include "inserttrainer.h"
#include "coursemanage.h"
#include "memberquery.h"
#include "trainerquery.h"
#include "paymentwidget.h"
#include "adminstatistics.h"

namespace Ui {
class admininfo;
}

class admininfo : public QWidget
{
    Q_OBJECT

public:
    explicit admininfo(QWidget *parent = nullptr);
    ~admininfo();

private slots:
    void on_insertButton_clicked();

    void on_courseManageButton_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::admininfo *ui;
    insertTrainer *page0;
    courseManage *page1;
    memberQuery *page2;
    trainerQuery *page3;
    PaymentWidget *page4;
    AdminStatistics *page5;

    // 用于记录当前选中的按钮
    QPushButton *currentSelectedButton;

    // 用于设置按钮的选中样式
    void setButtonSelectedStyle(QPushButton *button);

    // 用于恢复按钮的默认样式
    void setButtonDefaultStyle(QPushButton *button);
};

#endif // ADMININFO_H
