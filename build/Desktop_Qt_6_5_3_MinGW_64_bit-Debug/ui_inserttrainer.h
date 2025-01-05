/********************************************************************************
** Form generated from reading UI file 'inserttrainer.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTTRAINER_H
#define UI_INSERTTRAINER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_insertTrainer
{
public:
    QLineEdit *contactNumberLineEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *specialtyLineEdit;
    QLineEdit *qualificationLineEdit;
    QLineEdit *emailLineEdit;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_2;
    QPushButton *yesButton;
    QComboBox *genderComboBox;
    QLineEdit *nameLineEdit;
    QLabel *label_8;
    QLabel *label_10;
    QLineEdit *workScheduleTextEdit;
    QLabel *label_11;
    QLineEdit *pw;

    void setupUi(QWidget *insertTrainer)
    {
        if (insertTrainer->objectName().isEmpty())
            insertTrainer->setObjectName("insertTrainer");
        insertTrainer->resize(800, 600);
        contactNumberLineEdit = new QLineEdit(insertTrainer);
        contactNumberLineEdit->setObjectName("contactNumberLineEdit");
        contactNumberLineEdit->setGeometry(QRect(270, 220, 113, 25));
        label_4 = new QLabel(insertTrainer);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 220, 69, 19));
        label_5 = new QLabel(insertTrainer);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(230, 300, 69, 19));
        specialtyLineEdit = new QLineEdit(insertTrainer);
        specialtyLineEdit->setObjectName("specialtyLineEdit");
        specialtyLineEdit->setGeometry(QRect(270, 300, 113, 25));
        qualificationLineEdit = new QLineEdit(insertTrainer);
        qualificationLineEdit->setObjectName("qualificationLineEdit");
        qualificationLineEdit->setGeometry(QRect(270, 340, 113, 25));
        emailLineEdit = new QLineEdit(insertTrainer);
        emailLineEdit->setObjectName("emailLineEdit");
        emailLineEdit->setGeometry(QRect(270, 260, 113, 25));
        label = new QLabel(insertTrainer);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 140, 69, 19));
        label_6 = new QLabel(insertTrainer);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(230, 260, 69, 19));
        label_2 = new QLabel(insertTrainer);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 180, 69, 19));
        yesButton = new QPushButton(insertTrainer);
        yesButton->setObjectName("yesButton");
        yesButton->setGeometry(QRect(270, 480, 93, 28));
        genderComboBox = new QComboBox(insertTrainer);
        genderComboBox->addItem(QString());
        genderComboBox->addItem(QString());
        genderComboBox->addItem(QString());
        genderComboBox->setObjectName("genderComboBox");
        genderComboBox->setGeometry(QRect(270, 180, 83, 25));
        nameLineEdit = new QLineEdit(insertTrainer);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(270, 140, 113, 25));
        label_8 = new QLabel(insertTrainer);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(200, 340, 69, 19));
        label_10 = new QLabel(insertTrainer);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(200, 380, 69, 19));
        workScheduleTextEdit = new QLineEdit(insertTrainer);
        workScheduleTextEdit->setObjectName("workScheduleTextEdit");
        workScheduleTextEdit->setGeometry(QRect(270, 380, 113, 25));
        label_11 = new QLabel(insertTrainer);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(230, 420, 69, 19));
        pw = new QLineEdit(insertTrainer);
        pw->setObjectName("pw");
        pw->setGeometry(QRect(270, 420, 113, 25));

        retranslateUi(insertTrainer);

        QMetaObject::connectSlotsByName(insertTrainer);
    } // setupUi

    void retranslateUi(QWidget *insertTrainer)
    {
        insertTrainer->setWindowTitle(QCoreApplication::translate("insertTrainer", "Form", nullptr));
        contactNumberLineEdit->setText(QString());
        label_4->setText(QCoreApplication::translate("insertTrainer", "\350\201\224\347\263\273\347\224\265\350\257\235", nullptr));
        label_5->setText(QCoreApplication::translate("insertTrainer", "\346\223\205\351\225\277", nullptr));
        specialtyLineEdit->setText(QString());
        emailLineEdit->setText(QString());
        label->setText(QCoreApplication::translate("insertTrainer", "\345\247\223\345\220\215", nullptr));
        label_6->setText(QCoreApplication::translate("insertTrainer", "\351\202\256\347\256\261", nullptr));
        label_2->setText(QCoreApplication::translate("insertTrainer", "\346\200\247\345\210\253", nullptr));
        yesButton->setText(QCoreApplication::translate("insertTrainer", "\347\241\256\345\256\232", nullptr));
        genderComboBox->setItemText(0, QCoreApplication::translate("insertTrainer", "Male", nullptr));
        genderComboBox->setItemText(1, QCoreApplication::translate("insertTrainer", "Female", nullptr));
        genderComboBox->setItemText(2, QCoreApplication::translate("insertTrainer", "Other", nullptr));

        label_8->setText(QCoreApplication::translate("insertTrainer", "\344\270\223\344\270\232\350\265\204\350\264\250", nullptr));
        label_10->setText(QCoreApplication::translate("insertTrainer", "\345\267\245\344\275\234\346\216\222\347\217\255", nullptr));
        label_11->setText(QCoreApplication::translate("insertTrainer", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class insertTrainer: public Ui_insertTrainer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTTRAINER_H
