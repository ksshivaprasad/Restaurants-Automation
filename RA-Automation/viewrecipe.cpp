#include "viewrecipe.h"
#include "ui_viewrecipe.h"
#include "grocerycontroller.h"
#include "recipecontroller.h"
viewRecipe::viewRecipe(QWidget *parent,int id) :
    QDialog(parent),
    ui(new Ui::viewRecipe)
{
    ui->setupUi(this);
    populateGroceryTable(id);
    setInstructions(id);
}

viewRecipe::~viewRecipe()
{
    delete ui;
}
void viewRecipe::setInstructions(int id)
{
    ui->instructionsBrowser->setText(RecipeController::getInstance()->getRecipes().at(id)->getInstructions());
}

void viewRecipe::populateGroceryTable(int id)
{
    int valid_row_count = 0;
    int row_index = 0;
    QList<GroceryItem*> groceryItems = GroceryController::getInstance()->getGroceryList();
    QList<int> groceryList = RecipeController::getInstance()->getRecipes().at(id)->getGroceryList();
    for(int i =0;i< groceryList.size();i++)
    {
        if(groceryList.at(i) > 0)
            valid_row_count++;
    }
    ui->ingredientTable->clearContents();

    ui->ingredientTable->setRowCount(valid_row_count);
    ui->ingredientTable->setColumnCount(2);
    for(int i =0;i< groceryList.size();i++)
    {
        if(groceryList.at(i) > 0)
        {
            ui->ingredientTable->setItem(row_index, 1,  new QTableWidgetItem(QString::number(groceryList.at(i))));
            ui->ingredientTable->setItem(row_index, 0, new QTableWidgetItem(groceryItems.at(i)->getName()));
            row_index++;
        }


    }
}
