#ifndef MANAGERECIPE_H
#define MANAGERECIPE_H

#include <QDialog>

namespace Ui {
class manageRecipe;
}

class manageRecipe : public QDialog
{
    Q_OBJECT

public:
    explicit manageRecipe(QWidget *parent = 0);
    ~manageRecipe();

private:
    Ui::manageRecipe *ui;
};

#endif // MANAGERECIPE_H
