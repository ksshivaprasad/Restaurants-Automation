#ifndef BURGERS_H
#define BURGERS_H

#include <QDialog>

namespace Ui {
class burgers;
}

class burgers : public QDialog
{
    Q_OBJECT

public:
    explicit burgers(QWidget *parent = 0);
    ~burgers();

private:
    Ui::burgers *ui;
};

#endif // BURGERS_H
