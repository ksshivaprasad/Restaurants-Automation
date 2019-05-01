/********************************************************************************
** Form generated from reading UI file 'manageRecipe.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERECIPE_H
#define UI_MANAGERECIPE_H

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

class Ui_manageRecipe
{
public:
    QTableWidget *RecipeListWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *RecipeName;
    QLabel *Instructions;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *recipeName;
    QTextEdit *instructions;
    QTextEdit *quantity;
    QPushButton *addRecipe;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *groceryListWidget;

    void setupUi(QWidget *manageRecipe)
    {
        if (manageRecipe->objectName().isEmpty())
            manageRecipe->setObjectName(QStringLiteral("manageRecipe"));
        manageRecipe->setWindowModality(Qt::WindowModal);
        manageRecipe->resize(1000, 600);
        RecipeListWidget = new QTableWidget(manageRecipe);
        RecipeListWidget->setObjectName(QStringLiteral("RecipeListWidget"));
        RecipeListWidget->setGeometry(QRect(20, 10, 811, 151));
        verticalLayoutWidget = new QWidget(manageRecipe);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(19, 279, 811, 171));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        RecipeName = new QLabel(verticalLayoutWidget);
        RecipeName->setObjectName(QStringLiteral("RecipeName"));

        horizontalLayout->addWidget(RecipeName);

        Instructions = new QLabel(verticalLayoutWidget);
        Instructions->setObjectName(QStringLiteral("Instructions"));

        horizontalLayout->addWidget(Instructions);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        recipeName = new QTextEdit(verticalLayoutWidget);
        recipeName->setObjectName(QStringLiteral("recipeName"));

        horizontalLayout_2->addWidget(recipeName);

        instructions = new QTextEdit(verticalLayoutWidget);
        instructions->setObjectName(QStringLiteral("instructions"));

        horizontalLayout_2->addWidget(instructions);

        quantity = new QTextEdit(verticalLayoutWidget);
        quantity->setObjectName(QStringLiteral("quantity"));

        horizontalLayout_2->addWidget(quantity);

        addRecipe = new QPushButton(verticalLayoutWidget);
        addRecipe->setObjectName(QStringLiteral("addRecipe"));

        horizontalLayout_2->addWidget(addRecipe);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayoutWidget_2 = new QWidget(manageRecipe);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(19, 169, 811, 101));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groceryListWidget = new QTableWidget(verticalLayoutWidget_2);
        groceryListWidget->setObjectName(QStringLiteral("groceryListWidget"));

        verticalLayout_2->addWidget(groceryListWidget);


        retranslateUi(manageRecipe);

        QMetaObject::connectSlotsByName(manageRecipe);
    } // setupUi

    void retranslateUi(QWidget *manageRecipe)
    {
        manageRecipe->setWindowTitle(QApplication::translate("manageRecipe", "Manage Recipe", nullptr));
        RecipeName->setText(QApplication::translate("manageRecipe", "Recipe Name", nullptr));
        Instructions->setText(QApplication::translate("manageRecipe", "Instructions", nullptr));
        label_2->setText(QApplication::translate("manageRecipe", "Quantity", nullptr));
        addRecipe->setText(QApplication::translate("manageRecipe", "AddRecipe", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manageRecipe: public Ui_manageRecipe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERECIPE_H
