/********************************************************************************
** Form generated from reading UI file 'trainerquery.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINERQUERY_H
#define UI_TRAINERQUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_trainerQuery
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *queryGroupBox;
    QGridLayout *gridLayout_3;
    QComboBox *conditionComboBox;
    QLineEdit *valueLineEdit;
    QPushButton *queryButton;
    QTableView *tableView;
    QGroupBox *modifyGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *specialtyLabel;
    QLineEdit *specialtyLineEdit;
    QLabel *workScheduleLabel;
    QTextEdit *workScheduleTextEdit;
    QPushButton *saveButton;

    void setupUi(QWidget *trainerQuery)
    {
        if (trainerQuery->objectName().isEmpty())
            trainerQuery->setObjectName("trainerQuery");
        trainerQuery->resize(800, 600);
        verticalLayout = new QVBoxLayout(trainerQuery);
        verticalLayout->setObjectName("verticalLayout");
        queryGroupBox = new QGroupBox(trainerQuery);
        queryGroupBox->setObjectName("queryGroupBox");
        gridLayout_3 = new QGridLayout(queryGroupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        conditionComboBox = new QComboBox(queryGroupBox);
        conditionComboBox->addItem(QString());
        conditionComboBox->addItem(QString());
        conditionComboBox->addItem(QString());
        conditionComboBox->addItem(QString());
        conditionComboBox->addItem(QString());
        conditionComboBox->setObjectName("conditionComboBox");

        gridLayout_3->addWidget(conditionComboBox, 0, 0, 1, 1);

        valueLineEdit = new QLineEdit(queryGroupBox);
        valueLineEdit->setObjectName("valueLineEdit");

        gridLayout_3->addWidget(valueLineEdit, 0, 1, 1, 1);

        queryButton = new QPushButton(queryGroupBox);
        queryButton->setObjectName("queryButton");

        gridLayout_3->addWidget(queryButton, 1, 0, 1, 2);


        verticalLayout->addWidget(queryGroupBox);

        tableView = new QTableView(trainerQuery);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        modifyGroupBox = new QGroupBox(trainerQuery);
        modifyGroupBox->setObjectName("modifyGroupBox");
        gridLayout_4 = new QGridLayout(modifyGroupBox);
        gridLayout_4->setObjectName("gridLayout_4");
        specialtyLabel = new QLabel(modifyGroupBox);
        specialtyLabel->setObjectName("specialtyLabel");

        gridLayout_4->addWidget(specialtyLabel, 0, 0, 1, 1);

        specialtyLineEdit = new QLineEdit(modifyGroupBox);
        specialtyLineEdit->setObjectName("specialtyLineEdit");

        gridLayout_4->addWidget(specialtyLineEdit, 0, 1, 1, 1);

        workScheduleLabel = new QLabel(modifyGroupBox);
        workScheduleLabel->setObjectName("workScheduleLabel");

        gridLayout_4->addWidget(workScheduleLabel, 1, 0, 1, 1);

        workScheduleTextEdit = new QTextEdit(modifyGroupBox);
        workScheduleTextEdit->setObjectName("workScheduleTextEdit");

        gridLayout_4->addWidget(workScheduleTextEdit, 1, 1, 1, 1);

        saveButton = new QPushButton(modifyGroupBox);
        saveButton->setObjectName("saveButton");

        gridLayout_4->addWidget(saveButton, 2, 0, 1, 2);


        verticalLayout->addWidget(modifyGroupBox);


        retranslateUi(trainerQuery);

        QMetaObject::connectSlotsByName(trainerQuery);
    } // setupUi

    void retranslateUi(QWidget *trainerQuery)
    {
        trainerQuery->setWindowTitle(QCoreApplication::translate("trainerQuery", "\346\225\231\347\273\203\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        queryGroupBox->setTitle(QCoreApplication::translate("trainerQuery", "\346\237\245\350\257\242\346\235\241\344\273\266", nullptr));
        conditionComboBox->setItemText(0, QCoreApplication::translate("trainerQuery", "\346\211\200\346\234\211\346\225\231\347\273\203", nullptr));
        conditionComboBox->setItemText(1, QCoreApplication::translate("trainerQuery", "\346\225\231\347\273\203ID", nullptr));
        conditionComboBox->setItemText(2, QCoreApplication::translate("trainerQuery", "\346\225\231\347\273\203\345\247\223\345\220\215", nullptr));
        conditionComboBox->setItemText(3, QCoreApplication::translate("trainerQuery", "\350\201\224\347\263\273\347\224\265\350\257\235", nullptr));
        conditionComboBox->setItemText(4, QCoreApplication::translate("trainerQuery", "\351\202\256\347\256\261", nullptr));

        queryButton->setText(QCoreApplication::translate("trainerQuery", "\346\237\245\350\257\242", nullptr));
        modifyGroupBox->setTitle(QCoreApplication::translate("trainerQuery", "\344\277\256\346\224\271\346\225\231\347\273\203\344\277\241\346\201\257", nullptr));
        specialtyLabel->setText(QCoreApplication::translate("trainerQuery", "\346\223\205\351\225\277\350\256\255\347\273\203\351\241\271\347\233\256:", nullptr));
        workScheduleLabel->setText(QCoreApplication::translate("trainerQuery", "\345\267\245\344\275\234\346\216\222\347\217\255\344\277\241\346\201\257:", nullptr));
        saveButton->setText(QCoreApplication::translate("trainerQuery", "\344\277\235\345\255\230\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class trainerQuery: public Ui_trainerQuery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINERQUERY_H
