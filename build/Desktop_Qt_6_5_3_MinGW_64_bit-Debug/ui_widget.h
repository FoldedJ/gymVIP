/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *adminButton;
    QPushButton *trainerButton;
    QPushButton *memberButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(150, 0, 650, 600));
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 141, 601));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        adminButton = new QPushButton(gridLayoutWidget);
        adminButton->setObjectName("adminButton");
        adminButton->setMinimumSize(QSize(130, 60));
        QFont font;
        font.setPointSize(12);
        adminButton->setFont(font);

        gridLayout_2->addWidget(adminButton, 2, 0, 1, 1);

        trainerButton = new QPushButton(gridLayoutWidget);
        trainerButton->setObjectName("trainerButton");
        trainerButton->setMinimumSize(QSize(130, 60));
        trainerButton->setFont(font);

        gridLayout_2->addWidget(trainerButton, 1, 0, 1, 1);

        memberButton = new QPushButton(gridLayoutWidget);
        memberButton->setObjectName("memberButton");
        memberButton->setMinimumSize(QSize(130, 60));
        memberButton->setFont(font);

        gridLayout_2->addWidget(memberButton, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\345\201\245\350\272\253\346\210\277\344\274\232\345\221\230\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        adminButton->setText(QCoreApplication::translate("Widget", "\347\256\241\347\220\206\345\221\230", nullptr));
        trainerButton->setText(QCoreApplication::translate("Widget", "\346\225\231\347\273\203", nullptr));
        memberButton->setText(QCoreApplication::translate("Widget", "\344\274\232\345\221\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
