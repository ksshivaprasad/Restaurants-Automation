#include "vieworder.h"
#include "ui_vieworder.h"
#include "order.h"
#include "orderitem.h"
#include "ordercontroller.h"
#include "reservationcontroller.h"
#include<QPushButton>
#include<QHBoxLayout>
#include<QDebug>
viewOrder::viewOrder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewOrder)
{
    ui->setupUi(this);
   // setOrderItems(currentOrder);
}

viewOrder::~viewOrder()
{
    delete ui;
}
void viewOrder::init(order* currentOrder)
{
    setOrderItems(currentOrder);
}

void viewOrder::setOrderItems(order* currentOrder)
{

    this->myOrder = currentOrder;
    QList<orderItem*> orderItems = this->myOrder->getOrderItems();
    ui->viewOrderTableWidget->clearContents();

    ui->viewOrderTableWidget->setRowCount(orderItems.size());
    ui->viewOrderTableWidget->setColumnCount(4);
    ui->tableNoEdit->setText(QString::number(currentOrder->getTable_id()));

    ui->viewOrderTableWidget->setColumnWidth(1, 200);
    ui->viewOrderTableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->viewOrderTableWidget->setHorizontalHeaderLabels(QStringList() << tr("Item ID") << tr("Item Name") << tr("Quantity"));

    for(int i =0;i< orderItems.size();i++)
    {
        if(orderItems.at(i) != 0)
        {
             ui->viewOrderTableWidget->setItem(i, 0,  new QTableWidgetItem(QString::number(orderItems.at(i)->getItem_id())));
             ui->viewOrderTableWidget->setItem(i, 1, new QTableWidgetItem(orderItems.at(i)->getMenuItem()->getName()));
             ui->viewOrderTableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(orderItems.at(i)->getQuantity())));

             //Button
             QWidget* pWidget = new QWidget();
             QPushButton* btn_remove = new QPushButton();
             btn_remove->setText("Remove");
             btn_remove->setProperty("Key",orderItems.at(i)->getItem_id() );
             QObject::connect(btn_remove, SIGNAL(clicked()),this, SLOT(on_removeOrderButton_clicked()));

             //Update

             QPushButton* btn_update = new QPushButton();
             btn_update->setText("Update");
             btn_update->setProperty("Key",i);
             QObject::connect(btn_update, SIGNAL(clicked()),this, SLOT(on_updateOrderButton_clicked()));


             QHBoxLayout* pLayout = new QHBoxLayout(pWidget);
             pLayout->addWidget(btn_remove);
             pLayout->addWidget(btn_update);
             pLayout->setAlignment(Qt::AlignCenter);
             pLayout->setContentsMargins(0, 0, 0, 0);
             pWidget->setLayout(pLayout);
             ui->viewOrderTableWidget->setCellWidget(i, 3, pWidget);
        }


    }

}
void viewOrder::on_removeOrderButton_clicked()
{
    QVariant row = sender()->property("Key");
    //qDebug() << row.toInt();
    this->myOrder->removeItem(row.toInt());
    OrderController::getInstance()->updateOrder(myOrder);
    setOrderItems(this->myOrder);
}

void viewOrder::on_updateOrderButton_clicked()
{
    qDebug() << "update Order";
    QVariant row = sender()->property("Key");
    qDebug() << row.toInt();
    this->myOrder->getOrderItems().at(row.toInt())->setQuantity((ui->viewOrderTableWidget->item(row.toInt(),2)->text()).toInt());
    OrderController::getInstance()->updateOrder(myOrder);
    setOrderItems(this->myOrder);
}
void viewOrder::on_submitOrderButton_clicked()
{
    qDebug() << "In Submit Order";
    OrderController::getInstance()->submitOrder(this->myOrder);

    ui->viewOrderTableWidget->close();
    QWidget::close();

}
