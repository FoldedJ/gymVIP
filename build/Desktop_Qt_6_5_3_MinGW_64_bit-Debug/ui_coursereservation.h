/********************************************************************************
** Form generated from reading UI file 'coursereservation.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSERESERVATION_H
#define UI_COURSERESERVATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_courseReservation
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *startDateLabel;
    QDateEdit *startDateEdit;
    QLabel *endDateLabel;
    QDateEdit *endDateEdit;
    QPushButton *filterButton;
    QTableView *courseTableView;
    QGroupBox *reservationGroupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *reserveButton;
    QPushButton *cancelButton;
    QTableView *myReservationTableView;

    void setupUi(QWidget *courseReservation)
    {
        if (courseReservation->objectName().isEmpty())
            courseReservation->setObjectName("courseReservation");
        courseReservation->resize(800, 600);
        verticalLayout = new QVBoxLayout(courseReservation);
        verticalLayout->setObjectName("verticalLayout");
        filterGroupBox = new QGroupBox(courseReservation);
        filterGroupBox->setObjectName("filterGroupBox");
        gridLayout_2 = new QGridLayout(filterGroupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        startDateLabel = new QLabel(filterGroupBox);
        startDateLabel->setObjectName("startDateLabel");

        gridLayout_2->addWidget(startDateLabel, 0, 0, 1, 1);

        startDateEdit = new QDateEdit(filterGroupBox);
        startDateEdit->setObjectName("startDateEdit");

        gridLayout_2->addWidget(startDateEdit, 0, 1, 1, 1);

        endDateLabel = new QLabel(filterGroupBox);
        endDateLabel->setObjectName("endDateLabel");

        gridLayout_2->addWidget(endDateLabel, 1, 0, 1, 1);

        endDateEdit = new QDateEdit(filterGroupBox);
        endDateEdit->setObjectName("endDateEdit");

        gridLayout_2->addWidget(endDateEdit, 1, 1, 1, 1);

        filterButton = new QPushButton(filterGroupBox);
        filterButton->setObjectName("filterButton");

        gridLayout_2->addWidget(filterButton, 2, 0, 1, 2);


        verticalLayout->addWidget(filterGroupBox);

        courseTableView = new QTableView(courseReservation);
        courseTableView->setObjectName("courseTableView");

        verticalLayout->addWidget(courseTableView);

        reservationGroupBox = new QGroupBox(courseReservation);
        reservationGroupBox->setObjectName("reservationGroupBox");
        horizontalLayout = new QHBoxLayout(reservationGroupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        reserveButton = new QPushButton(reservationGroupBox);
        reserveButton->setObjectName("reserveButton");

        horizontalLayout->addWidget(reserveButton);

        cancelButton = new QPushButton(reservationGroupBox);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addWidget(reservationGroupBox);

        myReservationTableView = new QTableView(courseReservation);
        myReservationTableView->setObjectName("myReservationTableView");

        verticalLayout->addWidget(myReservationTableView);


        retranslateUi(courseReservation);

        QMetaObject::connectSlotsByName(courseReservation);
    } // setupUi

    void retranslateUi(QWidget *courseReservation)
    {
        courseReservation->setWindowTitle(QCoreApplication::translate("courseReservation", "\350\257\276\347\250\213\351\242\204\347\272\246", nullptr));
        filterGroupBox->setTitle(QCoreApplication::translate("courseReservation", "\347\255\233\351\200\211\346\235\241\344\273\266", nullptr));
        startDateLabel->setText(QCoreApplication::translate("courseReservation", "\345\274\200\345\247\213\346\227\245\346\234\237:", nullptr));
        endDateLabel->setText(QCoreApplication::translate("courseReservation", "\347\273\223\346\235\237\346\227\245\346\234\237:", nullptr));
        filterButton->setText(QCoreApplication::translate("courseReservation", "\347\255\233\351\200\211", nullptr));
        reservationGroupBox->setTitle(QCoreApplication::translate("courseReservation", "\351\242\204\347\272\246\346\223\215\344\275\234", nullptr));
        reserveButton->setText(QCoreApplication::translate("courseReservation", "\351\242\204\347\272\246", nullptr));
        cancelButton->setText(QCoreApplication::translate("courseReservation", "\345\217\226\346\266\210\351\242\204\347\272\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class courseReservation: public Ui_courseReservation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSERESERVATION_H
