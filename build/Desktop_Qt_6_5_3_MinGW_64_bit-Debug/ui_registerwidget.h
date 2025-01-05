/********************************************************************************
** Form generated from reading UI file 'registerwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWIDGET_H
#define UI_REGISTERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registerwidget
{
public:
    QLabel *label;
    QLineEdit *namelineEdit;
    QLabel *label_2;
    QComboBox *gendercomboBox;
    QLabel *label_3;
    QDateEdit *dateEdit;
    QLabel *label_4;
    QLineEdit *phonelineEdit;
    QLabel *label_5;
    QLineEdit *addresslineEdit;
    QLabel *label_6;
    QLineEdit *emaillineEdit;
    QLabel *label_7;
    QComboBox *typecomboBox_2;
    QLabel *label_8;
    QLineEdit *pwlineEdit;
    QPushButton *yesButton;

    void setupUi(QWidget *registerwidget)
    {
        if (registerwidget->objectName().isEmpty())
            registerwidget->setObjectName("registerwidget");
        registerwidget->resize(600, 600);
        label = new QLabel(registerwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 110, 69, 19));
        namelineEdit = new QLineEdit(registerwidget);
        namelineEdit->setObjectName("namelineEdit");
        namelineEdit->setGeometry(QRect(240, 110, 200, 25));
        label_2 = new QLabel(registerwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(160, 150, 69, 19));
        gendercomboBox = new QComboBox(registerwidget);
        gendercomboBox->addItem(QString());
        gendercomboBox->addItem(QString());
        gendercomboBox->addItem(QString());
        gendercomboBox->setObjectName("gendercomboBox");
        gendercomboBox->setGeometry(QRect(240, 150, 200, 25));
        label_3 = new QLabel(registerwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(160, 190, 69, 19));
        dateEdit = new QDateEdit(registerwidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(240, 190, 200, 25));
        label_4 = new QLabel(registerwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 230, 69, 19));
        phonelineEdit = new QLineEdit(registerwidget);
        phonelineEdit->setObjectName("phonelineEdit");
        phonelineEdit->setGeometry(QRect(240, 230, 200, 25));
        label_5 = new QLabel(registerwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(160, 270, 69, 19));
        addresslineEdit = new QLineEdit(registerwidget);
        addresslineEdit->setObjectName("addresslineEdit");
        addresslineEdit->setGeometry(QRect(240, 270, 200, 25));
        label_6 = new QLabel(registerwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(160, 310, 69, 19));
        emaillineEdit = new QLineEdit(registerwidget);
        emaillineEdit->setObjectName("emaillineEdit");
        emaillineEdit->setGeometry(QRect(240, 310, 200, 25));
        label_7 = new QLabel(registerwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(160, 350, 69, 19));
        typecomboBox_2 = new QComboBox(registerwidget);
        typecomboBox_2->addItem(QString());
        typecomboBox_2->addItem(QString());
        typecomboBox_2->addItem(QString());
        typecomboBox_2->setObjectName("typecomboBox_2");
        typecomboBox_2->setGeometry(QRect(240, 350, 200, 25));
        label_8 = new QLabel(registerwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(160, 390, 69, 19));
        pwlineEdit = new QLineEdit(registerwidget);
        pwlineEdit->setObjectName("pwlineEdit");
        pwlineEdit->setGeometry(QRect(240, 390, 200, 25));
        yesButton = new QPushButton(registerwidget);
        yesButton->setObjectName("yesButton");
        yesButton->setGeometry(QRect(290, 450, 93, 28));

        retranslateUi(registerwidget);

        QMetaObject::connectSlotsByName(registerwidget);
    } // setupUi

    void retranslateUi(QWidget *registerwidget)
    {
        registerwidget->setWindowTitle(QCoreApplication::translate("registerwidget", "\346\226\260\344\274\232\345\221\230\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("registerwidget", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("registerwidget", "\346\200\247\345\210\253", nullptr));
        gendercomboBox->setItemText(0, QCoreApplication::translate("registerwidget", "Male", nullptr));
        gendercomboBox->setItemText(1, QCoreApplication::translate("registerwidget", "Female", nullptr));
        gendercomboBox->setItemText(2, QCoreApplication::translate("registerwidget", "Other", nullptr));

        label_3->setText(QCoreApplication::translate("registerwidget", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        label_4->setText(QCoreApplication::translate("registerwidget", "\350\201\224\347\263\273\347\224\265\350\257\235", nullptr));
        label_5->setText(QCoreApplication::translate("registerwidget", "\345\234\260\345\235\200", nullptr));
        label_6->setText(QCoreApplication::translate("registerwidget", "\351\202\256\347\256\261", nullptr));
        label_7->setText(QCoreApplication::translate("registerwidget", "\344\274\232\345\221\230\347\261\273\345\236\213", nullptr));
        typecomboBox_2->setItemText(0, QCoreApplication::translate("registerwidget", "\346\234\210\345\215\241", nullptr));
        typecomboBox_2->setItemText(1, QCoreApplication::translate("registerwidget", "\345\255\243\345\215\241", nullptr));
        typecomboBox_2->setItemText(2, QCoreApplication::translate("registerwidget", "\345\271\264\345\215\241", nullptr));

        label_8->setText(QCoreApplication::translate("registerwidget", "\345\257\206\347\240\201", nullptr));
        yesButton->setText(QCoreApplication::translate("registerwidget", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerwidget: public Ui_registerwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWIDGET_H
