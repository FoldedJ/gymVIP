#ifndef TRAINERWIDGET_H
#define TRAINERWIDGET_H

#include <QWidget>
#include "trainerinfo.h"
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class trainerwidget;
}

class trainerwidget : public QWidget
{
    Q_OBJECT

public:
    explicit trainerwidget(QWidget *parent = nullptr);
    ~trainerwidget();

private slots:



    void on_loginButton_clicked();

private:
    Ui::trainerwidget *ui;
    QSqlQuery query;
};

#endif // TRAINERWIDGET_H
