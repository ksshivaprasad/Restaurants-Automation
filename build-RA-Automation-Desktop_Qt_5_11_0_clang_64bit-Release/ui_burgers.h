/********************************************************************************
** Form generated from reading UI file 'burgers.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BURGERS_H
#define UI_BURGERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_burgers
{
public:
    QGroupBox *groupBox;
    QTextBrowser *textBrowser;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_6;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QTextBrowser *textBrowser_3;
    QSpinBox *spinBox_2;
    QLabel *label_7;
    QGroupBox *groupBox_3;
    QLabel *label_3;
    QTextBrowser *textBrowser_2;
    QSpinBox *spinBox_3;
    QLabel *label_8;
    QGroupBox *groupBox_4;
    QLabel *label_4;
    QTextBrowser *textBrowser_4;
    QSpinBox *spinBox_4;
    QLabel *label_9;
    QTextBrowser *textBrowser_5;
    QLabel *label_5;
    QPushButton *pushButton;
    QSpinBox *spinBox_5;
    QLabel *label_10;

    void setupUi(QDialog *burgers)
    {
        if (burgers->objectName().isEmpty())
            burgers->setObjectName(QStringLiteral("burgers"));
        burgers->resize(1800, 1600);
        burgers->setLayoutDirection(Qt::RightToLeft);
        burgers->setAutoFillBackground(false);
        burgers->setStyleSheet(QStringLiteral("background-image:url(:/Images/dininig-10.jpeg)"));
        groupBox = new QGroupBox(burgers);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(80, 20, 481, 451));
        groupBox->setStyleSheet(QStringLiteral("background-image: url(:/Images/dininig-11.jpeg)"));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(0, 320, 481, 131));
        QPalette palette;
        textBrowser->setPalette(palette);
        textBrowser->setAutoFillBackground(false);
        textBrowser->setStyleSheet(QStringLiteral("background-image: url(:/Images/dininig-11.jpeg);"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 531, 321));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/burger-4.jpg")));
        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(430, 420, 48, 31));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(360, 420, 71, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral("background-image: url(:/Images/red-palette.jpg);"));
        groupBox_2 = new QGroupBox(burgers);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(650, 20, 521, 501));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, -10, 511, 311));
        label_2->setStyleSheet(QStringLiteral(""));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/burger3.png")));
        textBrowser_3 = new QTextBrowser(groupBox_2);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(0, 290, 511, 161));
        textBrowser_3->setAutoFillBackground(false);
        textBrowser_3->setStyleSheet(QStringLiteral("background-image: url(:/Images/dininig-11.jpeg)"));
        spinBox_2 = new QSpinBox(groupBox_2);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(460, 420, 48, 31));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(390, 420, 71, 31));
        label_7->setFont(font);
        label_7->setStyleSheet(QStringLiteral("background-image: url(:/Images/red-palette.jpg);"));
        groupBox_3 = new QGroupBox(burgers);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 500, 361, 461));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, -1, 281, 191));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Images/salad2.png")));
        textBrowser_2 = new QTextBrowser(groupBox_3);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(60, 190, 281, 211));
        textBrowser_2->setStyleSheet(QStringLiteral("background-image: url(:/Images/dininig-11.jpeg);"));
        spinBox_3 = new QSpinBox(groupBox_3);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(290, 370, 48, 31));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(220, 370, 71, 31));
        label_8->setFont(font);
        label_8->setStyleSheet(QStringLiteral("background-image: url(:/Images/red-palette.jpg);"));
        groupBox_4 = new QGroupBox(burgers);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(440, 500, 371, 401));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 0, 311, 201));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Images/Salad1.png")));
        textBrowser_4 = new QTextBrowser(groupBox_4);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(40, 190, 291, 211));
        textBrowser_4->setStyleSheet(QStringLiteral("background-image: url(:/Images/dininig-11.jpeg);"));
        spinBox_4 = new QSpinBox(groupBox_4);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setGeometry(QRect(280, 370, 48, 31));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(210, 370, 71, 31));
        label_9->setFont(font);
        label_9->setStyleSheet(QStringLiteral("background-image: url(:/Images/red-palette.jpg);"));
        textBrowser_5 = new QTextBrowser(burgers);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(860, 690, 301, 201));
        textBrowser_5->setStyleSheet(QStringLiteral("background-image: url(:/Images/dininig-11.jpeg);"));
        label_5 = new QLabel(burgers);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(870, 510, 291, 181));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Images/drink2.png")));
        pushButton = new QPushButton(burgers);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1300, 500, 151, 41));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(253, 128, 8);\n"
"background-image: url(:/Images/red-palette.jpg);"));
        spinBox_5 = new QSpinBox(burgers);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));
        spinBox_5->setGeometry(QRect(1110, 860, 48, 31));
        label_10 = new QLabel(burgers);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(1030, 860, 81, 31));
        label_10->setFont(font);
        label_10->setStyleSheet(QStringLiteral("background-image: url(:/Images/red-palette.jpg);"));

        retranslateUi(burgers);

        QMetaObject::connectSlotsByName(burgers);
    } // setupUi

    void retranslateUi(QDialog *burgers)
    {
        burgers->setWindowTitle(QApplication::translate("burgers", "Dialog", nullptr));
        groupBox->setTitle(QString());
        textBrowser->setHtml(QApplication::translate("burgers", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'CaeciliaLTPro-85Heavy'; font-size:24pt; color:#313d48;\">                  VG Beyond Burger</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'AvenirLT-Medium,arial,sans-serif'; font-size:18pt; color:#313d48;\">Burger by beyond meat, american &quot;cheese&quot;, grilled onions, house made sauce, tomato, iceberg lettuce, sesame buns + crispy fries</span></p></body></html>", nullptr));
        label->setText(QString());
        label_6->setText(QApplication::translate("burgers", "Quantity", nullptr));
        groupBox_2->setTitle(QApplication::translate("burgers", "GroupBox", nullptr));
        label_2->setText(QString());
        textBrowser_3->setHtml(QApplication::translate("burgers", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'CaeciliaLTPro-85Heavy'; font-size:24pt; color:#313d48;\">                  VG Cheese Burger</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'AvenirLT-Medium,arial,sans-serif'; font-size:18pt; color:#313d48;\">You can\342\200\231t go wrong with our cheeseburger, a signature flame-grilled, veggie patty topped with a simple layer of melted American cheese, crinkles, yellow mustard, and ketchup on a toasted sesame seed"
                        " bun.</span></p></body></html>", nullptr));
        label_7->setText(QApplication::translate("burgers", "Quantity", nullptr));
        groupBox_3->setTitle(QString());
        label_3->setText(QString());
        textBrowser_2->setHtml(QApplication::translate("burgers", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'CaeciliaLTPro-85Heavy'; font-size:24pt; color:#313d48;\">  Garden Side Salad</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'AvenirLT-Medium,arial,sans-serif'; font-size:18pt; color:#313d48;\">Our Garden Side Salad is a blend of premium lettuces garnished with juicy tomatoes, home-style croutons, a three-cheese medley, and your choice of salad dressing.</span></p></body></html>", nullptr));
        label_8->setText(QApplication::translate("burgers", "Quantity", nullptr));
        groupBox_4->setTitle(QString());
        label_4->setText(QString());
        textBrowser_4->setHtml(QApplication::translate("burgers", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'CaeciliaLTPro-85Heavy'; font-size:24pt; color:#313d48;\">Chicken Garden Salad</span> </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'AvenirLT-Medium,arial,sans-serif'; font-size:18pt; color:#313d48;\">Our Chicken Garden Salad is a mix of crisp green romaine, green leaf and radicchio lettuce, juicy-ripened tomatoes, buttery garlic croutons, and shredded cheddar cheese.</span> </p></body></html>", nullptr));
        label_9->setText(QApplication::translate("burgers", "Quantity", nullptr));
        textBrowser_5->setHtml(QApplication::translate("burgers", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'CaeciliaLTPro-85Heavy'; font-size:24pt; color:#313d48;\">Uplifting refreshments</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'AvenirLT-Medium,arial,sans-serif'; font-size:18pt; color:#313d48;\">Enjoy Coca-Cola,Pepsi, Sprites or Mountain Dew!</span></p></body></html>", nullptr));
        label_5->setText(QString());
        pushButton->setText(QApplication::translate("burgers", "Order Now", nullptr));
        label_10->setText(QApplication::translate("burgers", "Quantity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class burgers: public Ui_burgers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BURGERS_H
