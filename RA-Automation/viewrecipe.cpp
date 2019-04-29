#include "viewrecipe.h"
#include "ui_viewrecipe.h"

viewRecipe::viewRecipe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewRecipe)
{
    ui->setupUi(this);
}

viewRecipe::~viewRecipe()
{
    delete ui;
}
