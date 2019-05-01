#include "managepay.h"
#include "ui_managepay.h"

managePay::managePay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::managePay)
{
    ui->setupUi(this);
}

managePay::~managePay()
{
    delete ui;
}
