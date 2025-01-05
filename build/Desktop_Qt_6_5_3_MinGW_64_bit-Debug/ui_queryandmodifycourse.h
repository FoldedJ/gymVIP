/********************************************************************************
** Form generated from reading UI file 'queryandmodifycourse.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYANDMODIFYCOURSE_H
#define UI_QUERYANDMODIFYCOURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_queryAndModifyCourse
{
public:
    QGridLayout *gridLayout;
    QLabel *capacityLabel;
    QLabel *durationLabel;
    QLabel *startTimeLabel;
    QPushButton *deleteButton;
    QSpinBox *classDurationSpinBox;
    QLabel *dateLabel;
    QTimeEdit *startTimeEdit;
    QDateEdit *classDateEdit;
    QPushButton *modifyButton;
    QSpinBox *classCapacitySpinBox;
    QTableView *tableView;
    QPushButton *queryButton;
    QLineEdit *valueLineEdit;
    QComboBox *conditionComboBox;

    void setupUi(QWidget *queryAndModifyCourse)
    {
        if (queryAndModifyCourse->objectName().isEmpty())
            queryAndModifyCourse->setObjectName("queryAndModifyCourse");
        queryAndModifyCourse->resize(800, 600);
        gridLayout = new QGridLayout(queryAndModifyCourse);
        gridLayout->setObjectName("gridLayout");
        capacityLabel = new QLabel(queryAndModifyCourse);
        capacityLabel->setObjectName("capacityLabel");

        gridLayout->addWidget(capacityLabel, 4, 2, 1, 1);

        durationLabel = new QLabel(queryAndModifyCourse);
        durationLabel->setObjectName("durationLabel");

        gridLayout->addWidget(durationLabel, 4, 0, 1, 1);

        startTimeLabel = new QLabel(queryAndModifyCourse);
        startTimeLabel->setObjectName("startTimeLabel");

        gridLayout->addWidget(startTimeLabel, 5, 0, 1, 1);

        deleteButton = new QPushButton(queryAndModifyCourse);
        deleteButton->setObjectName("deleteButton");

        gridLayout->addWidget(deleteButton, 6, 2, 1, 2);

        classDurationSpinBox = new QSpinBox(queryAndModifyCourse);
        classDurationSpinBox->setObjectName("classDurationSpinBox");

        gridLayout->addWidget(classDurationSpinBox, 4, 1, 1, 1);

        dateLabel = new QLabel(queryAndModifyCourse);
        dateLabel->setObjectName("dateLabel");

        gridLayout->addWidget(dateLabel, 5, 2, 1, 1);

        startTimeEdit = new QTimeEdit(queryAndModifyCourse);
        startTimeEdit->setObjectName("startTimeEdit");

        gridLayout->addWidget(startTimeEdit, 5, 1, 1, 1);

        classDateEdit = new QDateEdit(queryAndModifyCourse);
        classDateEdit->setObjectName("classDateEdit");

        gridLayout->addWidget(classDateEdit, 5, 3, 1, 1);

        modifyButton = new QPushButton(queryAndModifyCourse);
        modifyButton->setObjectName("modifyButton");

        gridLayout->addWidget(modifyButton, 6, 0, 1, 2);

        classCapacitySpinBox = new QSpinBox(queryAndModifyCourse);
        classCapacitySpinBox->setObjectName("classCapacitySpinBox");

        gridLayout->addWidget(classCapacitySpinBox, 4, 3, 1, 1);

        tableView = new QTableView(queryAndModifyCourse);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 3, 0, 1, 4);

        queryButton = new QPushButton(queryAndModifyCourse);
        queryButton->setObjectName("queryButton");

        gridLayout->addWidget(queryButton, 2, 0, 1, 4);

        valueLineEdit = new QLineEdit(queryAndModifyCourse);
        valueLineEdit->setObjectName("valueLineEdit");

        gridLayout->addWidget(valueLineEdit, 1, 0, 1, 4);

        conditionComboBox = new QComboBox(queryAndModifyCourse);
        conditionComboBox->addItem(QString());
        conditionComboBox->addItem(QString());
        conditionComboBox->addItem(QString());
        conditionComboBox->addItem(QString());
        conditionComboBox->setObjectName("conditionComboBox");

        gridLayout->addWidget(conditionComboBox, 0, 0, 1, 4);


        retranslateUi(queryAndModifyCourse);

        QMetaObject::connectSlotsByName(queryAndModifyCourse);
    } // setupUi

    void retranslateUi(QWidget *queryAndModifyCourse)
    {
        queryAndModifyCourse->setWindowTitle(QCoreApplication::translate("queryAndModifyCourse", "\350\257\276\347\250\213\346\237\245\350\257\242\344\270\216\344\277\256\346\224\271", nullptr));
        capacityLabel->setText(QCoreApplication::translate("queryAndModifyCourse", "\350\257\276\347\250\213\345\256\271\351\207\217:", nullptr));
        durationLabel->setText(QCoreApplication::translate("queryAndModifyCourse", "\350\257\276\347\250\213\346\227\266\351\225\277\357\274\210\345\210\206\351\222\237\357\274\211:", nullptr));
        startTimeLabel->setText(QCoreApplication::translate("queryAndModifyCourse", "\345\274\200\345\247\213\346\227\266\351\227\264:", nullptr));
        deleteButton->setText(QCoreApplication::translate("queryAndModifyCourse", "\345\210\240\351\231\244", nullptr));
        dateLabel->setText(QCoreApplication::translate("queryAndModifyCourse", "\350\257\276\347\250\213\346\227\245\346\234\237:", nullptr));
        modifyButton->setText(QCoreApplication::translate("queryAndModifyCourse", "\344\277\256\346\224\271", nullptr));
        queryButton->setText(QCoreApplication::translate("queryAndModifyCourse", "\346\237\245\350\257\242", nullptr));
        conditionComboBox->setItemText(0, QCoreApplication::translate("queryAndModifyCourse", "\346\211\200\346\234\211\350\257\276\347\250\213", nullptr));
        conditionComboBox->setItemText(1, QCoreApplication::translate("queryAndModifyCourse", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        conditionComboBox->setItemText(2, QCoreApplication::translate("queryAndModifyCourse", "\346\216\210\350\257\276\346\225\231\347\273\203", nullptr));
        conditionComboBox->setItemText(3, QCoreApplication::translate("queryAndModifyCourse", "\346\227\266\351\227\264", nullptr));

    } // retranslateUi

};

namespace Ui {
    class queryAndModifyCourse: public Ui_queryAndModifyCourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYANDMODIFYCOURSE_H
