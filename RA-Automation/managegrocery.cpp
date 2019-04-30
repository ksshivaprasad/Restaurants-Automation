#include "managegrocery.h"
#include "ui_managegrocery.h"
#include "groceryitem.h"
#include "grocerycontroller.h"
#include<QDebug>
manageGrocery::manageGrocery(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manageGrocery)
{
    ui->setupUi(this);
    init();
}

manageGrocery::~manageGrocery()
{
    delete ui;
}
void manageGrocery::init()
{
    pupulateGrocery();

}
void manageGrocery::pupulateGrocery()
{
    qDebug() << "pupulateGrocery";
    QList<GroceryItem*> groceryItems = GroceryController::getInstance()->getGroceryList();

    ui->groceryTableWidget->clearContents();
    ui->groceryTableWidget->setRowCount(groceryItems.size());
    ui->groceryTableWidget->setColumnCount(3);
    for(int i =0;i< groceryItems.size();i++)
    {

        ui->groceryTableWidget->setItem(i, 0,  new QTableWidgetItem(groceryItems.at(i)->getName()));
        ui->groceryTableWidget->setItem(i, 1, new QTableWidgetItem(QString::number(groceryItems.at(i)->getQuantity())));

        //Button
        QWidget* pWidget = new QWidget();
        QPushButton* btn_remove = new QPushButton();
        btn_remove->setText("Remove");
        btn_remove->setProperty("Key",groceryItems.at(i)->getId() );
        QObject::connect(btn_remove, SIGNAL(clicked()),this, SLOT(on_removeGroceryButton_clicked()));

        QHBoxLayout* pLayout = new QHBoxLayout(pWidget);
        pLayout->addWidget(btn_remove);
        pLayout->setAlignment(Qt::AlignCenter);
        pLayout->setContentsMargins(0, 0, 0, 0);
        pWidget->setLayout(pLayout);
        ui->groceryTableWidget->setCellWidget(i, 2, pWidget);
       // qDebug() << menuItems.at(i)->getName();

    }


}

void manageGrocery::on_removeGroceryButton_clicked()
{
    qDebug() << "In remove";
    QVariant row = sender()->property("Key");
    qDebug() << row.toInt();
    GroceryController::getInstance()->removeGrocery((row.toInt()));
    pupulateGrocery();
}

void manageGrocery::on_addGroceryButton_clicked()
{
    qDebug() << "addItem";
    GroceryController::getInstance()->addGrocery(0,ui->nameEdit->toPlainText(),(ui->quantityEdit->toPlainText().toInt()),1);
    ui->nameEdit->clear();
    ui->quantityEdit->clear();
    pupulateGrocery();
}
