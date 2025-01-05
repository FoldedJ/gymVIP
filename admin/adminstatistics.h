#ifndef ADMINSTATISTICS_H
#define ADMINSTATISTICS_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QDate>
#include <QDateTime>

namespace Ui {
class AdminStatistics;
}

class AdminStatistics : public QWidget
{
    Q_OBJECT

public:
    explicit AdminStatistics(QWidget *parent = nullptr);
    ~AdminStatistics();

private slots:
    void on_memberStatisticsButton_clicked();
    void on_courseStatisticsButton_clicked();
    void on_financialStatisticsButton_clicked();

private:
    Ui::AdminStatistics *ui;

    void showMemberStatistics();
    void showCourseStatistics();
    void showFinancialStatistics();

    int getTotalMemberCount();
    int getMemberCountByType(const QString& memberType);

    int getReservationCountForCourse(int courseId);
    int getClassCapacity(int courseId);
    double getPopularityForCourse(int courseId);
    int getReservationCountForCourseByPeriod(int courseId, const QDate& startDate, const QDate& endDate);

    double getTotalPaymentAmount();
    double getPaymentRatioByMethod(const QString& paymentMethod);
    QSqlQuery getFilteredCourseStatistics(const QDate& startDate, const QDate& endDate);
};

#endif // ADMINSTATISTICS_H
