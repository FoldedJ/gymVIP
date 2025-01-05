/********************************************************************************
** Form generated from reading UI file 'adminstatistics.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSTATISTICS_H
#define UI_ADMINSTATISTICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminStatistics
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *memberStatisticsGroupBox;
    QGridLayout *gridLayout_2;
    QPushButton *memberStatisticsButton;
    QLabel *monthlyMemberCountLabel;
    QLabel *quarterlyMemberCountLabel;
    QLabel *annualMemberCountLabel;
    QLabel *totalMemberCountLabel;
    QLabel *totalMemberCountLabel_2;
    QLabel *monthlyMemberCountLabel_2;
    QLabel *annualMemberCountLabel_2;
    QLabel *quarterlyMemberCountLabel_2;
    QGroupBox *courseStatisticsGroupBox;
    QGridLayout *gridLayout;
    QDateEdit *startDateEdit;
    QTableWidget *courseStatisticsTableWidget;
    QPushButton *courseStatisticsButton;
    QLabel *startDateLabel;
    QLabel *endDateLabel;
    QDateEdit *endDateEdit;
    QGroupBox *financialStatisticsGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *totalPaymentAmountLabel_2;
    QLabel *totalPaymentAmountLabel;
    QPushButton *financialStatisticsButton;
    QTableWidget *paymentRatioTableWidget;

    void setupUi(QWidget *AdminStatistics)
    {
        if (AdminStatistics->objectName().isEmpty())
            AdminStatistics->setObjectName("AdminStatistics");
        AdminStatistics->resize(800, 683);
        verticalLayout = new QVBoxLayout(AdminStatistics);
        verticalLayout->setObjectName("verticalLayout");
        memberStatisticsGroupBox = new QGroupBox(AdminStatistics);
        memberStatisticsGroupBox->setObjectName("memberStatisticsGroupBox");
        gridLayout_2 = new QGridLayout(memberStatisticsGroupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        memberStatisticsButton = new QPushButton(memberStatisticsGroupBox);
        memberStatisticsButton->setObjectName("memberStatisticsButton");

        gridLayout_2->addWidget(memberStatisticsButton, 4, 0, 1, 2);

        monthlyMemberCountLabel = new QLabel(memberStatisticsGroupBox);
        monthlyMemberCountLabel->setObjectName("monthlyMemberCountLabel");

        gridLayout_2->addWidget(monthlyMemberCountLabel, 3, 1, 1, 1);

        quarterlyMemberCountLabel = new QLabel(memberStatisticsGroupBox);
        quarterlyMemberCountLabel->setObjectName("quarterlyMemberCountLabel");

        gridLayout_2->addWidget(quarterlyMemberCountLabel, 2, 1, 1, 1);

        annualMemberCountLabel = new QLabel(memberStatisticsGroupBox);
        annualMemberCountLabel->setObjectName("annualMemberCountLabel");

        gridLayout_2->addWidget(annualMemberCountLabel, 1, 1, 1, 1);

        totalMemberCountLabel = new QLabel(memberStatisticsGroupBox);
        totalMemberCountLabel->setObjectName("totalMemberCountLabel");

        gridLayout_2->addWidget(totalMemberCountLabel, 0, 1, 1, 1);

        totalMemberCountLabel_2 = new QLabel(memberStatisticsGroupBox);
        totalMemberCountLabel_2->setObjectName("totalMemberCountLabel_2");

        gridLayout_2->addWidget(totalMemberCountLabel_2, 0, 0, 1, 1);

        monthlyMemberCountLabel_2 = new QLabel(memberStatisticsGroupBox);
        monthlyMemberCountLabel_2->setObjectName("monthlyMemberCountLabel_2");

        gridLayout_2->addWidget(monthlyMemberCountLabel_2, 3, 0, 1, 1);

        annualMemberCountLabel_2 = new QLabel(memberStatisticsGroupBox);
        annualMemberCountLabel_2->setObjectName("annualMemberCountLabel_2");

        gridLayout_2->addWidget(annualMemberCountLabel_2, 1, 0, 1, 1);

        quarterlyMemberCountLabel_2 = new QLabel(memberStatisticsGroupBox);
        quarterlyMemberCountLabel_2->setObjectName("quarterlyMemberCountLabel_2");

        gridLayout_2->addWidget(quarterlyMemberCountLabel_2, 2, 0, 1, 1);


        verticalLayout->addWidget(memberStatisticsGroupBox);

        courseStatisticsGroupBox = new QGroupBox(AdminStatistics);
        courseStatisticsGroupBox->setObjectName("courseStatisticsGroupBox");
        gridLayout = new QGridLayout(courseStatisticsGroupBox);
        gridLayout->setObjectName("gridLayout");
        startDateEdit = new QDateEdit(courseStatisticsGroupBox);
        startDateEdit->setObjectName("startDateEdit");

        gridLayout->addWidget(startDateEdit, 1, 1, 1, 1);

        courseStatisticsTableWidget = new QTableWidget(courseStatisticsGroupBox);
        if (courseStatisticsTableWidget->columnCount() < 5)
            courseStatisticsTableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        courseStatisticsTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        courseStatisticsTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        courseStatisticsTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        courseStatisticsTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        courseStatisticsTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        courseStatisticsTableWidget->setObjectName("courseStatisticsTableWidget");

        gridLayout->addWidget(courseStatisticsTableWidget, 0, 0, 1, 2);

        courseStatisticsButton = new QPushButton(courseStatisticsGroupBox);
        courseStatisticsButton->setObjectName("courseStatisticsButton");

        gridLayout->addWidget(courseStatisticsButton, 3, 0, 1, 2);

        startDateLabel = new QLabel(courseStatisticsGroupBox);
        startDateLabel->setObjectName("startDateLabel");

        gridLayout->addWidget(startDateLabel, 1, 0, 1, 1);

        endDateLabel = new QLabel(courseStatisticsGroupBox);
        endDateLabel->setObjectName("endDateLabel");

        gridLayout->addWidget(endDateLabel, 2, 0, 1, 1);

        endDateEdit = new QDateEdit(courseStatisticsGroupBox);
        endDateEdit->setObjectName("endDateEdit");

        gridLayout->addWidget(endDateEdit, 2, 1, 1, 1);


        verticalLayout->addWidget(courseStatisticsGroupBox);

        financialStatisticsGroupBox = new QGroupBox(AdminStatistics);
        financialStatisticsGroupBox->setObjectName("financialStatisticsGroupBox");
        gridLayout_3 = new QGridLayout(financialStatisticsGroupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        totalPaymentAmountLabel_2 = new QLabel(financialStatisticsGroupBox);
        totalPaymentAmountLabel_2->setObjectName("totalPaymentAmountLabel_2");

        gridLayout_3->addWidget(totalPaymentAmountLabel_2, 0, 0, 1, 1);

        totalPaymentAmountLabel = new QLabel(financialStatisticsGroupBox);
        totalPaymentAmountLabel->setObjectName("totalPaymentAmountLabel");

        gridLayout_3->addWidget(totalPaymentAmountLabel, 0, 1, 1, 1);

        financialStatisticsButton = new QPushButton(financialStatisticsGroupBox);
        financialStatisticsButton->setObjectName("financialStatisticsButton");

        gridLayout_3->addWidget(financialStatisticsButton, 2, 0, 1, 2);

        paymentRatioTableWidget = new QTableWidget(financialStatisticsGroupBox);
        if (paymentRatioTableWidget->columnCount() < 2)
            paymentRatioTableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        paymentRatioTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        paymentRatioTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        paymentRatioTableWidget->setObjectName("paymentRatioTableWidget");

        gridLayout_3->addWidget(paymentRatioTableWidget, 1, 0, 1, 2);


        verticalLayout->addWidget(financialStatisticsGroupBox);


        retranslateUi(AdminStatistics);

        QMetaObject::connectSlotsByName(AdminStatistics);
    } // setupUi

    void retranslateUi(QWidget *AdminStatistics)
    {
        AdminStatistics->setWindowTitle(QCoreApplication::translate("AdminStatistics", "\347\256\241\347\220\206\345\221\230\347\273\237\350\256\241", nullptr));
        memberStatisticsGroupBox->setTitle(QCoreApplication::translate("AdminStatistics", "\344\274\232\345\221\230\347\273\237\350\256\241", nullptr));
        memberStatisticsButton->setText(QCoreApplication::translate("AdminStatistics", "\350\216\267\345\217\226\344\274\232\345\221\230\347\273\237\350\256\241\344\277\241\346\201\257", nullptr));
        monthlyMemberCountLabel->setText(QCoreApplication::translate("AdminStatistics", "0", nullptr));
        quarterlyMemberCountLabel->setText(QCoreApplication::translate("AdminStatistics", "0", nullptr));
        annualMemberCountLabel->setText(QCoreApplication::translate("AdminStatistics", "0", nullptr));
        totalMemberCountLabel->setText(QCoreApplication::translate("AdminStatistics", "0", nullptr));
        totalMemberCountLabel_2->setText(QCoreApplication::translate("AdminStatistics", "\344\274\232\345\221\230\346\200\273\346\225\260\357\274\232", nullptr));
        monthlyMemberCountLabel_2->setText(QCoreApplication::translate("AdminStatistics", "\346\234\210\345\215\241\344\274\232\345\221\230\346\225\260\351\207\217\357\274\232", nullptr));
        annualMemberCountLabel_2->setText(QCoreApplication::translate("AdminStatistics", "\345\271\264\345\215\241\344\274\232\345\221\230\346\225\260\351\207\217\357\274\232", nullptr));
        quarterlyMemberCountLabel_2->setText(QCoreApplication::translate("AdminStatistics", "\345\255\243\345\215\241\344\274\232\345\221\230\346\225\260\351\207\217\357\274\232", nullptr));
        courseStatisticsGroupBox->setTitle(QCoreApplication::translate("AdminStatistics", "\350\257\276\347\250\213\347\273\237\350\256\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem = courseStatisticsTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AdminStatistics", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = courseStatisticsTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AdminStatistics", "\351\242\204\347\272\246\344\272\272\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = courseStatisticsTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("AdminStatistics", "\347\203\255\351\227\250\347\250\213\345\272\246", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = courseStatisticsTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("AdminStatistics", "\350\257\276\347\250\213\346\200\273\345\256\271\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = courseStatisticsTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("AdminStatistics", "\350\257\276\347\250\213\346\227\266\351\227\264", nullptr));
        courseStatisticsButton->setText(QCoreApplication::translate("AdminStatistics", "\350\216\267\345\217\226\350\257\276\347\250\213\347\273\237\350\256\241\344\277\241\346\201\257", nullptr));
        startDateLabel->setText(QCoreApplication::translate("AdminStatistics", "\345\274\200\345\247\213\346\227\245\346\234\237\357\274\232", nullptr));
        endDateLabel->setText(QCoreApplication::translate("AdminStatistics", "\347\273\223\346\235\237\346\227\245\346\234\237\357\274\232", nullptr));
        financialStatisticsGroupBox->setTitle(QCoreApplication::translate("AdminStatistics", "\350\264\242\345\212\241\347\273\237\350\256\241", nullptr));
        totalPaymentAmountLabel_2->setText(QCoreApplication::translate("AdminStatistics", "\346\200\273\347\274\264\350\264\271\351\207\221\351\242\235\357\274\232", nullptr));
        totalPaymentAmountLabel->setText(QCoreApplication::translate("AdminStatistics", "0.00", nullptr));
        financialStatisticsButton->setText(QCoreApplication::translate("AdminStatistics", "\350\216\267\345\217\226\350\264\242\345\212\241\347\273\237\350\256\241\344\277\241\346\201\257", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = paymentRatioTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("AdminStatistics", "\347\274\264\350\264\271\346\226\271\345\274\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = paymentRatioTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("AdminStatistics", "\345\215\240\346\257\224", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminStatistics: public Ui_AdminStatistics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSTATISTICS_H
