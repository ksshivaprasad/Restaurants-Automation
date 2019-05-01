/********************************************************************************
** Form generated from reading UI file 'employees.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEES_H
#define UI_EMPLOYEES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_employees
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_4;
    QRadioButton *radioButton_1;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QRadioButton *radioButton_2;
    QLabel *label_3;
    QLineEdit *lineEdit_1;
    QLabel *label_7;

    void setupUi(QDialog *employees)
    {
        if (employees->objectName().isEmpty())
            employees->setObjectName(QStringLiteral("employees"));
        employees->resize(1800, 1600);
        label = new QLabel(employees);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 100, 60, 16));
        pushButton = new QPushButton(employees);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 330, 131, 41));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(216, 246, 215);"));
        label_2 = new QLabel(employees);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 60, 121, 16));
        QFont font;
        font.setPointSize(15);
        label_2->setFont(font);
        label_4 = new QLabel(employees);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 280, 71, 16));
        label_4->setFont(font);
        radioButton_1 = new QRadioButton(employees);
        radioButton_1->setObjectName(QStringLiteral("radioButton_1"));
        radioButton_1->setGeometry(QRect(190, 100, 100, 20));
        radioButton_1->setFont(font);
        label_5 = new QLabel(employees);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 190, 121, 16));
        label_5->setFont(font);
        lineEdit_2 = new QLineEdit(employees);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(320, 280, 113, 31));
        lineEdit_2->setFont(font);
        lineEdit_2->setEchoMode(QLineEdit::Password);
        radioButton_2 = new QRadioButton(employees);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(340, 100, 100, 20));
        radioButton_2->setFont(font);
        label_3 = new QLabel(employees);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 230, 91, 16));
        label_3->setFont(font);
        lineEdit_1 = new QLineEdit(employees);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(320, 220, 113, 31));
        lineEdit_1->setFont(font);
        label_7 = new QLabel(employees);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(320, 380, 171, 41));

        retranslateUi(employees);

        QMetaObject::connectSlotsByName(employees);
    } // setupUi

    void retranslateUi(QDialog *employees)
    {
        employees->setWindowTitle(QApplication::translate("employees", "Dialog", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("employees", "SUBMIT", nullptr));
        label_2->setText(QApplication::translate("employees", "Employee Type:", nullptr));
        label_4->setText(QApplication::translate("employees", "Password:", nullptr));
        radioButton_1->setText(QApplication::translate("employees", "Manager", nullptr));
        label_5->setText(QApplication::translate("employees", "Enter Credentials:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        radioButton_2->setText(QApplication::translate("employees", "Chef", nullptr));
        label_3->setText(QApplication::translate("employees", "User Name:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class employees: public Ui_employees {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEES_H
