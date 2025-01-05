#ifndef PAYMENTQUERY_H
#define PAYMENTQUERY_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>

namespace Ui {
class paymentquery;
}

class paymentquery : public QWidget
{
    Q_OBJECT

public:
    explicit paymentquery(int member_id, QWidget *parent = nullptr);
    ~paymentquery();

private:
    Ui::paymentquery *ui;
    int currentMemberId;
    QSqlQueryModel *paymentModel;

    void setupModel();
    bool loadPaymentRecords();
};

#endif // PAYMENTQUERY_H
