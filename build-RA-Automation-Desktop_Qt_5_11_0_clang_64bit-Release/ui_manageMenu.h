/********************************************************************************
** Form generated from reading UI file 'manageMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEMENU_H
#define UI_MANAGEMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manageMenu
{
public:
    QTableWidget *MenuListWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *NameEdit;
    QTextEdit *DescEdit;
    QTextEdit *recipeIdEdit;
    QTextEdit *PriceEdit;
    QPushButton *addButton;

    void setupUi(QWidget *manageMenu)
    {
        if (manageMenu->objectName().isEmpty())
            manageMenu->setObjectName(QStringLiteral("manageMenu"));
        manageMenu->setWindowModality(Qt::WindowModal);
        manageMenu->setEnabled(true);
        manageMenu->resize(1000, 600);
        MenuListWidget = new QTableWidget(manageMenu);
        MenuListWidget->setObjectName(QStringLiteral("MenuListWidget"));
        MenuListWidget->setGeometry(QRect(10, 10, 691, 251));
        verticalLayoutWidget = new QWidget(manageMenu);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 269, 691, 144));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        NameEdit = new QTextEdit(verticalLayoutWidget);
        NameEdit->setObjectName(QStringLiteral("NameEdit"));

        horizontalLayout_2->addWidget(NameEdit);

        DescEdit = new QTextEdit(verticalLayoutWidget);
        DescEdit->setObjectName(QStringLiteral("DescEdit"));

        horizontalLayout_2->addWidget(DescEdit);

        recipeIdEdit = new QTextEdit(verticalLayoutWidget);
        recipeIdEdit->setObjectName(QStringLiteral("recipeIdEdit"));

        horizontalLayout_2->addWidget(recipeIdEdit);

        PriceEdit = new QTextEdit(verticalLayoutWidget);
        PriceEdit->setObjectName(QStringLiteral("PriceEdit"));

        horizontalLayout_2->addWidget(PriceEdit);

        addButton = new QPushButton(verticalLayoutWidget);
        addButton->setObjectName(QStringLiteral("addButton"));

        horizontalLayout_2->addWidget(addButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(manageMenu);

        QMetaObject::connectSlotsByName(manageMenu);
    } // setupUi

    void retranslateUi(QWidget *manageMenu)
    {
        manageMenu->setWindowTitle(QApplication::translate("manageMenu", "Manage Menu", nullptr));
        label_3->setText(QString());
        label_2->setText(QApplication::translate("manageMenu", "Name", nullptr));
        label->setText(QApplication::translate("manageMenu", "Description", nullptr));
        label_5->setText(QApplication::translate("manageMenu", "Recipe id", nullptr));
        label_4->setText(QApplication::translate("manageMenu", "Price", nullptr));
        addButton->setText(QApplication::translate("manageMenu", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manageMenu: public Ui_manageMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEMENU_H
