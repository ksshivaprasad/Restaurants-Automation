#include "recipebuilder.h"

RecipeBuilder::RecipeBuilder(int id)
{
    this->mResult = new Recipe(id);
}
RecipeBuilder::RecipeBuilder()
{

}
void RecipeBuilder::setName(QString name)
{
    mResult->setName(name);
}

void RecipeBuilder::setInstructions(QString instructions)
{
    mResult->setInstructions(instructions);

}

void RecipeBuilder::setGroceryList(QList<int> groceryList)
{
    mResult->setGroceryList(groceryList);

}

void RecipeBuilder::setQuantity(int quantity)
{
    mResult->setQuantity(quantity);

}

Recipe* RecipeBuilder::getResult()
{
    return mResult;
}
