#ifndef ORDER_H
#define ORDER_H
#include "orderitem.h"
#include "menuitem.h"
#include<QList>
class order
{
    int order_id;
    int table_id;
    QList<orderItem*> orderItems;
public:
    order();
    void addItem(MenuItem* menuItem,int quantity);
    void removeItem(int id);
    float getTotal();
    QList<orderItem*> getOrderItems();
    void regenerateId();
    int getOrder_id() const;
    void setOrder_id(int value);
    int getTable_id() const;
    void setTable_id(int value);
    QString getOrderAsString();
    QString getOrderListAsString() const;

    orderItem *getOrderItem(int id);
};

#endif // ORDER_H
