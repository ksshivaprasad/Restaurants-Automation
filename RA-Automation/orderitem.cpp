#include "orderitem.h"

orderItem::orderItem()
{
}



MenuItem* orderItem::getMenuItem() const
{
    return menuItem;
}

void orderItem::setMenuItem(MenuItem* value)
{
    menuItem = value;
}

int orderItem::getQuantity() const
{
    return quantity;
}

void orderItem::setQuantity(int value)
{
    quantity = value;
}

int orderItem::getItem_id() const
{
    return item_id;
}

void orderItem::setItem_id(int value)
{
    item_id = value;
}
orderItem::orderItem(int item_id)
{
    this->item_id = item_id;
}

float orderItem::getSubTotal()
{
    return (this->menuItem->getPrice() * this->quantity);
}

MenuItem* orderItem::getItem()
{
    return this->menuItem;
}
