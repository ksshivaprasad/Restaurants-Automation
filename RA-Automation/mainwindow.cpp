#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "saladdialog.h"
#include "burgers.h"
#include "deserts.h"
#include "drinks.h"
#include "reservetable.h"
#include "employees.h"
#include "feedback.h"
#include "qmessagebox.h"
#include "managemenu.h"
#include "managerecipe.h"
#include "ui_managemenu.h"
#include "managepay.h"


#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionMenu_triggered()
{

    menu.show();

}

void MainWindow::on_actionRecipe_triggered()
{
    recipe.show();

}
void MainWindow::on_actionGrocery_triggered()
{
    grocery.show();
}
void MainWindow::on_actionViewMenu_triggered()
{
    menuOrder.show();
}
void MainWindow::on_actionViewOrder_triggered()
{
    viewAllOrders.setAllOrders();
    viewAllOrders.show();
}


void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionPayment_triggered()
{
    managePayment.show();
}
