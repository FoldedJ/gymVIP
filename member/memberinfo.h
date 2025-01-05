#ifndef MEMBERINFO_H
#define MEMBERINFO_H

#include <QWidget>
#include "membercenter.h"
#include <QSqlQuery>
#include "coursereservation.h"
#include "paymentquery.h"

namespace Ui {
class memberinfo;
}

class memberinfo : public QWidget
{
    Q_OBJECT

public:
    explicit memberinfo(int memberId, QWidget *parent = nullptr);
    ~memberinfo();

private slots:


    void on_centerButton_clicked();

    void on_courseButton_clicked();

    void on_billButton_clicked();

private:
    Ui::memberinfo *ui;
    QSqlQuery query;
    int currentMemberId;
    QPushButton *currentSelectedButton;

    // 用于设置按钮的选中样式
    void setButtonSelectedStyle(QPushButton *button);

    // 用于恢复按钮的默认样式
    void setButtonDefaultStyle(QPushButton *button);
};

#endif // MEMBERINFO_H
