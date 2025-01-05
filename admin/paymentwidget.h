#ifndef PAYMENTWIDGET_H
#define PAYMENTWIDGET_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QDate>

namespace Ui {
class PaymentWidget;
}

class PaymentWidget : public QWidget
{
    Q_OBJECT

public:
    explicit PaymentWidget(QWidget *parent = nullptr);
    ~PaymentWidget();

private slots:
    void on_payButton_clicked();
    void on_queryButton_clicked();

private:
    Ui::PaymentWidget *ui;

    bool validateMemberId(int memberId);
    bool validateAmount(double amount);
    void loadPaymentRecordsByMemberId(int memberId);
};

#endif // PAYMENTWIDGET_H
