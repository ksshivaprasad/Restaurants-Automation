#include "deserts.h"
#include "ui_deserts.h"

deserts::deserts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deserts)
{
    ui->setupUi(this);
}

deserts::~deserts()
{
    delete ui;
}
