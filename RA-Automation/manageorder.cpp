#include "manageorder.h"
#include "ui_manageorder.h"

manageOrder::manageOrder(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::manageOrder)
{
    ui->setupUi(this);
}

manageOrder::~manageOrder()
{
    delete ui;
}
