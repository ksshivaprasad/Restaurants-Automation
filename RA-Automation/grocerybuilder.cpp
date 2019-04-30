#include "grocerybuilder.h"


GroceryBuilder::GroceryBuilder(int id)
{
    this->mResult = new GroceryItem(id);
}
GroceryBuilder::GroceryBuilder()
{

}
void GroceryBuilder::setName(QString name)
{
    mResult->setName(name);
}


void GroceryBuilder::setQuantity(int quantity)
{
    mResult->setQuantity(quantity);

}

GroceryItem* GroceryBuilder::getResult()
{
    return mResult;
}
