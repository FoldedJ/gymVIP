/********************************************************************************
** Form generated from reading UI file 'paymentquery.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYMENTQUERY_H
#define UI_PAYMENTQUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_paymentquery
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *tableView;

    void setupUi(QWidget *paymentquery)
    {
        if (paymentquery->objectName().isEmpty())
            paymentquery->setObjectName("paymentquery");
        paymentquery->resize(602, 400);
        verticalLayout = new QVBoxLayout(paymentquery);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(paymentquery);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        tableView = new QTableView(paymentquery);
        tableView->setObjectName("tableView");
        tableView->setMinimumSize(QSize(580, 300));

        verticalLayout->addWidget(tableView);


        retranslateUi(paymentquery);

        QMetaObject::connectSlotsByName(paymentquery);
    } // setupUi

    void retranslateUi(QWidget *paymentquery)
    {
        paymentquery->setWindowTitle(QCoreApplication::translate("paymentquery", "\347\274\264\350\264\271\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("paymentquery", "\347\274\264\350\264\271\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class paymentquery: public Ui_paymentquery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMENTQUERY_H
