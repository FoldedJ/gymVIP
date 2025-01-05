#ifndef INSERTCOURSE_H
#define INSERTCOURSE_H

#include <QWidget>
#include <QSqlQuery>
#include <QMessageBox>
#include <QTime>
#include <QDate>
#include <QSqlError>

namespace Ui {
class insertCourse;
}

class insertCourse : public QWidget
{
    Q_OBJECT

public:
    explicit insertCourse(QWidget *parent = nullptr);
    ~insertCourse();

private slots:
    void on_yesButton_clicked();

private:
    Ui::insertCourse *ui;
};

#endif // INSERTCOURSE_H
