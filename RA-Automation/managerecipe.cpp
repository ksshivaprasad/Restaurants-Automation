#include "managerecipe.h"
#include "ui_managerecipe.h"

manageRecipe::manageRecipe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manageRecipe)
{
    ui->setupUi(this);
}

manageRecipe::~manageRecipe()
{
    delete ui;
}
