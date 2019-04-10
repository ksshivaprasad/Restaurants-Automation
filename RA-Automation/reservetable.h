#ifndef RESERVETABLE_H
#define RESERVETABLE_H

#include <QDialog>

namespace Ui {
class reservetable;
}

class reservetable : public QDialog
{
    Q_OBJECT

public:
    explicit reservetable(QWidget *parent = 0);
    ~reservetable();

private:
    Ui::reservetable *ui;
};

#endif // RESERVETABLE_H
