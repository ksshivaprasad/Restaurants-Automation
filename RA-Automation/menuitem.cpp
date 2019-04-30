#include "menuitem.h"
#include<QDebug>
MenuItem::MenuItem()
{
}
MenuItem::MenuItem(int id)
{
    key = id;
}

float MenuItem::getPrice() const
{
    return price;
}

void MenuItem::setPrice(float value)
{
    price = value;
}

QString MenuItem::getMenuAsString()
{
    QStringList list;
    list.append(QString::number(this->getKey()));
    list.append((this->getName()));
    list.append((this->getDescription()));
    list.append(QString::number(this->getRecipeId()));
    list.append(QString::number(this->getPrice()));
    return list.join(",");
}


int MenuItem::getRecipeId() const
{
    return recipe_id;
}

void MenuItem::setRecipeId(const int value)
{
    recipe_id = value;
}

QString MenuItem::getDescription() const
{
    return description;
}

void MenuItem::setDescription(QString value)
{
    description = value;
}

QString MenuItem::getName() const
{
    return name;
}

void MenuItem::setName(QString value)
{
    name = value;
}

int MenuItem::getKey() const
{
    return key;
}

void MenuItem::setKey(int value)
{
    key = value;
}

void MenuItem::Print()
{
    qDebug() << key << "\t" << name <<"\t" <<"\t" << description <<"\t" <<price <<"\n";
}
