#ifndef MEMBERQUERY_H
#define MEMBERQUERY_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>

namespace Ui {
class memberQuery;
}

class memberQuery : public QWidget
{
    Q_OBJECT

public:
    explicit memberQuery(QWidget *parent = nullptr);
    ~memberQuery();

private slots:
    void on_queryButton_clicked();

private:
    Ui::memberQuery *ui;
    QSqlQueryModel *model;
};

#endif // MEMBERQUERY_H
