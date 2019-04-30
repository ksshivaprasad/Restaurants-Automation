#ifndef MENUITEMBUILDER_H
#define MENUITEMBUILDER_H
#include<QString>
#include"menuitem.h"
class MenuItemBuilder
{
public:
    MenuItemBuilder();
    MenuItemBuilder(int id);
    void setName(QString name);
    void setRecipeId(int recipeId);
    void setDescription(QString description);
    void setPrice(float Price);
    MenuItem* getResult();
protected:
    MenuItem* mResult;
};

#endif // MENUITEMBUILDER_H
