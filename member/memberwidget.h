#ifndef MEMBERWIDGET_H
#define MEMBERWIDGET_H

#include <QWidget>
#include "registerwidget.h"
#include "memberinfo.h"
#include <QSqlError>

namespace Ui {
class memberwidget;
}

class memberwidget : public QWidget
{
    Q_OBJECT

public:
    explicit memberwidget(QWidget *parent = nullptr);
    ~memberwidget();


private slots:

    void on_regButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::memberwidget *ui;
};

#endif // MEMBERWIDGET_H
