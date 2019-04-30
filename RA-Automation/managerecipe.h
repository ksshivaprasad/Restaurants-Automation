#ifndef MANAGERECIPE_H
#define MANAGERECIPE_H

#include <QDialog>
#include "viewrecipe.h"

namespace Ui {
class manageRecipe;
}

class manageRecipe : public QDialog
{
    Q_OBJECT

public:
    explicit manageRecipe(QWidget *parent = 0);
    ~manageRecipe();
    void pupulateRecipe();

    void populateGroceryTable();
    QList<int> getGroceryList();
    void init();
    void pupulateGroceryTable();
public slots:
    void on_removeRecipeButton_clicked();

    void on_addRecipe_clicked();
    void on_viewRecipeButton_clicked();

    void cellClicked(int,int);
private:
    Ui::manageRecipe *ui;


};

#endif // MANAGERECIPE_H
