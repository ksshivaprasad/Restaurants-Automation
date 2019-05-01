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

QT_BEGIN_NAMESPACE

class Ui_managePay
{
public:

    void setupUi(QDialog *managePay)
    {
        if (managePay->objectName().isEmpty())
            managePay->setObjectName(QStringLiteral("managePay"));
        managePay->resize(1001, 745);

        retranslateUi(managePay);

        QMetaObject::connectSlotsByName(managePay);
    } // setupUi

    void retranslateUi(QDialog *managePay)
    {
        managePay->setWindowTitle(QApplication::translate("managePay", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managePay: public Ui_managePay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEPAY_H
