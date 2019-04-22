#include "saladdialog.h"
#include "ui_saladdialog.h"

SaladDialog::SaladDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SaladDialog)
{
    ui->setupUi(this);
}

SaladDialog::~SaladDialog()
{
    delete ui;
}
