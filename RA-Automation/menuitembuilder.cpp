#include "menuitembuilder.h"

MenuItemBuilder::MenuItemBuilder()
{

}
MenuItemBuilder::MenuItemBuilder(int id)
{
    this->mResult = new MenuItem(id);
}
void MenuItemBuilder::setName(QString name)
{
    mResult->setName(name);
}

void MenuItemBuilder::setRecipeId(int recipeId)
{
    mResult->setRecipeId(recipeId);
}

void MenuItemBuilder::setDescription(QString description)
{
    mResult->setDescription(description);
}

void MenuItemBuilder::setPrice(float Price)
{
    mResult->setPrice(Price);
}

MenuItem *MenuItemBuilder::getResult()
{
    return mResult;
}
