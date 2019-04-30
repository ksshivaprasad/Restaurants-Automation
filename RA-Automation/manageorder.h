#ifndef MANAGEORDER_H
#define MANAGEORDER_H

#include <QWidget>
#include "order.h"
#include "viewrecipe.h"
namespace Ui {
class manageOrder;
}

class manageOrder : public QWidget
{
    Q_OBJECT
    order* currentOrder;
    int currentTable;


public:
    explicit manageOrder(QWidget *parent = 0);
    ~manageOrder();

    void init();
    void pupulateMenu();
public slots:
    void on_AddItemButton_clicked();
    void on_viewOrderButton_clicked();
    void on_createOrderButton_clicked();
    void on_reserveTableButton_clicked();
private:
    Ui::manageOrder *ui;
   // viewRecipe viewRecipe_m;
};

#endif // MANAGEORDER_H
