#ifndef QUERYANDMODIFYCOURSE_H
#define QUERYANDMODIFYCOURSE_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDateTime>
#include <QSqlError>

namespace Ui {
class queryAndModifyCourse;
}

class queryAndModifyCourse : public QWidget
{
    Q_OBJECT

public:
    explicit queryAndModifyCourse(QWidget *parent = nullptr);
    ~queryAndModifyCourse();

private slots:
    void on_queryButton_clicked();
    void on_tableView_clicked(const QModelIndex &index);
    void on_modifyButton_clicked();
    void on_deleteButton_clicked();

private:
    Ui::queryAndModifyCourse *ui;
    QSqlQueryModel *model;
    int currentCourseId;
    void refreshTableView(); // 新增用于刷新表格视图的函数
};

#endif // QUERYANDMODIFYCOURSE_H
