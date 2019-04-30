#include "recipe.h"
#include "grocerycontroller.h"
#include<QDebug>
#include<QStringList>

int Recipe::getQuantity() const
{
    return quantity;
}

void Recipe::setQuantity(int value)
{
    quantity = value;
}

void Recipe::prepareRecipe()
{
    qDebug() << "Prepare Recipe" << groceryList;
    for(int i = 0;i<groceryList.size();i++)
    {
        GroceryController::getInstance()->updateGroceryItem(i,(groceryList.at(i)));
    }
}
int Recipe::getId() const
{
    return id;
}

void Recipe::setId(int value)
{
    id = value;
}

QString Recipe::getName() const
{
    return name;
}

void Recipe::setName(const QString &value)
{
    name = value;
}

QString Recipe::getInstructions() const
{
    return instructions;
}

void Recipe::setInstructions(const QString &value)
{
    instructions = value;
}
QString Recipe::getRecipeAsString()
{
    QStringList list;
    list.append(QString::number(this->getId()));
    list.append((this->getName()));
    list.append((this->getInstructions()));
    list.append(getGroceryListAsString());
    list.append(QString::number(this->getQuantity()));
    return list.join(",");
}
QString Recipe::getGroceryListAsString() const
{
    QStringList gStringList;
    for(int i = 0;i<groceryList.size();i++)
    {

        gStringList.append(QString::number(groceryList.at(i)));
    }
    return gStringList.join(" ");
}
QList<int> Recipe::getGroceryList() const
{
    return groceryList;
}

void Recipe::setGroceryList(const QList<int> &value)
{
    groceryList = value;
}
Recipe::Recipe(int id)
{
    this->id = id;
}
Recipe::Recipe()
{

}
void Recipe::print()
{
    qDebug() << id << "\t" << name <<"\t" << instructions << "\t" << groceryList << "\t" <<quantity <<"\n";
}
