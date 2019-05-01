#include <QDebug>
#include "recipecontroller.h"
#include "recipebuilder.h"
#include "recipe.h"
#include "fileaccess.h"
#include<QString>
#include<QList>
RecipeController* RecipeController::INSTANCE=0;

//QString RECIPE_FILE ="/Users/balasubramaniang/MS_Assignment/Second_sem/S:w_design/Restaurant_automation_1/Restaurants-Automation/RA-Automation/Recipes.txt";
QString RECIPE_FILE ="/Users/konalesureshs/Desktop/CSUF/Spring 2019/SW Design/CPSC462- Project/CPSC462/Restaurants-Automation/RA-Automation/Recipes.txt";
RecipeController::RecipeController()
{
    init();
}

RecipeController* RecipeController::getInstance()
{
    if(INSTANCE == NULL)
       INSTANCE = new RecipeController();

    return INSTANCE;
}

QStringList RecipeController::getRecipeAsStringList()
{
    QStringList list ;
    for(int i = 0;i < recipeList.size();i++)
    {
        qDebug() << recipeList.at(i)->getRecipeAsString();
        list.append(recipeList.at(i)->getRecipeAsString());
    }
    return list;
}

void RecipeController::addRecipe(int id_g,QString name, QString instructions,QList<int> GroceryList,int quantity,int fileWrite)
{
    FileAccess fileAccess;
    int id = 0;
    if(id_g == 0)
        id = this->recipeList.size()+1;
    else
        id = id_g;
    RecipeBuilder* builder = new RecipeBuilder(id);
    builder->setName(name);
    builder->setInstructions(instructions);
    builder->setGroceryList(GroceryList);
    builder->setQuantity(quantity);
    Recipe* recipe = builder->getResult();
    this->recipeList.append(recipe);
    if(fileWrite)
        fileAccess.writeToFile(RECIPE_FILE,getRecipeAsStringList());
}

void RecipeController::reGenerateId()
{
    for(int i = 0;i<recipeList.size();i++)
    {
        recipeList.at(i)->setId(i+1);
    }
}

void RecipeController::removeRecipe(int id)
{
    FileAccess fileAccess;
    for(int i = 0;i<recipeList.size();i++)
    {
        if(recipeList.at(i)->getId() == id)
        {
            qDebug() <<"Remove recipe: " << id;
            recipeList.removeAt(i);
        }
    }
    reGenerateId();
    fileAccess.writeToFile(RECIPE_FILE,getRecipeAsStringList());
}
Recipe* RecipeController::getRecipe(int id)
{
    for(int i = 0;i<recipeList.size();i++)
    {
        if(recipeList.at(i)->getId() == id)
        {
            return recipeList.at(i);
        }
    }
    return 0;
}

QList<Recipe*> RecipeController::getRecipes()
{
    return recipeList;
}

void RecipeController::printRecipes()
{
    for(int i = 0;i < recipeList.size();i++)
    {
        recipeList.at(i)->print();
    }
}
QList<int> RecipeController::toList(QString grocery)
{
    QList<int> groceryList_i;
    QStringList groceryList_s = grocery.split(' ');
    for(int i = 0;i<groceryList_s.size();i++)
    {
        groceryList_i.append(groceryList_s.at(i).toInt());
    }
    return groceryList_i;
}

void RecipeController::init()
{
    qDebug() << "init";
    QStringList wordList;
    FileAccess fileAcess;
    wordList = fileAcess.readFromFile(RECIPE_FILE);

    for(int i = 0;i<wordList.size();i++)
    {
        QStringList dataList;
        dataList = wordList.at(i).split(',');
        qDebug() << dataList.at(0);
        addRecipe(dataList.at(0).toInt(),dataList.at(1),dataList.at(2),toList(dataList.at(3)),dataList.at(4).toInt(),0);
    }

    printRecipes();
}


