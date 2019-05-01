/********************************************************************************
** Form generated from reading UI file 'feedback.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEDBACK_H
#define UI_FEEDBACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Feedback
{
public:
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_1;
    QLabel *label_5;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *Feedback)
    {
        if (Feedback->objectName().isEmpty())
            Feedback->setObjectName(QStringLiteral("Feedback"));
        Feedback->resize(1800, 1600);
        label = new QLabel(Feedback);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 60, 251, 16));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label_2 = new QLabel(Feedback);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 110, 60, 16));
        QFont font1;
        font1.setPointSize(15);
        label_2->setFont(font1);
        spinBox = new QSpinBox(Feedback);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(370, 110, 61, 24));
        spinBox->setMaximum(5);
        label_3 = new QLabel(Feedback);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 200, 171, 20));
        label_3->setFont(font);
        label_4 = new QLabel(Feedback);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(280, 240, 60, 16));
        label_4->setFont(font1);
        lineEdit_1 = new QLineEdit(Feedback);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(370, 230, 231, 41));
        label_5 = new QLabel(Feedback);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(270, 300, 71, 20));
        label_5->setFont(font1);
        pushButton = new QPushButton(Feedback);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 410, 113, 32));
        pushButton->setFont(font1);
        lineEdit_2 = new QLineEdit(Feedback);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(370, 300, 231, 101));
        lineEdit_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        retranslateUi(Feedback);

        QMetaObject::connectSlotsByName(Feedback);
    } // setupUi

    void retranslateUi(QDialog *Feedback)
    {
        Feedback->setWindowTitle(QApplication::translate("Feedback", "Dialog", nullptr));
        label->setText(QApplication::translate("Feedback", "How would you rate your last visit?", nullptr));
        label_2->setText(QApplication::translate("Feedback", "Rate Us!", nullptr));
        label_3->setText(QApplication::translate("Feedback", "Leave Your Feedback:", nullptr));
        label_4->setText(QApplication::translate("Feedback", "Name: ", nullptr));
        label_5->setText(QApplication::translate("Feedback", "Comment:", nullptr));
        pushButton->setText(QApplication::translate("Feedback", "SUBMIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Feedback: public Ui_Feedback {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDBACK_H
