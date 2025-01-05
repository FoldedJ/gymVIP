/********************************************************************************
** Form generated from reading UI file 'trainerwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINERWIDGET_H
#define UI_TRAINERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_trainerwidget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *trainerIdLineEdit;
    QLineEdit *passwordLineEdit;
    QPushButton *loginButton;

    void setupUi(QWidget *trainerwidget)
    {
        if (trainerwidget->objectName().isEmpty())
            trainerwidget->setObjectName("trainerwidget");
        trainerwidget->resize(650, 600);
        label = new QLabel(trainerwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 180, 80, 30));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(trainerwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 250, 80, 30));
        label_2->setFont(font);
        trainerIdLineEdit = new QLineEdit(trainerwidget);
        trainerIdLineEdit->setObjectName("trainerIdLineEdit");
        trainerIdLineEdit->setGeometry(QRect(230, 185, 250, 30));
        passwordLineEdit = new QLineEdit(trainerwidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(230, 255, 250, 30));
        loginButton = new QPushButton(trainerwidget);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(300, 380, 100, 35));

        retranslateUi(trainerwidget);

        QMetaObject::connectSlotsByName(trainerwidget);
    } // setupUi

    void retranslateUi(QWidget *trainerwidget)
    {
        trainerwidget->setWindowTitle(QCoreApplication::translate("trainerwidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("trainerwidget", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("trainerwidget", "\345\257\206\347\240\201", nullptr));
        loginButton->setText(QCoreApplication::translate("trainerwidget", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class trainerwidget: public Ui_trainerwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINERWIDGET_H
