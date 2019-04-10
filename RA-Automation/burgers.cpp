#include "burgers.h"
#include "ui_burgers.h"
#include <QSqlDatabase>

burgers::burgers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::burgers)
{
    ui->setupUi(this);
}

burgers::~burgers()
{
    delete ui;
}
