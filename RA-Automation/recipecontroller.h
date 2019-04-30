#ifndef RECIPECONTROLLER_H
#define RECIPECONTROLLER_H

#include <QList>
#include <recipe.h>
class RecipeController
{
private:
    RecipeController();
    static RecipeController* INSTANCE;
    QList<Recipe*> recipeList;
    void init();
    QList<int> toList(QString grocery);
    void reGenerateId();
public:
   static RecipeController* getInstance();
   void addRecipe(int id_g,QString name, QString instructions,QList<int> GroceryList,int quantity,int fileWrite);
   void removeRecipe(int id);
   QList<Recipe*> getRecipes();
   void printRecipes();
   QStringList getRecipeAsStringList();
   Recipe *getRecipe(int id);
public slots:

};

#endif // RECIPECONTROLLER_H
