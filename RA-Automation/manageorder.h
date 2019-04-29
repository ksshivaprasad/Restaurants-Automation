#ifndef MANAGEORDER_H
#define MANAGEORDER_H

#include <QWidget>

namespace Ui {
class manageOrder;
}

class manageOrder : public QWidget
{
    Q_OBJECT

public:
    explicit manageOrder(QWidget *parent = 0);
    ~manageOrder();

private:
    Ui::manageOrder *ui;
};

#endif // MANAGEORDER_H
