#ifndef VIEWORDER_H
#define VIEWORDER_H
#include<QList>
#include <QDialog>
#include "order.h"
namespace Ui {
class viewOrder;
}

class viewOrder : public QDialog
{
    Q_OBJECT

public:
    order* myOrder;

    explicit viewOrder(QWidget *parent = 0);
    ~viewOrder();
    void setOrder(order* nowOrder);
    void init(order* currentOrder);
    void setOrderItems(order* currentOrder);
public slots:
    void on_removeOrderButton_clicked();
    void on_updateOrderButton_clicked();
    void on_submitOrderButton_clicked();
private:
    Ui::viewOrder *ui;
};

#endif // VIEWORDER_H
