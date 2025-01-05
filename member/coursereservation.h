#ifndef COURSERESERVATION_H
#define COURSERESERVATION_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QDateTime>

namespace Ui {
class courseReservation;
}

class courseReservation : public QWidget
{
    Q_OBJECT

public:
    explicit courseReservation(int memberId, QWidget *parent = nullptr);
    ~courseReservation();

private slots:
    void on_filterButton_clicked();
    void on_courseTableView_clicked(const QModelIndex &index);
    void on_reserveButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::courseReservation *ui;
    QSqlQueryModel *courseModel;
    QSqlQueryModel *myReservationModel;
    int memberId;  // 用于存储传递进来的会员 ID
    int courseId; // 成员变量 courseId
    bool canReserve(int memberId, int courseId); // 用于检查是否可以预约
    void loadMemberReservations(); // 用于加载会员预约记录
};

#endif // COURSERESERVATION_H
