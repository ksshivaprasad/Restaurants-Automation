#include "grocerycontroller.h"
#include "grocerybuilder.h"
#include "groceryitem.h"
#include "fileaccess.h"
#include <QString>
#include <QList>
#include <QDebug>
GroceryController* GroceryController::INSTANCE=0;
QString GROCERY_FILE_NAME = "/Users/konalesureshs/Desktop/CSUF/Spring 2019/SW Design/CPSC462- Project/CPSC462/Restaurants-Automation/RA-Automation/Grocery.txt";
GroceryController::GroceryController()
{
    init();
}

void GroceryController::init()
{
    QStringList wordList;
    FileAccess fileAcess;
    wordList = fileAcess.readFromFile(GROCERY_FILE_NAME);

    for(int i = 0;i<wordList.size();i++)
    {
        QStringList dataList;
        dataList = wordList.at(i).split(',');
        addGrocery(dataList.at(0).toInt(),dataList.at(1),dataList.at(2).toInt(),0);
    }

}
void GroceryController::reGenerateId()
{
    for(int i = 0;i<groceryList.size();i++)
    {
        groceryList.at(i)->setId(i+1);
    }
}
QList<int> GroceryController::toList(QString grocery)
{

}

GroceryController *GroceryController::getInstance()
{
    if(INSTANCE == NULL)
         INSTANCE = new GroceryController();
     return INSTANCE;
}
QStringList GroceryController::getGroceryListAsString()
{
    QStringList list ;
    for(int i = 0;i < groceryList.size();i++)
    {
       list.append(groceryList.at(i)->getGroceryAsString());
    }
    return list;

}
void GroceryController::addGrocery(int id_g, QString name, int quantity,int file_write)
{
    FileAccess fileAccess;
    int id = 0;
    if(id_g == 0)
        id = this->groceryList.size()+1;
    else
        id = id_g;
    GroceryBuilder* builder = new GroceryBuilder(id);
    builder->setName(name);
    builder->setQuantity(quantity);
    GroceryItem* grocery = builder->getResult();
    this->groceryList.append(grocery);
    if(file_write)
        fileAccess.writeToFile(GROCERY_FILE_NAME,getGroceryListAsString());
}

void GroceryController::removeGrocery(int id)
{
    FileAccess fileAccess;
    for(int i = 0;i<groceryList.size();i++)
    {
        if(groceryList.at(i)->getId() == id)
            groceryList.removeAt(i);
    }
    reGenerateId();
   fileAccess.writeToFile(GROCERY_FILE_NAME,getGroceryListAsString());
}

QList<GroceryItem *> GroceryController::getGroceryList()
{
    return groceryList;
}

void GroceryController::printGrocery()
{
    for(int i = 0;i < groceryList.size();i++)
    {
        groceryList.at(i)->print();
    }
}

void GroceryController::updateGroceryItem(int id , int quantity)
{
    FileAccess fileAccess;
    qDebug() << "Quantiyt: "<<quantity;
    if(id < groceryList.size())
    {
        qDebug() << "Update: "<< (groceryList.at(id)->getQuantity() - (quantity));
       groceryList.at(id)->setQuantity(groceryList.at(id)->getQuantity() - (quantity));
    }
    fileAccess.writeToFile(GROCERY_FILE_NAME,getGroceryListAsString());
}


