/********************************************************************************
** Form generated from reading UI file 'managepay.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEPAY_H
#define UI_MANAGEPAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_managePay
{
public:
    QFrame *frame;
    QLineEdit *tableId;
    QLabel *label;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QFrame *frame_2;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QDialog *managePay)
    {
        if (managePay->objectName().isEmpty())
            managePay->setObjectName(QStringLiteral("managePay"));
        managePay->setWindowModality(Qt::WindowModal);
        managePay->resize(1001, 745);
        frame = new QFrame(managePay);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(120, 40, 741, 101));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tableId = new QLineEdit(frame);
        tableId->setObjectName(QStringLiteral("tableId"));
        tableId->setGeometry(QRect(240, 30, 81, 31));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 151, 16));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(410, 20, 113, 51));
        pushButton->setAutoDefault(false);
        tableWidget = new QTableWidget(managePay);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(120, 220, 741, 192));
        label_2 = new QLabel(managePay);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 190, 101, 16));
        frame_2 = new QFrame(managePay);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(120, 470, 741, 80));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 10, 121, 51));
        pushButton_2->setAutoDefault(false);
        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(230, 20, 91, 31));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 30, 60, 21));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(210, 30, 21, 16));
        verticalLayoutWidget = new QWidget(managePay);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(119, 400, 741, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(managePay);

        QMetaObject::connectSlotsByName(managePay);
    } // setupUi

    void retranslateUi(QDialog *managePay)
    {
        managePay->setWindowTitle(QApplication::translate("managePay", "Dialog", nullptr));
        label->setText(QApplication::translate("managePay", "Enter Your Table ID:", nullptr));
        pushButton->setText(QApplication::translate("managePay", "Submit", nullptr));
        label_2->setText(QApplication::translate("managePay", "Your Orders:", nullptr));
        pushButton_2->setText(QApplication::translate("managePay", "Make Payment", nullptr));
        label_3->setText(QApplication::translate("managePay", "Total:", nullptr));
        label_4->setText(QApplication::translate("managePay", "$", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managePay: public Ui_managePay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEPAY_H
