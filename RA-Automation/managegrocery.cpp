#include "managegrocery.h"
#include "ui_managegrocery.h"

manageGrocery::manageGrocery(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manageGrocery)
{
    ui->setupUi(this);
}

manageGrocery::~manageGrocery()
{
    delete ui;
}
