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
    explicit viewRecipe(QWidget *parent = 0);
    ~viewRecipe();

private:
    Ui::viewRecipe *ui;
};

#endif // VIEWRECIPE_H
