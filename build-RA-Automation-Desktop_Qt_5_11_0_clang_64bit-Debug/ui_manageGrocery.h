/********************************************************************************
** Form generated from reading UI file 'manageGrocery.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEGROCERY_H
#define UI_MANAGEGROCERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manageGrocery
{
public:
    QTableWidget *groceryTableWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *nameEdit;
    QTextEdit *quantityEdit;
    QPushButton *addGroceryButton;

    void setupUi(QWidget *manageGrocery)
    {
        if (manageGrocery->objectName().isEmpty())
            manageGrocery->setObjectName(QStringLiteral("manageGrocery"));
        manageGrocery->setWindowModality(Qt::WindowModal);
        manageGrocery->resize(1000, 600);
        groceryTableWidget = new QTableWidget(manageGrocery);
        groceryTableWidget->setObjectName(QStringLiteral("groceryTableWidget"));
        groceryTableWidget->setGeometry(QRect(5, 11, 901, 191));
        horizontalLayoutWidget = new QWidget(manageGrocery);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 209, 901, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalLayoutWidget_2 = new QWidget(manageGrocery);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(9, 309, 901, 91));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        nameEdit = new QTextEdit(horizontalLayoutWidget_2);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        horizontalLayout_2->addWidget(nameEdit);

        quantityEdit = new QTextEdit(horizontalLayoutWidget_2);
        quantityEdit->setObjectName(QStringLiteral("quantityEdit"));

        horizontalLayout_2->addWidget(quantityEdit);

        addGroceryButton = new QPushButton(horizontalLayoutWidget_2);
        addGroceryButton->setObjectName(QStringLiteral("addGroceryButton"));

        horizontalLayout_2->addWidget(addGroceryButton);


        retranslateUi(manageGrocery);

        QMetaObject::connectSlotsByName(manageGrocery);
    } // setupUi

    void retranslateUi(QWidget *manageGrocery)
    {
        manageGrocery->setWindowTitle(QApplication::translate("manageGrocery", "Manage Grocery", nullptr));
        label_2->setText(QApplication::translate("manageGrocery", "Name", nullptr));
        label->setText(QApplication::translate("manageGrocery", "Quantity", nullptr));
        addGroceryButton->setText(QApplication::translate("manageGrocery", "Add grocery", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manageGrocery: public Ui_manageGrocery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEGROCERY_H
