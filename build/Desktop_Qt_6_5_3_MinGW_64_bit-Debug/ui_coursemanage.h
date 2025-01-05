/********************************************************************************
** Form generated from reading UI file 'coursemanage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEMANAGE_H
#define UI_COURSEMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_courseManage
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *courseManage)
    {
        if (courseManage->objectName().isEmpty())
            courseManage->setObjectName("courseManage");
        courseManage->resize(650, 600);
        gridLayoutWidget = new QWidget(courseManage);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(40, 0, 591, 81));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(130, 60));

        gridLayout->addWidget(pushButton_3, 0, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(130, 60));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(courseManage);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 90, 650, 500));

        retranslateUi(courseManage);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(courseManage);
    } // setupUi

    void retranslateUi(QWidget *courseManage)
    {
        courseManage->setWindowTitle(QCoreApplication::translate("courseManage", "Form", nullptr));
        pushButton_3->setText(QCoreApplication::translate("courseManage", "\346\237\245\347\234\213/\344\277\256\346\224\271\350\257\276\347\250\213", nullptr));
        pushButton->setText(QCoreApplication::translate("courseManage", "\346\267\273\345\212\240\350\257\276\347\250\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class courseManage: public Ui_courseManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEMANAGE_H
