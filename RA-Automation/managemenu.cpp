#include "managemenu.h"
#include "ui_managemenu.h"

manageMenu::manageMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manageMenu)
{
    ui->setupUi(this);
}

manageMenu::~manageMenu()
{
    delete ui;
}
