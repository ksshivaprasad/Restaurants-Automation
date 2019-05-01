#ifndef VIEWALLORDERS_H
#define VIEWALLORDERS_H

#include <QWidget>

namespace Ui {
class viewAllOrders;
}

class viewAllOrders : public QWidget
{
    Q_OBJECT

public:
    explicit viewAllOrders(QWidget *parent = 0);
    void clearLayout(QLayout *layout);
    ~viewAllOrders();

    void setAllOrders();
public slots:
    void on_prepareOrderButton_clicked();
private:
    Ui::viewAllOrders *ui;
};

#endif // VIEWALLORDERS_H
