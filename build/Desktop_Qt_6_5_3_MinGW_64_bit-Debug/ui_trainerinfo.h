/********************************************************************************
** Form generated from reading UI file 'trainerinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINERINFO_H
#define UI_TRAINERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_trainerinfo
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *courseTableView;
    QTableView *memberTableView;

    void setupUi(QWidget *trainerinfo)
    {
        if (trainerinfo->objectName().isEmpty())
            trainerinfo->setObjectName("trainerinfo");
        trainerinfo->resize(803, 600);
        verticalLayout = new QVBoxLayout(trainerinfo);
        verticalLayout->setObjectName("verticalLayout");
        courseTableView = new QTableView(trainerinfo);
        courseTableView->setObjectName("courseTableView");
        courseTableView->setMinimumSize(QSize(778, 289));

        verticalLayout->addWidget(courseTableView);

        memberTableView = new QTableView(trainerinfo);
        memberTableView->setObjectName("memberTableView");
        memberTableView->setEnabled(true);
        memberTableView->setMinimumSize(QSize(781, 253));

        verticalLayout->addWidget(memberTableView);


        retranslateUi(trainerinfo);

        QMetaObject::connectSlotsByName(trainerinfo);
    } // setupUi

    void retranslateUi(QWidget *trainerinfo)
    {
        trainerinfo->setWindowTitle(QCoreApplication::translate("trainerinfo", "\346\225\231\347\273\203\345\212\237\350\203\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class trainerinfo: public Ui_trainerinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINERINFO_H
