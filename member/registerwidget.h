#ifndef REGISTERWIDGET_H
#define REGISTERWIDGET_H

#include <QWidget>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDateEdit>
#include <QComboBox>
#include <QLineEdit>
#include <QSqlError>

namespace Ui {
class registerwidget;
}

class registerwidget : public QWidget
{
    Q_OBJECT

public:
    explicit registerwidget(QWidget *parent = nullptr);
    ~registerwidget();

private slots:
    void on_yesButton_clicked();

private:
    Ui::registerwidget *ui;
};

#endif // REGISTERWIDGET_H
