#ifndef ORDERCONTROLLER_H
#define ORDERCONTROLLER_H
#include "order.h"
#include<QList>

class OrderController
{

private:
    int total_orders;
    QList<order*> activeOrders;
    QList<order*> submittedOrders;
    static OrderController* INSTANCE;
     OrderController();
public:
    static OrderController* getInstance();
     order* createOrder(int table_id);
     void removeOrder(int order_id);
     QList<order*> getAllActiveOrders();
     QList<order*> getAllSubmittedOrders();
     void submitOrder(order* order);
     QStringList getOrderAsStringList();
     void cancelOrder(order* order);
     void updateOrder(order *order);
     order *getOrder(int orderId);
     order *getOrderFRomTableId(int tableId);
};

#endif // ORDERCONTROLLER_H
