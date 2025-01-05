/********************************************************************************
** Form generated from reading UI file 'paymentwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYMENTWIDGET_H
#define UI_PAYMENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PaymentWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *memberLabel;
    QLineEdit *memberIdLineEdit;
    QLabel *amountLabel;
    QLineEdit *amountLineEdit;
    QLabel *methodLabel;
    QComboBox *methodComboBox;
    QPushButton *payButton;
    QGridLayout *gridLayout_2;
    QLabel *queryLabel;
    QLineEdit *queryMemberIdLineEdit;
    QTableView *paymentRecordsTableView;
    QPushButton *queryButton;

    void setupUi(QWidget *PaymentWidget)
    {
        if (PaymentWidget->objectName().isEmpty())
            PaymentWidget->setObjectName("PaymentWidget");
        PaymentWidget->resize(804, 600);
        verticalLayout = new QVBoxLayout(PaymentWidget);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        memberLabel = new QLabel(PaymentWidget);
        memberLabel->setObjectName("memberLabel");

        gridLayout->addWidget(memberLabel, 0, 0, 1, 1);

        memberIdLineEdit = new QLineEdit(PaymentWidget);
        memberIdLineEdit->setObjectName("memberIdLineEdit");

        gridLayout->addWidget(memberIdLineEdit, 0, 1, 1, 1);

        amountLabel = new QLabel(PaymentWidget);
        amountLabel->setObjectName("amountLabel");

        gridLayout->addWidget(amountLabel, 1, 0, 1, 1);

        amountLineEdit = new QLineEdit(PaymentWidget);
        amountLineEdit->setObjectName("amountLineEdit");

        gridLayout->addWidget(amountLineEdit, 1, 1, 1, 1);

        methodLabel = new QLabel(PaymentWidget);
        methodLabel->setObjectName("methodLabel");

        gridLayout->addWidget(methodLabel, 2, 0, 1, 1);

        methodComboBox = new QComboBox(PaymentWidget);
        methodComboBox->addItem(QString());
        methodComboBox->addItem(QString());
        methodComboBox->addItem(QString());
        methodComboBox->setObjectName("methodComboBox");

        gridLayout->addWidget(methodComboBox, 2, 1, 1, 1);

        payButton = new QPushButton(PaymentWidget);
        payButton->setObjectName("payButton");

        gridLayout->addWidget(payButton, 3, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        queryLabel = new QLabel(PaymentWidget);
        queryLabel->setObjectName("queryLabel");

        gridLayout_2->addWidget(queryLabel, 0, 0, 1, 1);

        queryMemberIdLineEdit = new QLineEdit(PaymentWidget);
        queryMemberIdLineEdit->setObjectName("queryMemberIdLineEdit");

        gridLayout_2->addWidget(queryMemberIdLineEdit, 0, 1, 1, 1);

        paymentRecordsTableView = new QTableView(PaymentWidget);
        paymentRecordsTableView->setObjectName("paymentRecordsTableView");
        paymentRecordsTableView->setMinimumSize(QSize(780, 300));

        gridLayout_2->addWidget(paymentRecordsTableView, 2, 0, 1, 2);

        queryButton = new QPushButton(PaymentWidget);
        queryButton->setObjectName("queryButton");

        gridLayout_2->addWidget(queryButton, 1, 0, 1, 2);


        verticalLayout->addLayout(gridLayout_2);


        retranslateUi(PaymentWidget);

        QMetaObject::connectSlotsByName(PaymentWidget);
    } // setupUi

    void retranslateUi(QWidget *PaymentWidget)
    {
        PaymentWidget->setWindowTitle(QCoreApplication::translate("PaymentWidget", "\344\274\232\345\221\230\347\274\264\350\264\271", nullptr));
        memberLabel->setText(QCoreApplication::translate("PaymentWidget", "\344\274\232\345\221\230ID:", nullptr));
        amountLabel->setText(QCoreApplication::translate("PaymentWidget", "\347\274\264\350\264\271\351\207\221\351\242\235:", nullptr));
        methodLabel->setText(QCoreApplication::translate("PaymentWidget", "\347\274\264\350\264\271\346\226\271\345\274\217:", nullptr));
        methodComboBox->setItemText(0, QCoreApplication::translate("PaymentWidget", "\345\276\256\344\277\241", nullptr));
        methodComboBox->setItemText(1, QCoreApplication::translate("PaymentWidget", "\346\224\257\344\273\230\345\256\235", nullptr));
        methodComboBox->setItemText(2, QCoreApplication::translate("PaymentWidget", "\347\216\260\351\207\221", nullptr));

        payButton->setText(QCoreApplication::translate("PaymentWidget", "\347\274\264\350\264\271", nullptr));
        queryLabel->setText(QCoreApplication::translate("PaymentWidget", "\346\237\245\350\257\242\347\274\264\350\264\271\350\256\260\345\275\225", nullptr));
        queryButton->setText(QCoreApplication::translate("PaymentWidget", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PaymentWidget: public Ui_PaymentWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMENTWIDGET_H
