#ifndef MEMBERCENTER_H
#define MEMBERCENTER_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QMessageBox>
#include <QSqlError>

namespace Ui {
class memberCenter;
}

class memberCenter : public QWidget
{
    Q_OBJECT

public:
    explicit memberCenter(int membberId, QWidget *parent = nullptr);
    ~memberCenter();

private slots:
    void on_queryButton_clicked();

    void on_yesButton_2_clicked();

private:
    Ui::memberCenter *ui;
    QSqlQuery query;
    int currentMemberId;
    void queryMemberInfo();
    void displayMemberInfo(const QSqlRecord &record);
};

#endif // MEMBERCENTER_H
