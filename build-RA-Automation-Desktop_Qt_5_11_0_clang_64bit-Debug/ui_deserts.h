/********************************************************************************
** Form generated from reading UI file 'deserts.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESERTS_H
#define UI_DESERTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_deserts
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *deserts)
    {
        if (deserts->objectName().isEmpty())
            deserts->setObjectName(QStringLiteral("deserts"));
        deserts->resize(1800, 1600);
        deserts->setStyleSheet(QStringLiteral("background-image: url(:/Images/dininig-10.jpeg)"));
        groupBox = new QGroupBox(deserts);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(220, 130, 541, 461));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, -10, 321, 191));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/deset1.png")));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(110, 170, 321, 71));
        textBrowser->setStyleSheet(QStringLiteral("background-image: url(:/Images/dininig-11.jpeg);"));

        retranslateUi(deserts);

        QMetaObject::connectSlotsByName(deserts);
    } // setupUi

    void retranslateUi(QDialog *deserts)
    {
        deserts->setWindowTitle(QApplication::translate("deserts", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QString());
        textBrowser->setHtml(QApplication::translate("deserts", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'CaeciliaLTPro-85Heavy'; font-size:24pt; color:#313d48;\"> Enjoy the delicious Chocolate cakes!</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deserts: public Ui_deserts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESERTS_H
