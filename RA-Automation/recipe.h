#ifndef RECIPE_H
#define RECIPE_H
#include<QString>
#include<QList>

class Recipe
{

private:
    int id;
    QString name;
    QString instructions;
    QList<int> groceryList;
    int quantity;

public:
    int getId() const;
    void setId(int value);
    QString getName() const;
    void setName(const QString &value);
    QString getInstructions() const;
    void setInstructions(const QString &value);
    QList<int> getGroceryList() const;
    void setGroceryList(const QList<int> &value);
    int getQuantity() const;
    void setQuantity(int value);
    void prepareRecipe();
    Recipe(int id);
    Recipe();
    void print();


    QString getRecipeAsString();
    QString getGroceryListAsString() const;
};

#endif // RECIPE_H
