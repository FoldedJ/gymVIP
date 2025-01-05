/********************************************************************************
** Form generated from reading UI file 'deletecourse.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETECOURSE_H
#define UI_DELETECOURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteCourse
{
public:
    QLineEdit *ID;
    QLabel *label_10;
    QPushButton *deleteButton;

    void setupUi(QWidget *deleteCourse)
    {
        if (deleteCourse->objectName().isEmpty())
            deleteCourse->setObjectName("deleteCourse");
        deleteCourse->resize(800, 600);
        ID = new QLineEdit(deleteCourse);
        ID->setObjectName("ID");
        ID->setGeometry(QRect(310, 260, 171, 41));
        label_10 = new QLabel(deleteCourse);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(200, 260, 141, 41));
        QFont font;
        font.setPointSize(12);
        label_10->setFont(font);
        deleteButton = new QPushButton(deleteCourse);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(310, 330, 131, 41));
        deleteButton->setFont(font);

        retranslateUi(deleteCourse);

        QMetaObject::connectSlotsByName(deleteCourse);
    } // setupUi

    void retranslateUi(QWidget *deleteCourse)
    {
        deleteCourse->setWindowTitle(QCoreApplication::translate("deleteCourse", "Form", nullptr));
        label_10->setText(QCoreApplication::translate("deleteCourse", "\345\210\240\351\231\244\350\257\276\347\250\213ID", nullptr));
        deleteButton->setText(QCoreApplication::translate("deleteCourse", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteCourse: public Ui_deleteCourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETECOURSE_H
