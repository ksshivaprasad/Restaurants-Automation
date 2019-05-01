/********************************************************************************
** Form generated from reading UI file 'manageOrder.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEORDER_H
#define UI_MANAGEORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manageOrder
{
public:
    QPushButton *createOrderButton;
    QTableWidget *menuOrdetTable;
    QPushButton *viewOrderButton;
    QPushButton *reserveTableButton;
    QTextEdit *tableId;

    void setupUi(QWidget *manageOrder)
    {
        if (manageOrder->objectName().isEmpty())
            manageOrder->setObjectName(QStringLiteral("manageOrder"));
        manageOrder->setWindowModality(Qt::WindowModal);
        manageOrder->resize(1000, 600);
        createOrderButton = new QPushButton(manageOrder);
        createOrderButton->setObjectName(QStringLiteral("createOrderButton"));
        createOrderButton->setEnabled(false);
        createOrderButton->setGeometry(QRect(470, 10, 114, 32));
        menuOrdetTable = new QTableWidget(manageOrder);
        menuOrdetTable->setObjectName(QStringLiteral("menuOrdetTable"));
        menuOrdetTable->setGeometry(QRect(10, 50, 731, 251));
        viewOrderButton = new QPushButton(manageOrder);
        viewOrderButton->setObjectName(QStringLiteral("viewOrderButton"));
        viewOrderButton->setEnabled(false);
        viewOrderButton->setGeometry(QRect(290, 310, 114, 32));
        reserveTableButton = new QPushButton(manageOrder);
        reserveTableButton->setObjectName(QStringLiteral("reserveTableButton"));
        reserveTableButton->setGeometry(QRect(130, 10, 114, 32));
        tableId = new QTextEdit(manageOrder);
        tableId->setObjectName(QStringLiteral("tableId"));
        tableId->setGeometry(QRect(310, 10, 101, 21));

        retranslateUi(manageOrder);

        QMetaObject::connectSlotsByName(manageOrder);
    } // setupUi

    void retranslateUi(QWidget *manageOrder)
    {
        manageOrder->setWindowTitle(QApplication::translate("manageOrder", "Manage Order", nullptr));
        createOrderButton->setText(QApplication::translate("manageOrder", "Create Order", nullptr));
        viewOrderButton->setText(QApplication::translate("manageOrder", "View Order", nullptr));
        reserveTableButton->setText(QApplication::translate("manageOrder", "Reserve Table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manageOrder: public Ui_manageOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEORDER_H
