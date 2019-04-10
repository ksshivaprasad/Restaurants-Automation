#include "reservetable.h"
#include "ui_reservetable.h"

reservetable::reservetable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reservetable)
{
    ui->setupUi(this);
}

reservetable::~reservetable()
{
    delete ui;
}
