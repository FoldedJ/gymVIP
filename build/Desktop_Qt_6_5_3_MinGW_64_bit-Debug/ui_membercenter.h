/********************************************************************************
** Form generated from reading UI file 'membercenter.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERCENTER_H
#define UI_MEMBERCENTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_memberCenter
{
public:
    QLabel *label_3;
    QLineEdit *phoneLineEdit;
    QLabel *label_5;
    QLineEdit *emailLineEdit;
    QLineEdit *passwordLineEdit;
    QPushButton *queryButton;
    QLineEdit *nameLineEdit;
    QComboBox *membershipTypeComboBox;
    QLabel *label_8;
    QDateEdit *birthDateEdit;
    QLabel *label_6;
    QComboBox *genderComboBox;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *addressLineEdit;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *accountBalanceLineEdit;
    QLabel *label_11;
    QPushButton *yesButton_2;
    QDateEdit *membershipStartDateEdit;
    QDateEdit *membershipEndDateEdit;

    void setupUi(QWidget *memberCenter)
    {
        if (memberCenter->objectName().isEmpty())
            memberCenter->setObjectName("memberCenter");
        memberCenter->resize(650, 600);
        label_3 = new QLabel(memberCenter);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(220, 130, 69, 19));
        phoneLineEdit = new QLineEdit(memberCenter);
        phoneLineEdit->setObjectName("phoneLineEdit");
        phoneLineEdit->setGeometry(QRect(290, 170, 113, 25));
        label_5 = new QLabel(memberCenter);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(250, 250, 69, 19));
        emailLineEdit = new QLineEdit(memberCenter);
        emailLineEdit->setObjectName("emailLineEdit");
        emailLineEdit->setGeometry(QRect(290, 210, 113, 25));
        passwordLineEdit = new QLineEdit(memberCenter);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(290, 450, 113, 25));
        queryButton = new QPushButton(memberCenter);
        queryButton->setObjectName("queryButton");
        queryButton->setGeometry(QRect(220, 490, 93, 28));
        nameLineEdit = new QLineEdit(memberCenter);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(290, 50, 113, 25));
        membershipTypeComboBox = new QComboBox(memberCenter);
        membershipTypeComboBox->addItem(QString());
        membershipTypeComboBox->addItem(QString());
        membershipTypeComboBox->addItem(QString());
        membershipTypeComboBox->setObjectName("membershipTypeComboBox");
        membershipTypeComboBox->setGeometry(QRect(290, 290, 83, 25));
        label_8 = new QLabel(memberCenter);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(250, 450, 69, 19));
        birthDateEdit = new QDateEdit(memberCenter);
        birthDateEdit->setObjectName("birthDateEdit");
        birthDateEdit->setGeometry(QRect(290, 130, 110, 25));
        label_6 = new QLabel(memberCenter);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(250, 210, 69, 19));
        genderComboBox = new QComboBox(memberCenter);
        genderComboBox->addItem(QString());
        genderComboBox->addItem(QString());
        genderComboBox->addItem(QString());
        genderComboBox->setObjectName("genderComboBox");
        genderComboBox->setGeometry(QRect(290, 90, 83, 25));
        label_4 = new QLabel(memberCenter);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(220, 170, 69, 19));
        label_2 = new QLabel(memberCenter);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(250, 90, 69, 19));
        addressLineEdit = new QLineEdit(memberCenter);
        addressLineEdit->setObjectName("addressLineEdit");
        addressLineEdit->setGeometry(QRect(290, 250, 113, 25));
        label_7 = new QLabel(memberCenter);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(220, 290, 69, 19));
        label = new QLabel(memberCenter);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 50, 69, 19));
        label_9 = new QLabel(memberCenter);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(190, 330, 121, 20));
        label_10 = new QLabel(memberCenter);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(190, 370, 131, 20));
        accountBalanceLineEdit = new QLineEdit(memberCenter);
        accountBalanceLineEdit->setObjectName("accountBalanceLineEdit");
        accountBalanceLineEdit->setGeometry(QRect(290, 410, 113, 25));
        label_11 = new QLabel(memberCenter);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(220, 410, 69, 19));
        yesButton_2 = new QPushButton(memberCenter);
        yesButton_2->setObjectName("yesButton_2");
        yesButton_2->setGeometry(QRect(360, 490, 93, 28));
        membershipStartDateEdit = new QDateEdit(memberCenter);
        membershipStartDateEdit->setObjectName("membershipStartDateEdit");
        membershipStartDateEdit->setGeometry(QRect(290, 330, 110, 25));
        membershipEndDateEdit = new QDateEdit(memberCenter);
        membershipEndDateEdit->setObjectName("membershipEndDateEdit");
        membershipEndDateEdit->setGeometry(QRect(290, 370, 110, 25));

        retranslateUi(memberCenter);

        QMetaObject::connectSlotsByName(memberCenter);
    } // setupUi

    void retranslateUi(QWidget *memberCenter)
    {
        memberCenter->setWindowTitle(QCoreApplication::translate("memberCenter", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("memberCenter", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        phoneLineEdit->setText(QString());
        label_5->setText(QCoreApplication::translate("memberCenter", "\345\234\260\345\235\200", nullptr));
        emailLineEdit->setText(QString());
        queryButton->setText(QCoreApplication::translate("memberCenter", "\346\237\245\350\257\242", nullptr));
        membershipTypeComboBox->setItemText(0, QCoreApplication::translate("memberCenter", "\346\234\210\345\215\241", nullptr));
        membershipTypeComboBox->setItemText(1, QCoreApplication::translate("memberCenter", "\345\255\243\345\215\241", nullptr));
        membershipTypeComboBox->setItemText(2, QCoreApplication::translate("memberCenter", "\345\271\264\345\215\241", nullptr));

        label_8->setText(QCoreApplication::translate("memberCenter", "\345\257\206\347\240\201", nullptr));
        label_6->setText(QCoreApplication::translate("memberCenter", "\351\202\256\347\256\261", nullptr));
        genderComboBox->setItemText(0, QCoreApplication::translate("memberCenter", "Male", nullptr));
        genderComboBox->setItemText(1, QCoreApplication::translate("memberCenter", "Female", nullptr));
        genderComboBox->setItemText(2, QCoreApplication::translate("memberCenter", "Other", nullptr));

        label_4->setText(QCoreApplication::translate("memberCenter", "\350\201\224\347\263\273\347\224\265\350\257\235", nullptr));
        label_2->setText(QCoreApplication::translate("memberCenter", "\346\200\247\345\210\253", nullptr));
        addressLineEdit->setText(QString());
        label_7->setText(QCoreApplication::translate("memberCenter", "\344\274\232\345\221\230\347\261\273\345\236\213", nullptr));
        label->setText(QCoreApplication::translate("memberCenter", "\345\247\223\345\220\215", nullptr));
        label_9->setText(QCoreApplication::translate("memberCenter", "\344\274\232\345\221\230\350\265\267\345\247\213\346\227\245\346\234\237", nullptr));
        label_10->setText(QCoreApplication::translate("memberCenter", "\344\274\232\345\221\230\346\210\252\346\255\242\346\227\245\346\234\237", nullptr));
        label_11->setText(QCoreApplication::translate("memberCenter", "\347\264\257\350\256\241\351\207\221\351\242\235", nullptr));
        yesButton_2->setText(QCoreApplication::translate("memberCenter", "\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class memberCenter: public Ui_memberCenter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERCENTER_H
