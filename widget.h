#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlDatabase>
#include <QMessageBox>
#include "member/memberwidget.h"
#include "trainer/trainerwidget.h"
#include "admin/adminwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_memberButton_clicked();
    void on_trainerButton_clicked();
    void on_adminButton_clicked();

private:
    Ui::Widget *ui;
    QSqlDatabase db;
    memberwidget *page0;
    trainerwidget *page1;
    adminwidget *page2;

    // 用于记录当前选中的按钮
    QPushButton *currentSelectedButton;

    // 用于设置按钮的选中样式
    void setButtonSelectedStyle(QPushButton *button);

    // 用于恢复按钮的默认样式
    void setButtonDefaultStyle(QPushButton *button);
};
#endif // WIDGET_H
