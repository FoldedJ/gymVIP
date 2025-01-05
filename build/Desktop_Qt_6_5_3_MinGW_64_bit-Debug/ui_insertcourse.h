/********************************************************************************
** Form generated from reading UI file 'insertcourse.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTCOURSE_H
#define UI_INSERTCOURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_insertCourse
{
public:
    QLineEdit *classCapacityLineEdit;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_11;
    QLabel *label_10;
    QLineEdit *classDurationLineEdit;
    QLabel *label_4;
    QLineEdit *trainerIdLineEdit;
    QLabel *label;
    QLineEdit *classNameLineEdit;
    QPushButton *yesButton;
    QLineEdit *classDescriptionTextEdit;
    QLabel *label_7;
    QComboBox *classLevelComboBox;
    QTimeEdit *startTimeEdit;
    QDateEdit *classDateEdit;
    QLabel *label_12;

    void setupUi(QWidget *insertCourse)
    {
        if (insertCourse->objectName().isEmpty())
            insertCourse->setObjectName("insertCourse");
        insertCourse->resize(650, 500);
        classCapacityLineEdit = new QLineEdit(insertCourse);
        classCapacityLineEdit->setObjectName("classCapacityLineEdit");
        classCapacityLineEdit->setGeometry(QRect(270, 210, 113, 25));
        label_8 = new QLabel(insertCourse);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(200, 210, 69, 19));
        label_5 = new QLabel(insertCourse);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(150, 170, 131, 19));
        label_11 = new QLabel(insertCourse);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(200, 290, 69, 19));
        label_10 = new QLabel(insertCourse);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(200, 250, 69, 19));
        classDurationLineEdit = new QLineEdit(insertCourse);
        classDurationLineEdit->setObjectName("classDurationLineEdit");
        classDurationLineEdit->setGeometry(QRect(270, 170, 113, 25));
        label_4 = new QLabel(insertCourse);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(230, 130, 69, 19));
        trainerIdLineEdit = new QLineEdit(insertCourse);
        trainerIdLineEdit->setObjectName("trainerIdLineEdit");
        trainerIdLineEdit->setGeometry(QRect(270, 250, 113, 25));
        label = new QLabel(insertCourse);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 50, 69, 19));
        classNameLineEdit = new QLineEdit(insertCourse);
        classNameLineEdit->setObjectName("classNameLineEdit");
        classNameLineEdit->setGeometry(QRect(270, 50, 113, 25));
        yesButton = new QPushButton(insertCourse);
        yesButton->setObjectName("yesButton");
        yesButton->setGeometry(QRect(270, 390, 93, 28));
        classDescriptionTextEdit = new QLineEdit(insertCourse);
        classDescriptionTextEdit->setObjectName("classDescriptionTextEdit");
        classDescriptionTextEdit->setGeometry(QRect(270, 90, 113, 25));
        label_7 = new QLabel(insertCourse);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(200, 90, 69, 19));
        classLevelComboBox = new QComboBox(insertCourse);
        classLevelComboBox->addItem(QString());
        classLevelComboBox->addItem(QString());
        classLevelComboBox->addItem(QString());
        classLevelComboBox->setObjectName("classLevelComboBox");
        classLevelComboBox->setGeometry(QRect(270, 130, 83, 25));
        startTimeEdit = new QTimeEdit(insertCourse);
        startTimeEdit->setObjectName("startTimeEdit");
        startTimeEdit->setGeometry(QRect(270, 290, 118, 25));
        classDateEdit = new QDateEdit(insertCourse);
        classDateEdit->setObjectName("classDateEdit");
        classDateEdit->setGeometry(QRect(270, 330, 110, 25));
        label_12 = new QLabel(insertCourse);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(200, 330, 69, 19));

        retranslateUi(insertCourse);

        QMetaObject::connectSlotsByName(insertCourse);
    } // setupUi

    void retranslateUi(QWidget *insertCourse)
    {
        insertCourse->setWindowTitle(QCoreApplication::translate("insertCourse", "Form", nullptr));
        label_8->setText(QCoreApplication::translate("insertCourse", "\350\257\276\347\250\213\345\256\271\351\207\217", nullptr));
        label_5->setText(QCoreApplication::translate("insertCourse", "\350\257\276\347\250\213\346\227\266\351\225\277\357\274\210\345\210\206\351\222\237\357\274\211", nullptr));
        label_11->setText(QCoreApplication::translate("insertCourse", "\345\274\200\345\247\213\346\227\266\351\227\264", nullptr));
        label_10->setText(QCoreApplication::translate("insertCourse", "\346\216\210\350\257\276\346\225\231\347\273\203", nullptr));
        classDurationLineEdit->setText(QString());
        label_4->setText(QCoreApplication::translate("insertCourse", "\351\232\276\345\272\246", nullptr));
        label->setText(QCoreApplication::translate("insertCourse", "\350\257\276\347\250\213\345\220\215", nullptr));
        yesButton->setText(QCoreApplication::translate("insertCourse", "\347\241\256\345\256\232", nullptr));
        classDescriptionTextEdit->setText(QString());
        label_7->setText(QCoreApplication::translate("insertCourse", "\350\257\276\347\250\213\346\217\217\350\277\260", nullptr));
        classLevelComboBox->setItemText(0, QCoreApplication::translate("insertCourse", "\345\210\235\347\272\247", nullptr));
        classLevelComboBox->setItemText(1, QCoreApplication::translate("insertCourse", "\344\270\255\347\272\247", nullptr));
        classLevelComboBox->setItemText(2, QCoreApplication::translate("insertCourse", "\351\253\230\347\272\247", nullptr));

        label_12->setText(QCoreApplication::translate("insertCourse", "\350\257\276\347\250\213\346\227\245\346\234\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class insertCourse: public Ui_insertCourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTCOURSE_H
