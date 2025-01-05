/********************************************************************************
** Form generated from reading UI file 'adminwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWIDGET_H
#define UI_ADMINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminwidget
{
public:
    QPushButton *loginButton;
    QLineEdit *usernameLineEdit;
    QLabel *label;
    QLineEdit *passwordLineEdit;
    QLabel *label_2;

    void setupUi(QWidget *adminwidget)
    {
        if (adminwidget->objectName().isEmpty())
            adminwidget->setObjectName("adminwidget");
        adminwidget->resize(650, 600);
        loginButton = new QPushButton(adminwidget);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(300, 380, 100, 35));
        usernameLineEdit = new QLineEdit(adminwidget);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(230, 185, 250, 30));
        label = new QLabel(adminwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 180, 80, 30));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        passwordLineEdit = new QLineEdit(adminwidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(230, 255, 250, 30));
        label_2 = new QLabel(adminwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 250, 80, 30));
        label_2->setFont(font);

        retranslateUi(adminwidget);

        QMetaObject::connectSlotsByName(adminwidget);
    } // setupUi

    void retranslateUi(QWidget *adminwidget)
    {
        adminwidget->setWindowTitle(QCoreApplication::translate("adminwidget", "Form", nullptr));
        loginButton->setText(QCoreApplication::translate("adminwidget", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("adminwidget", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("adminwidget", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminwidget: public Ui_adminwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWIDGET_H
