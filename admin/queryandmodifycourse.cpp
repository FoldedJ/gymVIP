#include "queryAndModifyCourse.h"
#include "ui_queryAndModifyCourse.h"

queryAndModifyCourse::queryAndModifyCourse(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::queryAndModifyCourse),
    model(new QSqlQueryModel(this)),
    currentCourseId(-1)
{
    ui->setupUi(this);

    // 重新设置模型
    ui->tableView->setModel(nullptr);
    ui->tableView->setModel(model);

    // 设置课程时长 QSpinBox 的显示格式，确保能显示三位数及以上
    ui->classDurationSpinBox->setDisplayIntegerBase(10);
    ui->classDurationSpinBox->setRange(0, INT_MAX);
    ui->classDurationSpinBox->setSingleStep(1);
}

queryAndModifyCourse::~queryAndModifyCourse()
{
    delete ui;
}

void queryAndModifyCourse::on_queryButton_clicked()
{
    QString queryCondition = ui->conditionComboBox->currentText();
    QString queryValue = ui->valueLineEdit->text();

    QString sqlQuery;
    if (queryCondition == "所有课程") {
        sqlQuery = "SELECT * FROM classes";
    } else if (queryCondition == "课程名称") {
        sqlQuery = QString("SELECT * FROM classes WHERE class_name LIKE '%%1%'").arg(queryValue);
    } else if (queryCondition == "授课教练") {
        sqlQuery = QString("SELECT * FROM classes WHERE trainer_id LIKE '%%1%'").arg(queryValue);
    } else if (queryCondition == "时间") {
        sqlQuery = QString("SELECT * FROM classes WHERE class_date LIKE '%%1%'").arg(queryValue);
    }

    QSqlQuery query(sqlQuery);
    model->setQuery(std::move(query));
    if (model->lastError().isValid()) {
        QMessageBox::warning(this, "查询错误", "查询课程信息时出错: " + model->lastError().text());
    } else {
        // 设置表头为中文
        model->setHeaderData(0, Qt::Horizontal, "课程ID");
        model->setHeaderData(1, Qt::Horizontal, "课程名称");
        model->setHeaderData(2, Qt::Horizontal, "课程描述");
        model->setHeaderData(3, Qt::Horizontal, "课程难度级别");
        model->setHeaderData(4, Qt::Horizontal, "课程时长");
        model->setHeaderData(5, Qt::Horizontal, "剩余容量");
        model->setHeaderData(7, Qt::Horizontal, "教练ID");
        model->setHeaderData(8, Qt::Horizontal, "课程开始时间");
        model->setHeaderData(9, Qt::Horizontal, "课程结束时间");
        model->setHeaderData(10, Qt::Horizontal, "课程日期");
    }
}

void queryAndModifyCourse::on_tableView_clicked(const QModelIndex &index)
{
    currentCourseId = model->data(model->index(index.row(), 0)).toInt();
    QSqlQuery query;
    query.prepare("SELECT * FROM classes WHERE class_id = :course_id");
    query.bindValue(":course_id", currentCourseId);
    if (query.exec() && query.next()) {
        ui->classDurationSpinBox->setValue(query.value("class_duration").toInt());
        ui->classCapacitySpinBox->setValue(query.value("class_capacity").toInt());
        ui->startTimeEdit->setTime(QTime::fromString(query.value("start_time").toString(), "hh:mm:ss"));
        ui->classDateEdit->setDate(QDate::fromString(query.value("class_date").toString(), "yyyy-MM-dd"));
    }
}

void queryAndModifyCourse::on_modifyButton_clicked()
{
    if (currentCourseId == -1) {
        QMessageBox::warning(this, "修改失败", "请先选择要修改的课程！");
        return;
    }

    int newDuration = ui->classDurationSpinBox->value();
    int newCapacity = ui->classCapacitySpinBox->value();
    QTime newStartTime = ui->startTimeEdit->time();
    // 根据新的课程时长和开始时间计算结束时间
    QTime newEndTime = newStartTime.addSecs(newDuration * 60);
    QDate newDate = ui->classDateEdit->date();

    QSqlQuery query;
    query.prepare("UPDATE classes SET class_duration = :new_duration, class_capacity = :new_capacity, start_time = :new_start_time, end_time = :new_endTime, class_date = :new_date WHERE class_id = :course_id");
    query.bindValue(":new_duration", newDuration);
    query.bindValue(":new_capacity", newCapacity);
    query.bindValue(":new_start_time", newStartTime.toString("hh:mm:ss"));
    query.bindValue(":new_endTime", newEndTime.toString("hh:mm:ss"));
    query.bindValue(":new_date", newDate.toString("yyyy-MM-dd"));
    query.bindValue(":course_id", currentCourseId);

    if (query.exec()) {
        QMessageBox::information(this, "修改成功", "课程信息已成功修改！");
        // 重新查询并更新表格显示
        on_queryButton_clicked();
    } else {
        QMessageBox::warning(this, "修改失败", "修改课程信息时出现错误: " + query.lastError().text());
    }
}

void queryAndModifyCourse::on_deleteButton_clicked()
{
    if (currentCourseId == -1) {
        QMessageBox::warning(this, "删除失败", "请先选择要删除的课程！");
        return;
    }

    // 先删除课程预约表中与该课程相关的记录
    QSqlQuery deleteReservationQuery;
    deleteReservationQuery.prepare("DELETE FROM reservations WHERE class_id = :course_id");
    deleteReservationQuery.bindValue(":course_id", currentCourseId);
    if (!deleteReservationQuery.exec()) {
        QMessageBox::warning(this, "删除预约记录失败", "删除与课程相关的预约记录时出错: " + deleteReservationQuery.lastError().text());
        return;
    }

    // 再删除课程
    QSqlQuery deleteCourseQuery;
    deleteCourseQuery.prepare("DELETE FROM classes WHERE class_id = :course_id");
    deleteCourseQuery.bindValue(":course_id", currentCourseId);

    if (deleteCourseQuery.exec()) {
        QMessageBox::information(this, "删除成功", "课程已成功删除！");
        // 刷新表格视图
        refreshTableView();
    } else {
        QMessageBox::warning(this, "删除失败", "删除课程时出现错误: " + deleteCourseQuery.lastError().text());
    }
}

void queryAndModifyCourse::refreshTableView()
{
    QString queryCondition = ui->conditionComboBox->currentText();
    QString queryValue = ui->valueLineEdit->text();

    QString sqlQuery;
    if (queryCondition == "所有课程") {
        sqlQuery = "SELECT * FROM classes";
    } else if (queryCondition == "课程名称") {
        sqlQuery = QString("SELECT * FROM classes WHERE class_name LIKE '%%1%'").arg(queryValue);
    } else if (queryCondition == "授课教练") {
        sqlQuery = QString("SELECT * FROM classes WHERE trainer_id LIKE '%%1%'").arg(queryValue);
    } else if (queryCondition == "时间") {
        sqlQuery = QString("SELECT * FROM classes WHERE class_date LIKE '%%1%'").arg(queryValue);
    }

    QSqlQuery query(sqlQuery);
    model->setQuery(std::move(query));
    if (model->lastError().isValid()) {
        QMessageBox::warning(this, "查询错误", "查询课程信息时出错: " + model->lastError().text());
    }
    currentCourseId = -1;
}
