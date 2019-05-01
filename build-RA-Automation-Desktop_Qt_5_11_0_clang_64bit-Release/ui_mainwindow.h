/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionMenu;
    QAction *actionGrocery;
    QAction *actionRecipe;
    QAction *actionViewNotification;
    QAction *actionExit;
    QAction *actionEmployees;
    QAction *actionContributors;
    QAction *actionViewMenu;
    QAction *actionViewOrder;
    QAction *actionPayment;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *Manager;
    QMenu *menuChef;
    QMenu *menuCustomer;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(1800, 1600);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(204, 206, 241, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(229, 230, 248, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(102, 103, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(136, 137, 160, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        MainWindow->setPalette(palette);
        MainWindow->setStyleSheet(QStringLiteral("background-image: url(:/Images/dining-3.jpg)"));
        actionMenu = new QAction(MainWindow);
        actionMenu->setObjectName(QStringLiteral("actionMenu"));
        actionGrocery = new QAction(MainWindow);
        actionGrocery->setObjectName(QStringLiteral("actionGrocery"));
        actionRecipe = new QAction(MainWindow);
        actionRecipe->setObjectName(QStringLiteral("actionRecipe"));
        actionViewNotification = new QAction(MainWindow);
        actionViewNotification->setObjectName(QStringLiteral("actionViewNotification"));
        actionViewNotification->setCheckable(false);
        actionViewNotification->setChecked(false);
        actionViewNotification->setEnabled(true);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionEmployees = new QAction(MainWindow);
        actionEmployees->setObjectName(QStringLiteral("actionEmployees"));
        actionContributors = new QAction(MainWindow);
        actionContributors->setObjectName(QStringLiteral("actionContributors"));
        actionContributors->setEnabled(true);
        actionViewMenu = new QAction(MainWindow);
        actionViewMenu->setObjectName(QStringLiteral("actionViewMenu"));
        actionViewOrder = new QAction(MainWindow);
        actionViewOrder->setObjectName(QStringLiteral("actionViewOrder"));
        actionPayment = new QAction(MainWindow);
        actionPayment->setObjectName(QStringLiteral("actionPayment"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1800, 22));
        menuBar->setFocusPolicy(Qt::StrongFocus);
        menuBar->setDefaultUp(true);
        Manager = new QMenu(menuBar);
        Manager->setObjectName(QStringLiteral("Manager"));
        menuChef = new QMenu(menuBar);
        menuChef->setObjectName(QStringLiteral("menuChef"));
        menuCustomer = new QMenu(menuBar);
        menuCustomer->setObjectName(QStringLiteral("menuCustomer"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);

        menuBar->addAction(Manager->menuAction());
        menuBar->addAction(menuChef->menuAction());
        menuBar->addAction(menuCustomer->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        Manager->addAction(actionMenu);
        Manager->addSeparator();
        Manager->addAction(actionGrocery);
        Manager->addSeparator();
        Manager->addAction(actionRecipe);
        Manager->addSeparator();
        Manager->addAction(actionViewNotification);
        Manager->addSeparator();
        Manager->addAction(actionExit);
        menuChef->addAction(actionViewOrder);
        menuCustomer->addSeparator();
        menuCustomer->addAction(actionViewMenu);
        menuCustomer->addSeparator();
        menuCustomer->addAction(actionPayment);
        menuCustomer->addSeparator();
        menuAbout->addAction(actionContributors);
        toolBar_2->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "RA System", nullptr));
        actionMenu->setText(QApplication::translate("MainWindow", "Menu", nullptr));
        actionGrocery->setText(QApplication::translate("MainWindow", "Grocery", nullptr));
        actionRecipe->setText(QApplication::translate("MainWindow", "Recipe", nullptr));
        actionViewNotification->setText(QApplication::translate("MainWindow", "Notifications", nullptr));
        actionViewNotification->setIconText(QApplication::translate("MainWindow", "Notifications", nullptr));
#ifndef QT_NO_TOOLTIP
        actionViewNotification->setToolTip(QApplication::translate("MainWindow", "Notifications", nullptr));
#endif // QT_NO_TOOLTIP
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        actionEmployees->setText(QApplication::translate("MainWindow", "Employees", nullptr));
#ifndef QT_NO_TOOLTIP
        actionEmployees->setToolTip(QApplication::translate("MainWindow", "Employees", nullptr));
#endif // QT_NO_TOOLTIP
        actionContributors->setText(QApplication::translate("MainWindow", "Contributors", nullptr));
        actionViewMenu->setText(QApplication::translate("MainWindow", "View Menu", nullptr));
        actionViewOrder->setText(QApplication::translate("MainWindow", "Orders", nullptr));
        actionPayment->setText(QApplication::translate("MainWindow", "Payment", nullptr));
        Manager->setTitle(QApplication::translate("MainWindow", "Manager", nullptr));
        menuChef->setTitle(QApplication::translate("MainWindow", "Chef", nullptr));
        menuCustomer->setTitle(QApplication::translate("MainWindow", "Customer", nullptr));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
