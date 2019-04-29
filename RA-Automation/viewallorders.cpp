#include "viewallorders.h"
#include "ui_viewallorders.h"

viewAllOrders::viewAllOrders(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::viewAllOrders)
{
    ui->setupUi(this);
}

viewAllOrders::~viewAllOrders()
{
    delete ui;
}
