/********************************************************************************
** Form generated from reading UI file 'memberinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERINFO_H
#define UI_MEMBERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_memberinfo
{
public:
    QWidget *gridLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *centerButton;
    QPushButton *courseButton;
    QPushButton *billButton;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *memberinfo)
    {
        if (memberinfo->objectName().isEmpty())
            memberinfo->setObjectName("memberinfo");
        memberinfo->resize(800, 600);
        gridLayoutWidget = new QWidget(memberinfo);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 151, 601));
        verticalLayout = new QVBoxLayout(gridLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        centerButton = new QPushButton(gridLayoutWidget);
        centerButton->setObjectName("centerButton");
        centerButton->setMinimumSize(QSize(130, 60));
        QFont font;
        font.setPointSize(14);
        centerButton->setFont(font);

        verticalLayout->addWidget(centerButton);

        courseButton = new QPushButton(gridLayoutWidget);
        courseButton->setObjectName("courseButton");
        courseButton->setMinimumSize(QSize(130, 60));
        courseButton->setFont(font);

        verticalLayout->addWidget(courseButton);

        billButton = new QPushButton(gridLayoutWidget);
        billButton->setObjectName("billButton");
        billButton->setMinimumSize(QSize(130, 60));
        billButton->setFont(font);

        verticalLayout->addWidget(billButton);

        stackedWidget = new QStackedWidget(memberinfo);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(160, 0, 650, 600));

        retranslateUi(memberinfo);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(memberinfo);
    } // setupUi

    void retranslateUi(QWidget *memberinfo)
    {
        memberinfo->setWindowTitle(QCoreApplication::translate("memberinfo", "\344\274\232\345\221\230\345\212\237\350\203\275", nullptr));
        centerButton->setText(QCoreApplication::translate("memberinfo", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        courseButton->setText(QCoreApplication::translate("memberinfo", "\350\257\276\347\250\213\351\242\204\347\272\246", nullptr));
        billButton->setText(QCoreApplication::translate("memberinfo", "\347\274\264\350\264\271\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class memberinfo: public Ui_memberinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERINFO_H
