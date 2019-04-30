#ifndef MENUITEM_H
#define MENUITEM_H
#include<QList>
#include<QString>
#include<QStringList>
class MenuItem
{
public:
    MenuItem();
    MenuItem(int id);
    int key;
    QString name;
    QString description;
    int recipe_id;
    float price;

    int getKey() const;
    void setKey(int value);

    QString getName() const;
    void setName(QString value);

    QString getDescription() const;
    void setDescription(QString value);

    int getRecipeId() const;
    void setRecipeId(const int value);

    float getPrice() const;
    void setPrice(float value);

    QString getMenuAsString();
    void Print();
};

#endif // MENUITEM_H
