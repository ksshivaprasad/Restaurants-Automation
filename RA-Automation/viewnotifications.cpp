#include "viewnotifications.h"
#include "ui_viewnotifications.h"

viewNotifications::viewNotifications(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewNotifications)
{
    ui->setupUi(this);
}

viewNotifications::~viewNotifications()
{
    delete ui;
}
