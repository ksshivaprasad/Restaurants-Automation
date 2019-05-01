/********************************************************************************
** Form generated from reading UI file 'reports.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTS_H
#define UI_REPORTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_reports
{
public:
    QTextBrowser *textBrowser;
    QFrame *frame;
    QPushButton *order;
    QPushButton *menu;
    QPushButton *grocery;
    QPushButton *feedback;

    void setupUi(QDialog *reports)
    {
        if (reports->objectName().isEmpty())
            reports->setObjectName(QStringLiteral("reports"));
        reports->setWindowModality(Qt::WindowModal);
        reports->resize(1800, 1600);
        textBrowser = new QTextBrowser(reports);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(70, 260, 731, 281));
        frame = new QFrame(reports);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(190, 40, 421, 151));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        order = new QPushButton(frame);
        order->setObjectName(QStringLiteral("order"));
        order->setGeometry(QRect(50, 20, 141, 51));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        order->setFont(font);
        menu = new QPushButton(frame);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setGeometry(QRect(50, 90, 141, 51));
        menu->setFont(font);
        grocery = new QPushButton(frame);
        grocery->setObjectName(QStringLiteral("grocery"));
        grocery->setGeometry(QRect(240, 20, 141, 51));
        grocery->setFont(font);
        feedback = new QPushButton(frame);
        feedback->setObjectName(QStringLiteral("feedback"));
        feedback->setGeometry(QRect(240, 90, 141, 51));
        feedback->setFont(font);

        retranslateUi(reports);

        QMetaObject::connectSlotsByName(reports);
    } // setupUi

    void retranslateUi(QDialog *reports)
    {
        reports->setWindowTitle(QApplication::translate("reports", "Reports", nullptr));
        order->setText(QApplication::translate("reports", "View Order", nullptr));
        menu->setText(QApplication::translate("reports", "Manage Menu", nullptr));
        grocery->setText(QApplication::translate("reports", "View Grocery", nullptr));
        feedback->setText(QApplication::translate("reports", "View Feedback", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reports: public Ui_reports {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTS_H
