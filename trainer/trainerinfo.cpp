#include "trainerinfo.h"
#include "ui_trainerinfo.h"

trainerinfo::trainerinfo(int id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::trainerinfo),
    trainerId(id),
    courseModel(new QSqlQueryModel(this)),
    memberModel(new QSqlQueryModel(this))
{
    ui->setupUi(this);

    setupModels();
    if (!loadTrainerCourses()) {
        QMessageBox::warning(this, "错误", "加载教练课程信息失败!");
    }
}

trainerinfo::~trainerinfo()
{
    delete ui;
}

void trainerinfo::setupModels()
{
    ui->courseTableView->setModel(courseModel);
    ui->memberTableView->setModel(memberModel);

    connect(ui->courseTableView, &QTableView::clicked, this, &trainerinfo::on_courseTableView_clicked);
}

bool trainerinfo::loadTrainerCourses()
{
    QSqlQuery query;
    // 获取系统当前时间
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString currentDateTimeStr = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");

    query.prepare("SELECT class_id, class_name, class_date, start_time, end_time, class_capacity "
                  "FROM classes "
                  "WHERE trainer_id = :trainer_id "
                  "AND (class_date > :current_date OR (class_date = :current_date AND start_time > :current_time))");
    query.bindValue(":trainer_id", this->trainerId);
    query.bindValue(":current_date", currentDateTime.date().toString("yyyy-MM-dd"));
    query.bindValue(":current_time", currentDateTime.time().toString("hh:mm:ss"));

    if (query.exec()) {
        this->courseModel->setQuery(query);
        this->courseModel->setHeaderData(0, Qt::Horizontal, "课程 ID");
        this->courseModel->setHeaderData(1, Qt::Horizontal, "课程名称");
        this->courseModel->setHeaderData(2, Qt::Horizontal, "课程日期");
        this->courseModel->setHeaderData(3, Qt::Horizontal, "开始时间");
        this->courseModel->setHeaderData(4, Qt::Horizontal, "结束时间");
        this->courseModel->setHeaderData(5, Qt::Horizontal, "剩余容量");
        return true;
    } else {
        qDebug() << "查询教练课程出错: " << query.lastError().text();
        return false;
    }
}

void trainerinfo::on_courseTableView_clicked(const QModelIndex &index)
{
    int classId = ui->courseTableView->model()->data(ui->courseTableView->model()->index(index.row(), 0)).toInt();
    loadCourseMembers(classId);
}

void trainerinfo::loadCourseMembers(int classId)
{
    QSqlQuery query;
    query.prepare("SELECT m.member_id, m.name, m.gender "
                  "FROM reservations r JOIN members m ON r.member_id = m.member_id "
                  "WHERE r.class_id = :class_id AND r.is_cancelled = 0");
    query.bindValue(":class_id", classId);
    if (query.exec()) {
        memberModel->setQuery(query);
        memberModel->setHeaderData(0, Qt::Horizontal, "会员 ID");
        memberModel->setHeaderData(1, Qt::Horizontal, "会员姓名");
        memberModel->setHeaderData(2, Qt::Horizontal, "性别");
    } else {
        QMessageBox::warning(this, "错误", "查询课程会员信息失败，请检查网络或联系管理员！");
    }
}
