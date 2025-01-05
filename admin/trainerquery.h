#ifndef TRAINERQUERY_H
#define TRAINERQUERY_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>

namespace Ui {
class trainerQuery;
}

class trainerQuery : public QWidget
{
    Q_OBJECT

public:
    explicit trainerQuery(QWidget *parent = nullptr);
    ~trainerQuery();

private slots:
    void on_queryButton_clicked();
    void on_tableView_clicked(const QModelIndex &index);
    void on_saveButton_clicked();

private:
    Ui::trainerQuery *ui;
    QSqlQueryModel *model;
    int currentTrainerId;
};

#endif // TRAINERQUERY_H
