#ifndef TRAINERINFO_H
#define TRAINERINFO_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QDateTime>
#include <QMessageBox>

namespace Ui {
class trainerinfo;
}

class trainerinfo : public QWidget
{
    Q_OBJECT

public:
    explicit trainerinfo(int id, QWidget *parent = nullptr);
    ~trainerinfo();

private:
    Ui::trainerinfo *ui;
    int trainerId;
    QSqlQueryModel *courseModel;
    QSqlQueryModel *memberModel;

    void setupModels();
    bool loadTrainerCourses();
    void loadCourseMembers(int classId);

private slots:
    void on_courseTableView_clicked(const QModelIndex &index);
};

#endif // TRAINERINFO_H
