#ifndef RECIPEBUILDER_H
#define RECIPEBUILDER_H
#include "recipe.h"
class RecipeBuilder
{
public:
    RecipeBuilder();
    RecipeBuilder(int id);
    void setName(QString name);
    void setInstructions(QString instructions);
    void setGroceryList(QList<int> groceryList);
    void setQuantity(int quantity);
    Recipe* getResult();
protected:
    Recipe* mResult;
};

#endif // RECIPEBUILDER_H
