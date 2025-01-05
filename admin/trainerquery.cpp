#include "trainerQuery.h"
#include "ui_trainerQuery.h"

trainerQuery::trainerQuery(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::trainerQuery),
    model(new QSqlQueryModel(this)),
    currentTrainerId(-1)
{
    ui->setupUi(this);
    ui->tableView->setModel(model);
}

trainerQuery::~trainerQuery()
{
    delete ui;
}

void trainerQuery::on_queryButton_clicked()
{
    QString queryCondition = ui->conditionComboBox->currentText();
    QString queryValue = ui->valueLineEdit->text();

    QString sqlQuery;
    if (queryCondition == "所有教练") {
        sqlQuery = "SELECT trainer_id, name, gender, contact_number, email, specialty, qualification, hire_date, work_schedule FROM trainers";
    } else if (queryCondition == "教练ID") {
        sqlQuery = QString("SELECT trainer_id, name, gender, contact_number, email, specialty, qualification, hire_date, work_schedule FROM trainers WHERE trainer_id = '%1'").arg(queryValue);
    } else if (queryCondition == "教练姓名") {
        sqlQuery = QString("SELECT trainer_id, name, gender, contact_number, email, specialty, qualification, hire_date, work_schedule FROM trainers WHERE name LIKE '%%1%'").arg(queryValue);
    } else if (queryCondition == "联系电话") {
        sqlQuery = QString("SELECT trainer_id, name, gender, contact_number, email, specialty, qualification, hire_date, work_schedule FROM trainers WHERE contact_number LIKE '%%1%'").arg(queryValue);
    } else if (queryCondition == "邮箱") {
        sqlQuery = QString("SELECT trainer_id, name, gender, contact_number, email, specialty, qualification, hire_date, work_schedule FROM trainers WHERE email LIKE '%%1%'").arg(queryValue);
    }

    QSqlQuery query(sqlQuery);
    model->setQuery(std::move(query));
    if (model->lastError().isValid()) {
        QMessageBox::warning(this, "查询错误", "查询教练信息时出错: " + model->lastError().text());
    } else {
        // 设置表头
        model->setHeaderData(0, Qt::Horizontal, "教练 ID");
        model->setHeaderData(1, Qt::Horizontal, "教练姓名");
        model->setHeaderData(2, Qt::Horizontal, "性别");
        model->setHeaderData(3, Qt::Horizontal, "联系电话");
        model->setHeaderData(4, Qt::Horizontal, "邮箱");
        model->setHeaderData(5, Qt::Horizontal, "专长");
        model->setHeaderData(6, Qt::Horizontal, "资质");
        model->setHeaderData(7, Qt::Horizontal, "入职日期");
        model->setHeaderData(8, Qt::Horizontal, "工作安排");
    }
}

void trainerQuery::on_tableView_clicked(const QModelIndex &index)
{
    currentTrainerId = model->data(model->index(index.row(), 0)).toInt();
    QSqlQuery query;
    query.prepare("SELECT * FROM trainers WHERE trainer_id = :trainer_id");
    query.bindValue(":trainer_id", currentTrainerId);
    if (query.exec() && query.next()) {
        ui->specialtyLineEdit->setText(query.value("specialty").toString());
        ui->workScheduleTextEdit->setText(query.value("work_schedule").toString());
    }
}

void trainerQuery::on_saveButton_clicked()
{
    QString newSpecialty = ui->specialtyLineEdit->text();
    QString newWorkSchedule = ui->workScheduleTextEdit->toPlainText();

    QSqlQuery query;
    query.prepare("UPDATE trainers SET specialty = :new_specialty, work_schedule = :new_work_schedule WHERE trainer_id = :trainer_id");
    query.bindValue(":new_specialty", newSpecialty);
    query.bindValue(":new_work_schedule", newWorkSchedule);
    query.bindValue(":trainer_id", currentTrainerId);

    if (query.exec()) {
        QMessageBox::information(this, "修改成功", "教练信息已成功修改！");
        // 重新查询并更新表格显示
        on_queryButton_clicked();
    } else {
        QMessageBox::warning(this, "修改失败", "修改教练信息时出现错误: " + query.lastError().text());
    }
}
