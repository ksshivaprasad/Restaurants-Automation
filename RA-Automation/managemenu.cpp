#include "managemenu.h"
#include "ui_managemenu.h"
#include "menucontroller.h"
#include<QDebug>
#include<QPushButton>
#include<QWidget>
#include<QHBoxLayout>
manageMenu::manageMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::manageMenu)
{
     ui->setupUi(this);

    init();
}

void manageMenu::init()
{
      pupulateMenu();
}

manageMenu::~manageMenu()
{
    delete ui;
}

void manageMenu::pupulateMenu()
{
    qDebug() << "populateMenu";
    QList<MenuItem*> menuItems = MenuController::getInstance()->getMenu();
    ui->MenuListWidget->clearContents();
    ui->MenuListWidget->setRowCount(menuItems.size());
    ui->MenuListWidget->setColumnCount(5);
    for(int i =0;i< menuItems.size();i++)
    {

        ui->MenuListWidget->setItem(i, 0,  new QTableWidgetItem(QString::number(menuItems.at(i)->getKey())));
        ui->MenuListWidget->setItem(i, 1, new QTableWidgetItem(menuItems.at(i)->getName()));
        ui->MenuListWidget->setItem(i, 2, new QTableWidgetItem(menuItems.at(i)->getDescription()));
        ui->MenuListWidget->setItem(i, 3, new QTableWidgetItem(QString::number(menuItems.at(i)->getPrice())));

        //Button
        QWidget* pWidget = new QWidget();
        QPushButton* btn_remove = new QPushButton();
        btn_remove->setText("Remove");
        btn_remove->setProperty("Key",menuItems.at(i)->getKey() );
        QObject::connect(btn_remove, SIGNAL(clicked()),this, SLOT(on_removeButton_clicked()));
        QHBoxLayout* pLayout = new QHBoxLayout(pWidget);
        pLayout->addWidget(btn_remove);
        pLayout->setAlignment(Qt::AlignCenter);
        pLayout->setContentsMargins(0, 0, 0, 0);
        pWidget->setLayout(pLayout);
        ui->MenuListWidget->setCellWidget(i, 4, pWidget);
       // qDebug() << menuItems.at(i)->getName();

    }
}

void manageMenu::on_removeButton_clicked()
{
    QVariant row = sender()->property("Key");
    //qDebug() << row.toInt();
    MenuController::getInstance()->removeMenuItem( row.toInt());
    pupulateMenu();
}

void manageMenu::on_addButton_clicked()
{
    //qDebug() << "addItem";
    MenuController::getInstance()->addMenuItem(0,ui->NameEdit->toPlainText(),ui->DescEdit->toPlainText(),
                                       ui->recipeIdEdit->toPlainText().toInt(),ui->PriceEdit->toPlainText().toFloat(),1);
    ui->NameEdit->clear();
    ui->DescEdit->clear();
    ui->recipeIdEdit->clear();
    ui->PriceEdit->clear();
    pupulateMenu();
}
