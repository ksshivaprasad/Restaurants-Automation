#include "vieworder.h"
#include "ui_vieworder.h"

viewOrder::viewOrder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewOrder)
{
    ui->setupUi(this);
}

viewOrder::~viewOrder()
{
    delete ui;
}
