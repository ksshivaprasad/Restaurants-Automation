/********************************************************************************
** Form generated from reading UI file 'viewOrder.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWORDER_H
#define UI_VIEWORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewOrder
{
public:
    QTableWidget *viewOrderTableWidget;
    QPushButton *submitOrderButton;
    QTextEdit *tableNoEdit;
    QLabel *label;

    void setupUi(QWidget *viewOrder)
    {
        if (viewOrder->objectName().isEmpty())
            viewOrder->setObjectName(QStringLiteral("viewOrder"));
        viewOrder->setWindowModality(Qt::WindowModal);
        viewOrder->resize(731, 314);
        viewOrderTableWidget = new QTableWidget(viewOrder);
        viewOrderTableWidget->setObjectName(QStringLiteral("viewOrderTableWidget"));
        viewOrderTableWidget->setGeometry(QRect(25, 11, 661, 211));
        submitOrderButton = new QPushButton(viewOrder);
        submitOrderButton->setObjectName(QStringLiteral("submitOrderButton"));
        submitOrderButton->setGeometry(QRect(320, 250, 114, 32));
        tableNoEdit = new QTextEdit(viewOrder);
        tableNoEdit->setObjectName(QStringLiteral("tableNoEdit"));
        tableNoEdit->setGeometry(QRect(160, 250, 91, 21));
        label = new QLabel(viewOrder);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 250, 62, 16));

        retranslateUi(viewOrder);

        QMetaObject::connectSlotsByName(viewOrder);
    } // setupUi

    void retranslateUi(QWidget *viewOrder)
    {
        viewOrder->setWindowTitle(QApplication::translate("viewOrder", "View Order", nullptr));
        submitOrderButton->setText(QApplication::translate("viewOrder", "Sumbit", nullptr));
        label->setText(QApplication::translate("viewOrder", "Table No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewOrder: public Ui_viewOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWORDER_H
