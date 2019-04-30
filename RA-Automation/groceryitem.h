#ifndef GROCERYITEM_H
#define GROCERYITEM_H
#include<QString>
#include<QList>
#include<QStringList>

class GroceryItem
{
private:
    int id;
    QString name;
    int quantity;

public:
    int getId() const;
    void setId(int value);
    QString getName() const;
    void setName(const QString &value);
    int getQuantity() const;
    void setQuantity(int value);
    QString getGroceryAsString();
    void print();
    GroceryItem();
    GroceryItem(int id);

};

#endif // GROCERYITEM_H
