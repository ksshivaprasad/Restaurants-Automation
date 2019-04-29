#ifndef VIEWORDER_H
#define VIEWORDER_H

#include <QDialog>

namespace Ui {
class viewOrder;
}

class viewOrder : public QDialog
{
    Q_OBJECT

public:
    explicit viewOrder(QWidget *parent = 0);
    ~viewOrder();

private:
    Ui::viewOrder *ui;
};

#endif // VIEWORDER_H
