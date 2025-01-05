#ifndef ADMINWIDGET_H
#define ADMINWIDGET_H

#include <QWidget>
#include <QSqlQuery>
#include <QMessageBox>
#include "admininfo.h"

namespace Ui {
class adminwidget;
}

class adminwidget : public QWidget
{
    Q_OBJECT

public:
    explicit adminwidget(QWidget *parent = nullptr);
    ~adminwidget();

private slots:


    void on_loginButton_clicked();

private:
    Ui::adminwidget *ui;
    QSqlQuery query;
};

#endif // ADMINWIDGET_H
