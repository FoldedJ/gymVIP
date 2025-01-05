#include "adminStatistics.h"
#include "ui_adminStatistics.h"
#include <QSqlQuery>
#include <QDateTime>

AdminStatistics::AdminStatistics(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminStatistics)
{
    ui->setupUi(this);

    // 设置开始日期编辑框的默认值为当前日期
    ui->startDateEdit->setDate(QDate::currentDate());

    // 设置结束日期编辑框的默认值为当前日期往后推7天
    ui->endDateEdit->setDate(QDate::currentDate().addDays(7));

    // 连接信号与槽，当日期编辑框的值改变时，自动更新课程统计信息
    connect(ui->startDateEdit, &QDateEdit::dateChanged, this, &AdminStatistics::showCourseStatistics);
    connect(ui->endDateEdit, &QDateEdit::dateChanged, this, &AdminStatistics::showCourseStatistics);
}

AdminStatistics::~AdminStatistics()
{
    delete ui;
}

// 会员统计按钮点击槽函数
void AdminStatistics::on_memberStatisticsButton_clicked()
{
    showMemberStatistics();
}

// 课程统计按钮点击槽函数
void AdminStatistics::on_courseStatisticsButton_clicked()
{
    showCourseStatistics();
}

// 财务统计按钮点击槽函数
void AdminStatistics::on_financialStatisticsButton_clicked()
{
    showFinancialStatistics();
}

// 显示会员统计信息
void AdminStatistics::showMemberStatistics()
{
    int totalMemberCount = getTotalMemberCount();
    ui->totalMemberCountLabel->setText(QString::number(totalMemberCount));

    int annualMemberCount = getMemberCountByType("年卡");
    ui->annualMemberCountLabel->setText(QString::number(annualMemberCount));

    int quarterlyMemberCount = getMemberCountByType("季卡");
    ui->quarterlyMemberCountLabel->setText(QString::number(quarterlyMemberCount));

    int monthlyMemberCount = getMemberCountByType("月卡");
    ui->monthlyMemberCountLabel->setText(QString::number(monthlyMemberCount));
}

// 获取会员总数
int AdminStatistics::getTotalMemberCount()
{
    QSqlQuery query("SELECT COUNT(*) FROM members");
    query.exec();
    if (query.next()) {
        return query.value(0).toInt();
    }
    return 0;
}

// 根据会员类型获取会员数量
int AdminStatistics::getMemberCountByType(const QString& memberType)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM members WHERE membership_type = :memberType");
    query.bindValue(":memberType", memberType);
    query.exec();
    if (query.next()) {
        return query.value(0).toInt();
    }
    return 0;
}

// 显示课程统计信息
void AdminStatistics::showCourseStatistics()
{
    // 清空之前的表格数据
    ui->courseStatisticsTableWidget->setRowCount(0);

    QDate startDate = ui->startDateEdit->date();
    QDate endDate = ui->endDateEdit->date();

    // 获取筛选后的课程统计信息
    QSqlQuery resultQuery = getFilteredCourseStatistics(startDate, endDate);
    while (resultQuery.next()) {
        int courseId = resultQuery.value(0).toInt();
        QString courseName = resultQuery.value(1).toString();
        int reservationCount = getReservationCountForCourse(courseId);
        int classCapacity = getClassCapacity(courseId);
        int totalCapacity = classCapacity + reservationCount;
        double popularity = static_cast<double>(reservationCount) / totalCapacity;
        QString courseTime = resultQuery.value(2).toString();

        int row = ui->courseStatisticsTableWidget->rowCount();
        ui->courseStatisticsTableWidget->insertRow(row);
        ui->courseStatisticsTableWidget->setItem(row, 0, new QTableWidgetItem(courseName));
        ui->courseStatisticsTableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(reservationCount)));
        ui->courseStatisticsTableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(popularity, 'f', 2)));
        ui->courseStatisticsTableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(totalCapacity)));
        ui->courseStatisticsTableWidget->setItem(row, 4, new QTableWidgetItem(courseTime));
    }
}

// 根据日期范围获取筛选后的课程统计信息查询结果
QSqlQuery AdminStatistics::getFilteredCourseStatistics(const QDate& startDate, const QDate& endDate)
{
    QString startDateStr = startDate.toString("yyyy-MM-dd");
    QString endDateStr = endDate.toString("yyyy-MM-dd");
    QString sqlQuery = QString("SELECT c.class_id, c.class_name, c.class_date "
                               "FROM classes c "
                               "WHERE c.class_date >= '%1' AND c.class_date <= '%2'").arg(startDateStr, endDateStr);
    QSqlQuery query(sqlQuery);
    query.exec();
    return query;
}

// 获取某课程的预约人数
int AdminStatistics::getReservationCountForCourse(int courseId)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM reservations WHERE class_id = :courseId AND is_cancelled = 0");
    query.bindValue(":courseId", courseId);
    query.exec();
    if (query.next()) {
        return query.value(0).toInt();
    }
    return 0;
}

// 获取某课程的课程容量
int AdminStatistics::getClassCapacity(int courseId)
{
    QSqlQuery query;
    query.prepare("SELECT class_capacity FROM classes WHERE class_id = :courseId");
    query.bindValue(":courseId", courseId);
    query.exec();
    if (query.next()) {
        return query.value(0).toInt();
    }
    return 0;
}

// 显示财务统计信息
void AdminStatistics::showFinancialStatistics()
{
    double totalPaymentAmount = getTotalPaymentAmount();
    ui->totalPaymentAmountLabel->setText(QString::number(totalPaymentAmount, 'f', 2));

    QString paymentMethods[] = {"微信", "支付宝", "现金"};
    for (const QString& method : paymentMethods) {
        double ratio = getPaymentRatioByMethod(method);
        int row = ui->paymentRatioTableWidget->rowCount();
        ui->paymentRatioTableWidget->insertRow(row);
        ui->paymentRatioTableWidget->setItem(row, 0, new QTableWidgetItem(method));
        ui->paymentRatioTableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(ratio, 'f', 2)));
    }
}

// 获取总缴费金额
double AdminStatistics::getTotalPaymentAmount()
{
    QSqlQuery query("SELECT SUM(payment_amount) FROM payment_records");
    query.exec();
    if (query.next()) {
        return query.value(0).toDouble();
    }
    return 0.0;
}

// 获取某缴费方式的占比
double AdminStatistics::getPaymentRatioByMethod(const QString& paymentMethod)
{
    QSqlQuery totalQuery("SELECT SUM(payment_amount) FROM payment_records");
    totalQuery.exec();
    if (totalQuery.next()) {
        double totalAmount = totalQuery.value(0).toDouble();

        QSqlQuery methodQuery;
        methodQuery.prepare("SELECT SUM(payment_amount) FROM payment_records WHERE payment_method = :paymentMethod");
        methodQuery.bindValue(":paymentMethod", paymentMethod);
        methodQuery.exec();
        if (methodQuery.next()) {
            double methodAmount = methodQuery.value(0).toDouble();
            return methodAmount / totalAmount;
        }
    }
    return 0.0;
}
