#ifndef MENUCONTROLLER_H
#define MENUCONTROLLER_H
#include<QList>
#include "menuitem.h"
class MenuController
{
private:
    MenuController();
    static MenuController* INSTANCE;
    QList<MenuItem*> menuList;
    void init();
    QList<int> toList(QString grocery);
    void reGenerateId();
public:
   static MenuController* getInstance();
   void addMenuItem(int id_g,QString name,QString description,int recipe_id,float price,int fileWrite);
   void removeMenuItem(int id);
   QList<MenuItem*> getMenu();
   QStringList getMenuAsStringList();
   void printMenu();
   MenuItem *getMenuItem(int id);
};

#endif // MENUCONTROLLER_H
