/********************************************************************************
** Form generated from reading UI file 'memberquery.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERQUERY_H
#define UI_MEMBERQUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_memberQuery
{
public:
    QGridLayout *gridLayout;
    QComboBox *conditionComboBox;
    QLineEdit *valueLineEdit;
    QPushButton *queryButton;
    QTableView *tableView;

    void setupUi(QWidget *memberQuery)
    {
        if (memberQuery->objectName().isEmpty())
            memberQuery->setObjectName("memberQuery");
        memberQuery->resize(800, 600);
        gridLayout = new QGridLayout(memberQuery);
        gridLayout->setObjectName("gridLayout");
        conditionComboBox = new QComboBox(memberQuery);
        conditionComboBox->addItem(QString());
        conditionComboBox->addItem(QString());
        conditionComboBox->addItem(QString());
        conditionComboBox->addItem(QString());
        conditionComboBox->addItem(QString());
        conditionComboBox->setObjectName("conditionComboBox");

        gridLayout->addWidget(conditionComboBox, 0, 0, 1, 2);

        valueLineEdit = new QLineEdit(memberQuery);
        valueLineEdit->setObjectName("valueLineEdit");

        gridLayout->addWidget(valueLineEdit, 1, 0, 1, 2);

        queryButton = new QPushButton(memberQuery);
        queryButton->setObjectName("queryButton");

        gridLayout->addWidget(queryButton, 2, 0, 1, 2);

        tableView = new QTableView(memberQuery);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 3, 0, 1, 2);


        retranslateUi(memberQuery);

        QMetaObject::connectSlotsByName(memberQuery);
    } // setupUi

    void retranslateUi(QWidget *memberQuery)
    {
        memberQuery->setWindowTitle(QCoreApplication::translate("memberQuery", "\344\274\232\345\221\230\346\237\245\350\257\242", nullptr));
        conditionComboBox->setItemText(0, QCoreApplication::translate("memberQuery", "\346\211\200\346\234\211\344\274\232\345\221\230", nullptr));
        conditionComboBox->setItemText(1, QCoreApplication::translate("memberQuery", "\344\274\232\345\221\230ID", nullptr));
        conditionComboBox->setItemText(2, QCoreApplication::translate("memberQuery", "\344\274\232\345\221\230\345\247\223\345\220\215", nullptr));
        conditionComboBox->setItemText(3, QCoreApplication::translate("memberQuery", "\350\201\224\347\263\273\347\224\265\350\257\235", nullptr));
        conditionComboBox->setItemText(4, QCoreApplication::translate("memberQuery", "\351\202\256\347\256\261", nullptr));

        queryButton->setText(QCoreApplication::translate("memberQuery", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class memberQuery: public Ui_memberQuery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERQUERY_H
