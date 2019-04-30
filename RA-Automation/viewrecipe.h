#ifndef VIEWRECIPE_H
#define VIEWRECIPE_H

#include <QDialog>

namespace Ui {
class viewRecipe;
}

class viewRecipe : public QDialog
{
    Q_OBJECT

public:
    explicit viewRecipe(QWidget *parent = 0,int id=0);
    ~viewRecipe();

    void setInstructions(int);
    void populateGroceryTable(int);
private:
    Ui::viewRecipe *ui;
};

#endif // VIEWRECIPE_H
