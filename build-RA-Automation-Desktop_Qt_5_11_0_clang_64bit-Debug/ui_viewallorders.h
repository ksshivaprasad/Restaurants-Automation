/********************************************************************************
** Form generated from reading UI file 'viewallorders.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWALLORDERS_H
#define UI_VIEWALLORDERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewAllOrders
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *viewAllOrders)
    {
        if (viewAllOrders->objectName().isEmpty())
            viewAllOrders->setObjectName(QStringLiteral("viewAllOrders"));
        viewAllOrders->setWindowModality(Qt::WindowModal);
        viewAllOrders->resize(764, 402);
        verticalLayoutWidget = new QWidget(viewAllOrders);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(19, 19, 741, 371));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(viewAllOrders);

        QMetaObject::connectSlotsByName(viewAllOrders);
    } // setupUi

    void retranslateUi(QWidget *viewAllOrders)
    {
        viewAllOrders->setWindowTitle(QApplication::translate("viewAllOrders", "View Orders", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewAllOrders: public Ui_viewAllOrders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWALLORDERS_H
