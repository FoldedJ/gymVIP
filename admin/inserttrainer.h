#ifndef INSERTTRAINER_H
#define INSERTTRAINER_H

#include <QWidget>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDate>
#include <QSqlError>

namespace Ui {
class insertTrainer;
}

class insertTrainer : public QWidget
{
    Q_OBJECT

public:
    explicit insertTrainer(QWidget *parent = nullptr);
    ~insertTrainer();

private slots:
    void on_yesButton_clicked();

private:
    Ui::insertTrainer *ui;
};

#endif // INSERTTRAINER_H
