/********************************************************************************
** Form generated from reading UI file 'drinks.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRINKS_H
#define UI_DRINKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_drinks
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QTextBrowser *textBrowser_2;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *drinks)
    {
        if (drinks->objectName().isEmpty())
            drinks->setObjectName(QStringLiteral("drinks"));
        drinks->resize(1800, 1600);
        drinks->setStyleSheet(QStringLiteral("background-image: url(:/Images/dininig-10.jpeg);"));
        groupBox = new QGroupBox(drinks);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(110, 50, 581, 391));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 0, 291, 171));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/drink1.png")));
        textBrowser_2 = new QTextBrowser(groupBox);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(115, 171, 311, 201));
        textBrowser_2->setStyleSheet(QStringLiteral("background-image: url(:/Images/dininig-11.jpeg);"));
        groupBox_2 = new QGroupBox(drinks);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(730, 50, 551, 521));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 0, 291, 171));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/drink2.png")));
        textBrowser = new QTextBrowser(groupBox_2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(145, 170, 301, 201));
        textBrowser->setStyleSheet(QStringLiteral("background-image: url(:/Images/dininig-11.jpeg);"));

        retranslateUi(drinks);

        QMetaObject::connectSlotsByName(drinks);
    } // setupUi

    void retranslateUi(QDialog *drinks)
    {
        drinks->setWindowTitle(QApplication::translate("drinks", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QString());
        textBrowser_2->setHtml(QApplication::translate("drinks", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'CaeciliaLTPro-85Heavy'; font-size:24pt; color:#313d48;\">  Minute Maid\302\256Lemonade</span> </p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'AvenirLT-Medium,arial,sans-serif'; font-size:18pt; color:#313d48;\">A homestyle favorite.</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" fon"
                        "t-family:'AvenirLT-Medium,arial,sans-serif'; font-size:18pt; color:#313d48;\">Enjoy a Minute Maid Lemonade, a simple and refreshing classic.</span> </p></body></html>", nullptr));
        groupBox_2->setTitle(QString());
        label_2->setText(QString());
        textBrowser->setHtml(QApplication::translate("drinks", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'CaeciliaLTPro-85Heavy'; font-size:24pt; color:#313d48;\">Uplifting refreshment </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'AvenirLT-Medium,arial,sans-serif'; font-size:18pt; color:#313d48;\">Enjoy Coca-Cola,Pepsi, Sprites or Mountain Dew!</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class drinks: public Ui_drinks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRINKS_H
