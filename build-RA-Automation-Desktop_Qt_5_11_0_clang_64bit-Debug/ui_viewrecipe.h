/********************************************************************************
** Form generated from reading UI file 'viewrecipe.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWRECIPE_H
#define UI_VIEWRECIPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewRecipe
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *ingredientLabel;
    QTableWidget *ingredientTable;
    QLabel *instructionsLabel;
    QTextBrowser *instructionsBrowser;

    void setupUi(QDialog *viewRecipe)
    {
        if (viewRecipe->objectName().isEmpty())
            viewRecipe->setObjectName(QStringLiteral("viewRecipe"));
        viewRecipe->setWindowModality(Qt::WindowModal);
        viewRecipe->resize(758, 409);
        buttonBox = new QDialogButtonBox(viewRecipe);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(170, 350, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(viewRecipe);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 10, 711, 331));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ingredientLabel = new QLabel(verticalLayoutWidget);
        ingredientLabel->setObjectName(QStringLiteral("ingredientLabel"));

        verticalLayout->addWidget(ingredientLabel);

        ingredientTable = new QTableWidget(verticalLayoutWidget);
        ingredientTable->setObjectName(QStringLiteral("ingredientTable"));

        verticalLayout->addWidget(ingredientTable);

        instructionsLabel = new QLabel(verticalLayoutWidget);
        instructionsLabel->setObjectName(QStringLiteral("instructionsLabel"));

        verticalLayout->addWidget(instructionsLabel);

        instructionsBrowser = new QTextBrowser(verticalLayoutWidget);
        instructionsBrowser->setObjectName(QStringLiteral("instructionsBrowser"));

        verticalLayout->addWidget(instructionsBrowser);


        retranslateUi(viewRecipe);
        QObject::connect(buttonBox, SIGNAL(accepted()), viewRecipe, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), viewRecipe, SLOT(reject()));

        QMetaObject::connectSlotsByName(viewRecipe);
    } // setupUi

    void retranslateUi(QDialog *viewRecipe)
    {
        viewRecipe->setWindowTitle(QApplication::translate("viewRecipe", "View Recipe", nullptr));
        ingredientLabel->setText(QApplication::translate("viewRecipe", "Ingredients:", nullptr));
        instructionsLabel->setText(QApplication::translate("viewRecipe", "Instructions:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewRecipe: public Ui_viewRecipe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWRECIPE_H
