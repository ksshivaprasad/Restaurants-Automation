#include "order.h"
#include "orderitem.h"
#include<QDebug>
order::order()
{
}
int order::getOrder_id() const
{
    return order_id;
}

void order::setOrder_id(int value)
{
    order_id = value;
}

int order::getTable_id() const
{
    return table_id;
}

void order::setTable_id(int value)
{
    table_id = value;
}
QString order::getOrderListAsString() const
{
    QStringList orderList;
    for(int i = 0;i<orderItems.size();i++)
    {

        orderList.append(QString::number(orderItems.at(i)->getMenuItem()->getKey()));
    }
    return orderList.join(" ");
}
QString order::getOrderAsString()
{
    QStringList list;
    list.append(QString::number(this->getOrder_id()));
    list.append(QString::number(this->getTable_id()));
    list.append(getOrderListAsString());
    list.append(QString::number(this->getTotal()));
    return list.join(",");
}

void order::addItem(MenuItem* menuItem, int quantity)
{
    qDebug() << "Order: add item " << quantity;
    orderItem* item = new orderItem(this->getOrderItems().size()+1);
    item->setMenuItem(menuItem);
    item->setQuantity(quantity);
    this->orderItems.append(item);
    qDebug() << "addItem done";

}

void order::regenerateId()
{
    for(int i = 0;i<orderItems.size();i++)
    {
        orderItems.at(i)->setItem_id(i+1);
    }
}

void order::removeItem(int id)
{
    for(int i = 0;i<orderItems.size();i++)
    {
        if(id == orderItems.at(i)->getItem_id())
        {
            orderItems.removeAt(i);
            break;
        }
    }
    regenerateId();
}
orderItem* order::getOrderItem(int id)
{
    for(int i = 0;i<orderItems.size();i++)
    {
        if(id == orderItems.at(i)->getItem_id())
        {
            return orderItems.at(i);

        }
    }
    return 0;

}

float order::getTotal()
{
    float total = 0;
    for(int i = 0;i<orderItems.size();i++)
    {
        total += orderItems.at(i)->getSubTotal();
    }
    return total;
}

QList<orderItem*> order::getOrderItems()
{
    return orderItems;
}
