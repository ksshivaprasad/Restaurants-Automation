#include "viewallorders.h"
#include "ui_viewallorders.h"
#include "ordercontroller.h"
#include "order.h"
#include "orderitem.h"
#include "recipecontroller.h"
#include<QList>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QTableWidget>
#include<QtAlgorithms>
#include<QDebug>

viewAllOrders::viewAllOrders(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::viewAllOrders)
{
    ui->setupUi(this);
    //setAllOrders();
}

viewAllOrders::~viewAllOrders()
{
    delete ui;
}

void viewAllOrders::setAllOrders()
{
    QList<order*> submittedOrders = OrderController::getInstance()->getAllSubmittedOrders();

    qDeleteAll(ui->verticalLayout->children());
    clearLayout(ui->verticalLayout);

    for(int j = 0;j< submittedOrders.size() ;j ++)
    {
        QTableWidget* tableWidget = new QTableWidget();

        QList<orderItem*> orderItems = submittedOrders.at(j)->getOrderItems();

        tableWidget->setRowCount(orderItems.size());
        tableWidget->setColumnCount(6);
        tableWidget->setItem(0, 0, new QTableWidgetItem(QString::number(submittedOrders.at(j)->getTable_id())));
        tableWidget->setItem(0, 1, new QTableWidgetItem(QString::number(submittedOrders.at(j)->getOrder_id())));

        for(int i =0;i< orderItems.size();i++)
        {
            if(orderItems.at(i) != 0)
            {

                tableWidget->setItem(i, 2,  new QTableWidgetItem(QString::number(orderItems.at(i)->getItem_id())));
                tableWidget->setItem(i, 3, new QTableWidgetItem(orderItems.at(i)->getMenuItem()->getName()));
                tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(orderItems.at(i)->getQuantity())));

                 //Button
                 QWidget* pWidget = new QWidget();
                 QPushButton* btn_prepare = new QPushButton();
                 btn_prepare->setText("Prepare");
                 btn_prepare->setProperty("Order-id",submittedOrders.at(j)->getOrder_id());
                  btn_prepare->setProperty("Item-id",orderItems.at(i)->getItem_id());
                 QObject::connect(btn_prepare, SIGNAL(clicked()),this, SLOT(on_prepareOrderButton_clicked()));


                 QHBoxLayout* pLayout = new QHBoxLayout(pWidget);
                 pLayout->addWidget(btn_prepare);
                 pLayout->setAlignment(Qt::AlignCenter);
                 pLayout->setContentsMargins(0, 0, 0, 0);
                 pWidget->setLayout(pLayout);
                 tableWidget->setCellWidget(i, 5, pWidget);
            }

         }
         ui->verticalLayout->addWidget(tableWidget);
       }

}
void viewAllOrders::on_prepareOrderButton_clicked()
{
    qDebug() << "In Prepare";
    order* currentOrder;
    QVariant orderId = sender()->property("Order-id");
    QVariant ItemId = sender()->property("Item-id");
    qDebug() << "Order id: " << orderId.toInt();
    qDebug() << "Item id: " << ItemId.toInt();
    currentOrder = OrderController::getInstance()->getOrder(orderId.toInt());
    if(currentOrder)
    {
       orderItem* currentorderItem = currentOrder->getOrderItem( ItemId.toInt());
       if(currentorderItem)
       {
           qDebug() << "Recipe id: "<<currentorderItem->getMenuItem()->getRecipeId();
           Recipe* recipe = RecipeController::getInstance()->getRecipe(currentorderItem->getMenuItem()->getRecipeId());
           if(recipe)
            recipe->prepareRecipe();
       }
    }
}

void viewAllOrders::clearLayout(QLayout *layout) {
    QLayoutItem *item;
    while((item = layout->takeAt(0))) {
        if (item->layout()) {
            clearLayout(item->layout());
            delete item->layout();
        }
        if (item->widget()) {
           delete item->widget();
        }
        delete item;
    }
}
