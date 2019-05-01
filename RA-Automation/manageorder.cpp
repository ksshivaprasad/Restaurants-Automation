#include "manageorder.h"
#include "ui_manageorder.h"
#include "order.h"
#include "ordercontroller.h"
#include "menucontroller.h"
#include "reservationcontroller.h"
#include "vieworder.h"
#include <QDebug>
#include <QHBoxLayout>
#include <QObject>
#include <QAbstractButton>
manageOrder::manageOrder(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::manageOrder)
{
    ui->setupUi(this);
    init();
}

manageOrder::~manageOrder()
{
    delete ui;
}
void manageOrder::init()
{
    pupulateMenu();

}
void manageOrder::pupulateMenu()
{
    qDebug() << "populateMenu Order";
    QList<MenuItem*> menuItems = MenuController::getInstance()->getMenu();
    ui->menuOrdetTable->clearContents();
    ui->menuOrdetTable->setRowCount(menuItems.size());
    ui->menuOrdetTable->setColumnCount(6);

    ui->menuOrdetTable->setColumnWidth(1, 200);
    ui->menuOrdetTable->setColumnWidth(2, 200);
    ui->menuOrdetTable->horizontalHeader()->setStretchLastSection(true);
    ui->menuOrdetTable->setHorizontalHeaderLabels(QStringList() << tr("Item ID") << tr("Name") << tr("Description") << tr("Price"));

    for(int i =0;i< menuItems.size();i++)
    {

        ui->menuOrdetTable->setItem(i, 0,  new QTableWidgetItem(QString::number(menuItems.at(i)->getKey())));
        ui->menuOrdetTable->setItem(i, 1, new QTableWidgetItem(menuItems.at(i)->getName()));
        ui->menuOrdetTable->setItem(i, 2, new QTableWidgetItem(menuItems.at(i)->getDescription()));
        ui->menuOrdetTable->setItem(i, 3, new QTableWidgetItem(QString::number(menuItems.at(i)->getPrice())));

         ui->menuOrdetTable->setItem(i, 4,  new QTableWidgetItem(0));
        //Button
        //QWidget* pWidget = new QWidget();
        QPushButton* btn_add = new QPushButton();
        btn_add->setText("Add");
        btn_add->setProperty("Key",menuItems.at(i)->getKey() );
        btn_add->setProperty("Row",i);
        btn_add->setEnabled(false);
        QObject::connect(btn_add, SIGNAL(clicked()),this, SLOT(on_AddItemButton_clicked()));
        // QHBoxLayout* pLayout = new QHBoxLayout(pWidget);
        //pLayout->addWidget(btn_add);
        //pLayout->setAlignment(Qt::AlignCenter);
        //pLayout->setContentsMargins(0, 0, 0, 0);
        //pWidget->setLayout(pLayout);
        ui->menuOrdetTable->setCellWidget(i, 5, btn_add);
       // qDebug() << menuItems.at(i)->getName();

    }
}
void manageOrder::on_AddItemButton_clicked()
{
    qDebug() << "In Add Order";
    QVariant row = sender()->property("Row");
    QVariant key = sender()->property("Key");
    qDebug() << "Row: " << row.toInt();
    qDebug() << "Key: " << key.toInt();
    currentOrder->addItem(MenuController::getInstance()->getMenuItem(key.toInt()),ui->menuOrdetTable->item(row.toInt(),4)->text().toInt());
    ui->viewOrderButton->setEnabled(true);

}

void manageOrder::on_createOrderButton_clicked()
{
    qDebug() << "In Create Order";
    QList<MenuItem*> menuItems = MenuController::getInstance()->getMenu();
    currentOrder = OrderController::getInstance()->createOrder(currentTable);
    for(int i =0;i< menuItems.size();i++)
    {
        //QPushButton* button = qobject_cast<QPushButton*>(sender());
        QPushButton* addButton = qobject_cast<QPushButton*>(ui->menuOrdetTable->cellWidget(i,5));
        addButton->setEnabled(true);
    }

}
void manageOrder::on_reserveTableButton_clicked()
{
    qDebug() << "In Reserve table";
    currentTable = ReservationController::getInstance()->reserveTable();
    if(currentTable != 0)
    {
        qDebug() << "Reserved " << currentTable;
        ui->tableId->setText(QString::number(currentTable));
        ui->viewOrderButton->setEnabled(false);
        ui->createOrderButton->setEnabled(true);
        //ui->reserveTableButton->setEnabled(false);
    } else
    {
        ui->reserveTableButton->setEnabled(false);
    }

}

void manageOrder::on_viewOrderButton_clicked()
{
    qDebug() << "In View Order";
    viewOrder* viewOrder_m = new viewOrder(this);
    viewOrder_m->setOrderItems(currentOrder);
    viewOrder_m->show();
    //viewOrder_m::isVisible();

}
