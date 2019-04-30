#include "menucontroller.h"
#include "menuitembuilder.h"
#include "menuitem.h"
#include "fileaccess.h"
#include<QString>
#include<QList>
#include<QDebug>
MenuController* MenuController::INSTANCE=0;
QString MENU_FILE_NAME = "/Users/balasubramaniang/MS_Assignment/Second_sem/S:w_design/Restaurant_automation_1/Restaurants-Automation/RA-Automation/Menu.txt";
MenuController::MenuController()
{
    init();
}

void MenuController::init()
{
    QStringList wordList;
    FileAccess fileAcess;
    wordList = fileAcess.readFromFile(MENU_FILE_NAME);

    for(int i = 0;i<wordList.size();i++)
    {
        QStringList dataList;
        dataList = wordList.at(i).split(',');
        addMenuItem(dataList.at(0).toInt(),dataList.at(1),dataList.at(2),dataList.at(3).toInt(),
                    dataList.at(4).toFloat(),0);
    }

    //printMenu();
}

QList<int> MenuController::toList(QString grocery)
{

}

MenuController *MenuController::getInstance()
{
    if(INSTANCE == NULL)
         INSTANCE = new MenuController();
     return INSTANCE;
}

void MenuController::addMenuItem(int id_g, QString name,QString description,int recipe_id ,float price,int fileWrite)
{
    int id = 0;
    FileAccess fileAcess;
    if(id_g == 0)
        id = this->menuList.size()+1;
    else
        id = id_g;
    MenuItemBuilder* builder = new MenuItemBuilder(id);
    builder->setName(name);
    builder->setDescription(description);
    builder->setPrice(price);
    builder->setRecipeId(recipe_id);
    MenuItem* menuItem = builder->getResult();
    this->menuList.append(menuItem);
    if(fileWrite)
        fileAcess.writeToFile(MENU_FILE_NAME,getMenuAsStringList());
}

MenuItem* MenuController::getMenuItem(int id)
{
    for(int i = 0;i<menuList.size();i++)
    {
        if(menuList.at(i)->getKey() == id)
        {
            return menuList.at(i);
        }
    }
}

void MenuController::reGenerateId()
{
    for(int i = 0;i<menuList.size();i++)
    {
        menuList.at(i)->setKey(i+1);
    }
}

void MenuController::removeMenuItem(int id)
{
    FileAccess fileAcess;
    qDebug() << "remove" << id;
    for(int i = 0;i<menuList.size();i++)
    {
        if(menuList.at(i)->getKey() == id)
        {
            menuList.removeAt(i);
        }
        //printMenu();
    }
    reGenerateId();
    fileAcess.writeToFile(MENU_FILE_NAME,getMenuAsStringList());
}

QList<MenuItem *> MenuController::getMenu()
{
    return menuList;
}

QStringList MenuController::getMenuAsStringList()
{
    QStringList list ;
    for(int i = 0;i < menuList.size();i++)
    {
        //qDebug() << menuList.at(i)->getMenuAsString();
        list.append(menuList.at(i)->getMenuAsString());
    }
    return list;
}

void MenuController::printMenu()
{
    for(int i = 0;i < menuList.size();i++)
    {
        menuList.at(i)->Print();
    }
}
