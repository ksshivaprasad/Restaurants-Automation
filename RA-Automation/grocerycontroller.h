#ifndef GROCERYCONTROLLER_H
#define GROCERYCONTROLLER_H
#include "groceryitem.h"
class GroceryController
{
private:
    GroceryController();
    static GroceryController* INSTANCE;
    QList<GroceryItem*> groceryList;
    void init();
    QList<int> toList(QString grocery);
public:
   static GroceryController* getInstance();
   void addGrocery(int id_g,QString name,int quantity,int file_write);
   void removeGrocery(int id);
   QList<GroceryItem*> getGroceryList();
   QStringList getGroceryListAsString();
   void printGrocery();
   void updateGroceryItem(int id , int quantity);
   void reGenerateId();
};

#endif // GROCERYCONTROLLER_H
