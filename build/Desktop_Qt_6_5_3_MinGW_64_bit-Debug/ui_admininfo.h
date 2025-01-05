/********************************************************************************
** Form generated from reading UI file 'admininfo.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMININFO_H
#define UI_ADMININFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admininfo
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *insertButton;
    QPushButton *pushButton_5;
    QPushButton *courseManageButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *admininfo)
    {
        if (admininfo->objectName().isEmpty())
            admininfo->setObjectName("admininfo");
        admininfo->resize(800, 600);
        gridLayoutWidget = new QWidget(admininfo);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 161, 601));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(130, 60));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        insertButton = new QPushButton(gridLayoutWidget);
        insertButton->setObjectName("insertButton");
        insertButton->setMinimumSize(QSize(130, 60));

        gridLayout->addWidget(insertButton, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(130, 60));

        gridLayout->addWidget(pushButton_5, 5, 0, 1, 1);

        courseManageButton = new QPushButton(gridLayoutWidget);
        courseManageButton->setObjectName("courseManageButton");
        courseManageButton->setMinimumSize(QSize(130, 60));

        gridLayout->addWidget(courseManageButton, 3, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(130, 60));

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMinimumSize(QSize(130, 60));

        gridLayout->addWidget(pushButton_6, 4, 0, 1, 1);

        stackedWidget = new QStackedWidget(admininfo);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(159, 9, 650, 600));

        retranslateUi(admininfo);

        QMetaObject::connectSlotsByName(admininfo);
    } // setupUi

    void retranslateUi(QWidget *admininfo)
    {
        admininfo->setWindowTitle(QCoreApplication::translate("admininfo", "\347\256\241\347\220\206\345\221\230\345\212\237\350\203\275", nullptr));
        pushButton->setText(QCoreApplication::translate("admininfo", "\344\274\232\345\221\230\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        insertButton->setText(QCoreApplication::translate("admininfo", "\346\225\231\347\273\203\345\275\225\345\205\245", nullptr));
        pushButton_5->setText(QCoreApplication::translate("admininfo", "\347\273\237\350\256\241", nullptr));
        courseManageButton->setText(QCoreApplication::translate("admininfo", "\350\257\276\347\250\213\347\256\241\347\220\206", nullptr));
        pushButton_3->setText(QCoreApplication::translate("admininfo", "\346\225\231\347\273\203\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        pushButton_6->setText(QCoreApplication::translate("admininfo", "\347\274\264\350\264\271\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admininfo: public Ui_admininfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMININFO_H
