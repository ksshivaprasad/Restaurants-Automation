/********************************************************************************
** Form generated from reading UI file 'reservetable.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVETABLE_H
#define UI_RESERVETABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_reservetable
{
public:
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QTimeEdit *timeEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *reservetable)
    {
        if (reservetable->objectName().isEmpty())
            reservetable->setObjectName(QStringLiteral("reservetable"));
        reservetable->setWindowModality(Qt::WindowModal);
        reservetable->resize(1800, 1600);
        groupBox = new QGroupBox(reservetable);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(160, 80, 531, 331));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(290, 70, 101, 31));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 80, 141, 16));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 130, 121, 16));
        label_2->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 210, 181, 16));
        label_3->setFont(font);
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(290, 200, 151, 51));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 270, 101, 41));
        pushButton->setStyleSheet(QStringLiteral(""));
        timeEdit = new QTimeEdit(groupBox);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(290, 120, 118, 41));
        timeEdit->setCurrentSection(QDateTimeEdit::AmPmSection);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 20, 131, 16));
        label_4->setFont(font);
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(290, 10, 151, 31));
        lineEdit_2->setInputMethodHints(Qt::ImhPreferNumbers);

        retranslateUi(reservetable);

        QMetaObject::connectSlotsByName(reservetable);
    } // setupUi

    void retranslateUi(QDialog *reservetable)
    {
        reservetable->setWindowTitle(QApplication::translate("reservetable", "Reserve Table", nullptr));
        groupBox->setTitle(QString());
        lineEdit->setText(QString());
        label->setText(QApplication::translate("reservetable", "How many people?", nullptr));
        label_2->setText(QApplication::translate("reservetable", "Time of Arrival", nullptr));
        label_3->setText(QApplication::translate("reservetable", "Any specific Instructions?", nullptr));
        pushButton->setText(QApplication::translate("reservetable", "SUBMIT", nullptr));
        label_4->setText(QApplication::translate("reservetable", "Phone #", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reservetable: public Ui_reservetable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVETABLE_H
