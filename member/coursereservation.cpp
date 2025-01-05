#include "courseReservation.h"
#include "ui_courseReservation.h"
#include <QDateTime>

courseReservation::courseReservation(int memberId, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::courseReservation),
    courseModel(new QSqlQueryModel(this)),
    myReservationModel(new QSqlQueryModel(this)),
    memberId(memberId),
    courseId(-1)
{
    ui->setupUi(this);
    ui->courseTableView->setModel(courseModel);
    ui->myReservationTableView->setModel(myReservationModel);

    // 进入页面时自动加载会员预约记录
    loadMemberReservations();

    // 获取当前时间并设置到对应的日期编辑框，作为默认筛选范围起始时间（可根据实际需求调整此逻辑）
    QDateTime currentDateTime = QDateTime::currentDateTime();
    ui->startDateEdit->setDate(currentDateTime.date());
    ui->endDateEdit->setDate(currentDateTime.date().addDays(7));  // 默认显示未来7天的课程，可调整天数
}

courseReservation::~courseReservation()
{
    delete ui;
}

void courseReservation::on_filterButton_clicked()
{
    QString startDate = ui->startDateEdit->date().toString("yyyy-MM-dd");
    QString endDate = ui->endDateEdit->date().toString("yyyy-MM-dd");

    QString sqlQuery = QString("SELECT c.class_id, c.class_name, c.class_description, c.class_level, c.class_duration, c.class_capacity, c.trainer_id, c.start_time, c.end_time, c.class_date "
                               "FROM classes c "
                               "WHERE c.class_date >= '%1' AND c.class_date <= '%2'").arg(startDate, endDate);

    QSqlQuery query(sqlQuery);
    courseModel->setQuery(std::move(query));
    if (courseModel->lastError().isValid()) {
        QMessageBox::warning(this, "筛选错误", "筛选可预约课程时出错: " + courseModel->lastError().text());
    } else {
        // 设置课程表视图的表头
        courseModel->setHeaderData(0, Qt::Horizontal, "课程 ID");
        courseModel->setHeaderData(1, Qt::Horizontal, "课程名称");
        courseModel->setHeaderData(2, Qt::Horizontal, "课程描述");
        courseModel->setHeaderData(3, Qt::Horizontal, "课程级别");
        courseModel->setHeaderData(4, Qt::Horizontal, "课程时长");
        courseModel->setHeaderData(5, Qt::Horizontal, "课程容量");
        courseModel->setHeaderData(6, Qt::Horizontal, "教练 ID");
        courseModel->setHeaderData(7, Qt::Horizontal, "开始时间");
        courseModel->setHeaderData(8, Qt::Horizontal, "结束时间");
        courseModel->setHeaderData(9, Qt::Horizontal, "课程日期");
    }
}

void courseReservation::on_courseTableView_clicked(const QModelIndex &index)
{
    courseId = courseModel->data(courseModel->index(index.row(), 0)).toInt();
}

bool courseReservation::canReserve(int memberId, int courseId)
{
    QSqlQuery query;
    // 检查该会员是否已经有未取消的此课程预约（即只看is_cancelled为0的记录）
    query.prepare("SELECT COUNT(*) FROM reservations WHERE member_id = :member_id AND class_id = :class_id AND is_cancelled = 0");
    query.bindValue(":member_id", memberId);
    query.bindValue(":class_id", courseId);
    query.exec();
    query.next();
    int count = query.value(0).toInt();
    if (count > 0) {
        return false;
    }

    // 检查课程容量是否大于0
    query.prepare("SELECT class_capacity FROM classes WHERE class_id = :class_id");
    query.bindValue(":class_id", courseId);
    query.exec();
    query.next();
    int capacity = query.value(0).toInt();
    if (capacity <= 0) {
        return false;
    }

    // 获取当前系统时间
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString currentTime = currentDateTime.toString("yyyy-MM-dd HH:mm:ss");

    // 查询课程的日期和开始时间
    query.prepare("SELECT class_date, start_time FROM classes WHERE class_id = :class_id");
    query.bindValue(":class_id", courseId);
    query.exec();
    query.next();
    QString classDate = query.value(0).toString();
    QString startTime = query.value(1).toString();
    QString courseDateTime = classDate + " " + startTime;

    // 将课程时间和当前时间转换为 QDateTime 类型进行比较
    QDateTime courseDateTimeObj = QDateTime::fromString(courseDateTime, "yyyy-MM-dd HH:mm:ss");
    if (currentDateTime > courseDateTimeObj) {
        return false;
    }

    return true;
}

void courseReservation::on_reserveButton_clicked()
{
    if (courseId == -1) {
        QMessageBox::warning(this, "预约失败", "请先选择要预约的课程！");
        return;
    }

    if (!canReserve(memberId, courseId)) {
        QMessageBox::warning(this, "预约失败", "您已经有未取消的该课程预约，或者课程容量已满，或者课程已经开始，不能再次预约！");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO reservations (member_id, class_id, reservation_date) VALUES (:member_id, :class_id, CURRENT_TIMESTAMP)");
    query.bindValue(":member_id", memberId);
    query.bindValue(":class_id", courseId);

    if (query.exec()) {
        QMessageBox::information(this, "预约成功", "课程预约成功！");
        on_filterButton_clicked();
        loadMemberReservations();
    } else {
        QMessageBox::warning(this, "预约失败", "课程预约时出现错误: " + query.lastError().text());
    }
}

void courseReservation::on_cancelButton_clicked()
{
    if (courseId == -1) {
        QMessageBox::warning(this, "取消预约失败", "请先选择要取消预约的课程！");
        return;
    }

    QSqlQuery query;
    // 检查是否存在未取消的该课程预约记录
    query.prepare("SELECT COUNT(*) FROM reservations WHERE member_id = :member_id AND class_id = :class_id AND is_cancelled = 0");
    query.bindValue(":member_id", memberId);
    query.bindValue(":class_id", courseId);
    query.exec();
    query.next();
    int count = query.value(0).toInt();
    if (count == 0) {
        QMessageBox::warning(this, "取消预约失败", "该课程不存在未取消的预约记录，不能进行取消操作！");
        return;
    }

    // 获取当前系统时间
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString currentTime = currentDateTime.toString("yyyy-MM-dd HH:mm:ss");

    // 查询课程的日期和开始时间
    query.prepare("SELECT class_date, start_time FROM classes WHERE class_id = :class_id");
    query.bindValue(":class_id", courseId);
    query.exec();
    query.next();
    QString classDate = query.value(0).toString();
    QString startTime = query.value(1).toString();
    QString courseDateTime = classDate + " " + startTime;

    // 将课程时间和当前时间转换为 QDateTime 类型进行比较
    QDateTime courseDateTimeObj = QDateTime::fromString(courseDateTime, "yyyy-MM-dd HH:mm:ss");
    if (currentDateTime > courseDateTimeObj) {
        QMessageBox::warning(this, "取消预约失败", "课程已经开始，不能取消预约！");
        return;
    }

    query.prepare("UPDATE reservations SET is_cancelled = 1 WHERE member_id = :member_id AND class_id = :class_id");
    query.bindValue(":member_id", memberId);
    query.bindValue(":class_id", courseId);

    if (query.exec()) {
        QMessageBox::information(this, "取消预约成功", "课程预约已取消！");
        on_filterButton_clicked();
        loadMemberReservations();
    } else {
        QMessageBox::warning(this, "取消预约失败", "取消课程预约时出现错误: " + query.lastError().text());
    }
}

void courseReservation::loadMemberReservations()
{
    QString sqlQuery = QString("SELECT r.reservation_id, r.class_id, c.class_name, r.reservation_date, r.is_attended, r.is_cancelled "
                               "FROM reservations r "
                               "JOIN classes c ON r.class_id = c.class_id "
                               "WHERE r.member_id = %1 "
                               "ORDER BY r.reservation_id DESC").arg(memberId);
    QSqlQuery myQuery(sqlQuery);
    myReservationModel->setQuery(std::move(myQuery));
    if (myReservationModel->lastError().isValid()) {
        QMessageBox::warning(this, "查询预约记录错误", "查询会员预约记录时出错: " + myReservationModel->lastError().text());
    } else {
        // 设置会员预约表视图的表头
        myReservationModel->setHeaderData(0, Qt::Horizontal, "预约 ID");
        myReservationModel->setHeaderData(1, Qt::Horizontal, "课程 ID");
        myReservationModel->setHeaderData(2, Qt::Horizontal, "课程名称");
        myReservationModel->setHeaderData(3, Qt::Horizontal, "预约日期");
        myReservationModel->setHeaderData(4, Qt::Horizontal, "是否参加");
        myReservationModel->setHeaderData(5, Qt::Horizontal, "是否取消");
    }
}
