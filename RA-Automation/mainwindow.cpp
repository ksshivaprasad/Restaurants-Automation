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

void MainWindow::on_actionBurgers_triggered()
{

    this->hide();

    burgers burger;
    burger.setModal(true);
    burger.exec();

    this->show();
}

void MainWindow::on_actionSalads_triggered()
{
    this->hide();

    SaladDialog saladdialog;
    saladdialog.setModal(true);
    saladdialog.exec();

    this->show();
}

void MainWindow::on_actionDrinks_triggered()
{
    this->hide();

    drinks drink;
    drink.setModal(true);
    drink.exec();

    this->show();
}

void MainWindow::on_actionTable_triggered()
{
    this->hide();

    reservetable reserve;
    reserve.setModal(true);
    reserve.exec();

    this->show();
}


void MainWindow::on_actionEmployees_triggered()
{
    this->hide();

    employees employee;
    employee.setModal(true);
    employee.exec();

    this->show();
}

void MainWindow::on_actionCustomer_triggered()
{
    this->hide();

    Feedback ratings;
    ratings.setModal(true);
    ratings.exec();

    this->show();
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox msg;
    msg.setText("Order Has been Placed!");
    msg.exec();
}
