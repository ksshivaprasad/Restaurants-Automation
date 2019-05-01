#include "ordercontroller.h"
#include "fileaccess.h"
#include<QDebug>
OrderController* OrderController::INSTANCE=0;
QString ORDER_FILE = "/Users/balasubramaniang/MS_Assignment/Second_sem/S:w_design/Restaurant_automation/Restaurants-Automation/RA-Automation/Order.txt";

OrderController::OrderController()
{
    total_orders = 0;
}

OrderController *OrderController::getInstance()
{
    if(INSTANCE == NULL)
         INSTANCE = new OrderController();
     return INSTANCE;
}

order* OrderController::createOrder(int table_id)
{
    order* newOrder = new order();
    this->total_orders++;
    newOrder->setOrder_id(this->total_orders);
    newOrder->setTable_id(table_id);
    this->activeOrders.append(newOrder);
    return newOrder;
}
order* OrderController::getOrder(int orderId)
{
    for(int i = 0;i < submittedOrders.size();i++)
    {
        if(orderId == submittedOrders.at(i)->getOrder_id())
            return (submittedOrders.at(i));
    }
    return 0;
}

QList<order*> OrderController::getAllActiveOrders()
{
    return this->activeOrders;
}

QList<order*> OrderController::getAllSubmittedOrders()
{
    return this->submittedOrders;
}

void OrderController::submitOrder(order* order)
{
    FileAccess fileAccess;
    this->submittedOrders.append(order);
    //TODO send notification;
    fileAccess.writeToFile(ORDER_FILE,getOrderAsStringList());
}
QStringList OrderController::getOrderAsStringList()
{
    QStringList list ;
    for(int i = 0;i < submittedOrders.size();i++)
    {
        qDebug() << submittedOrders.at(i)->getOrderAsString();
        list.append(submittedOrders.at(i)->getOrderAsString());
    }
    return list;
}

void OrderController::cancelOrder(order* order)
{
    for(int i = 0;i<this->activeOrders.size();i++)
    {
        if(order->getOrder_id() == this->activeOrders.at(i)->getOrder_id())
        {
            this->activeOrders.removeAt(i);
            break;
        }
    }
}
void OrderController::removeOrder(int tableId)
{
    for(int i = 0;i<this->submittedOrders.size();i++)
    {
        if(tableId == this->submittedOrders.at(i)->getTable_id())
        {
            this->submittedOrders.removeAt(i);
            break;
        }
    }
}
void OrderController::updateOrder(order* order)
{
    qDebug() << "Update order";
    for(int i = 0;i<this->activeOrders.size();i++)
    {
        if(order->getOrder_id() == this->activeOrders.at(i)->getOrder_id())
        {
            qDebug() << "Id found for update";
            this->activeOrders.insert(i,order);
            break;
        }
    }
}
order* OrderController::getOrderFRomTableId(int tableId)
{
    for(int i = 0;i < submittedOrders.size();i++)
    {
        if(submittedOrders.at(i)->getTable_id() == tableId)
        {
            return submittedOrders.at(i);
        }
    }
    return 0;
}
