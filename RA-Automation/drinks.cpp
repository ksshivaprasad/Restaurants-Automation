#include "drinks.h"
#include "ui_drinks.h"

drinks::drinks(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::drinks)
{
    ui->setupUi(this);
}

drinks::~drinks()
{
    delete ui;
}
