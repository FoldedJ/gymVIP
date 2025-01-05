/********************************************************************************
** Form generated from reading UI file 'memberwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERWIDGET_H
#define UI_MEMBERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_memberwidget
{
public:
    QPushButton *regButton;
    QLabel *label;
    QLineEdit *emailLineEdit;
    QLabel *label_2;
    QLineEdit *passwordLineEdit;
    QPushButton *loginButton;

    void setupUi(QWidget *memberwidget)
    {
        if (memberwidget->objectName().isEmpty())
            memberwidget->setObjectName("memberwidget");
        memberwidget->resize(650, 600);
        regButton = new QPushButton(memberwidget);
        regButton->setObjectName("regButton");
        regButton->setGeometry(QRect(360, 380, 100, 35));
        label = new QLabel(memberwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 180, 80, 30));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        emailLineEdit = new QLineEdit(memberwidget);
        emailLineEdit->setObjectName("emailLineEdit");
        emailLineEdit->setGeometry(QRect(230, 185, 250, 30));
        label_2 = new QLabel(memberwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 250, 80, 30));
        label_2->setFont(font);
        passwordLineEdit = new QLineEdit(memberwidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(230, 255, 250, 30));
        loginButton = new QPushButton(memberwidget);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(230, 380, 100, 35));

        retranslateUi(memberwidget);

        QMetaObject::connectSlotsByName(memberwidget);
    } // setupUi

    void retranslateUi(QWidget *memberwidget)
    {
        memberwidget->setWindowTitle(QCoreApplication::translate("memberwidget", "\344\274\232\345\221\230\345\212\237\350\203\275", nullptr));
        regButton->setText(QCoreApplication::translate("memberwidget", "\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("memberwidget", "\351\202\256\347\256\261", nullptr));
        label_2->setText(QCoreApplication::translate("memberwidget", "\345\257\206\347\240\201", nullptr));
        loginButton->setText(QCoreApplication::translate("memberwidget", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class memberwidget: public Ui_memberwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERWIDGET_H
