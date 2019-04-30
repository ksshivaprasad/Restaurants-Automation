#include "groceryitem.h"
#include<QDebug>

GroceryItem::GroceryItem()
{
}
GroceryItem::GroceryItem(int id)
{
    this->id = id;
}
int GroceryItem::getQuantity() const
{
    return quantity;
}

void GroceryItem::setQuantity(int value)
{
    quantity = value;
}
int GroceryItem::getId() const
{
    return id;
}

void GroceryItem::setId(int value)
{
    id = value;
}

QString GroceryItem::getName() const
{
    return name;
}

void GroceryItem::setName(const QString &value)
{
    name = value;
}

QString GroceryItem::getGroceryAsString()
{
    QStringList list;
    list.append(QString::number(this->getId()));
    list.append((this->getName()));
    list.append(QString::number(this->getQuantity()));
    return list.join(",");
}
void GroceryItem::print()
{
    qDebug() << id << "\t" << name <<"\t" <<"\t" <<quantity <<"\n";
}
