#include "insertcourse.h"
#include "ui_insertcourse.h"
#include <QDateTime>

insertCourse::insertCourse(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::insertCourse)
{
    ui->setupUi(this);

    // 将课程开始时间和日期默认为当前时间
    ui->startTimeEdit->setTime(QTime::currentTime());
    ui->classDateEdit->setDate(QDate::currentDate());
}

insertCourse::~insertCourse()
{
    delete ui;
}

void insertCourse::on_yesButton_clicked()
{
    QString className = ui->classNameLineEdit->text();
    QString classDescription = ui->classDescriptionTextEdit->text();
    QString classLevel = ui->classLevelComboBox->currentText();
    QString classDurationStr = ui->classDurationLineEdit->text();
    QString classCapacityStr = ui->classCapacityLineEdit->text();
    QString trainerIdStr = ui->trainerIdLineEdit->text();
    QTime startTime = ui->startTimeEdit->time();
    QDate classDate = ui->classDateEdit->date();
    QString dateString = classDate.toString("yyyy-MM-dd");

    // 检查必填项是否为空
    if (className.isEmpty() || classCapacityStr.isEmpty() || dateString.isEmpty()) {
        QMessageBox::warning(this, "添加失败", "课程名称、课程容量和课程日期不能为空，请重新填写！");
        return;
    }

    // 将课程时长字符串转换为整数
    bool ok;
    int classDuration = classDurationStr.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "添加失败", "课程时长必须为整数，请重新输入！");
        return;
    }

    // 将课程容量字符串转换为整数
    int classCapacity = classCapacityStr.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "添加失败", "课程容量必须为整数，请重新输入！");
        return;
    }

    // 将教练ID字符串转换为整数
    int trainerId = trainerIdStr.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "添加失败", "教练ID必须为整数，请重新输入！");
        return;
    }

    // 计算结束时间
    QTime endTime = startTime.addSecs(classDuration * 60);

    QSqlQuery query;
    query.prepare("INSERT INTO classes (class_name, class_description, class_level, class_duration, class_capacity, trainer_id, start_time, end_time, class_date) "
                  "VALUES (:class_name, :class_description, :class_level, :class_duration, :class_capacity, :trainer_id, :start_time, :end_time, :class_date)");
    query.bindValue(":class_name", className);
    query.bindValue(":class_description", classDescription);
    query.bindValue(":class_level", classLevel);
    query.bindValue(":class_duration", classDuration);
    query.bindValue(":class_capacity", classCapacity);
    query.bindValue(":trainer_id", trainerId);
    query.bindValue(":start_time", startTime.toString("hh:mm"));
    query.bindValue(":end_time", endTime.toString("hh:mm"));
    query.bindValue(":class_date", dateString);

    if (query.exec()) {
        QMessageBox::information(this, "添加成功", "课程信息已成功添加！");
        // 可以在这里添加代码清空输入框内容，以便继续添加新的课程信息
    } else {
        QMessageBox::warning(this, "添加失败", "添加课程信息时出现错误: " + query.lastError().text());
    }
}
