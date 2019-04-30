#ifndef GROCERYBUILDER_H
#define GROCERYBUILDER_H
#include "groceryitem.h"
class GroceryBuilder
{
public:
    GroceryBuilder();
    GroceryBuilder(int id);
    void setName(QString name);
    void setQuantity(int quantity);
    GroceryItem* getResult();
protected:
    GroceryItem* mResult;
};

#endif // GROCERYBUILDER_H
