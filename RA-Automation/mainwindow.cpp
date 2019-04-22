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


void MainWindow::on_actionGrocery_triggered()
{

}

void MainWindow::on_actionMenu_triggered()
{
    manageMenu ManageMenu;
    ManageMenu.setModal(true);
    ManageMenu.exec();
}
