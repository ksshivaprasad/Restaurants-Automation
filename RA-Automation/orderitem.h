#ifndef ORDERITEM_H
#define ORDERITEM_H
#include<menuitem.h>
class orderItem
{
    int item_id;
    int order_id;
    //int orderItem;
    MenuItem* menuItem;
    int quantity;

public:
    orderItem();
    orderItem(int item_id);
    ~orderItem();
    float getSubTotal();
    MenuItem* getItem();
    MenuItem* getMenuItem() const;
    void setMenuItem(MenuItem* value);
    int getQuantity() const;
    void setQuantity(int value);
    int getItem_id() const;
    void setItem_id(int value);
};

#endif // ORDERITEM_H
