#ifndef DESERTS_H
#define DESERTS_H

#include <QDialog>

namespace Ui {
class deserts;
}

class deserts : public QDialog
{
    Q_OBJECT

public:
    explicit deserts(QWidget *parent = 0);
    ~deserts();

private:
    Ui::deserts *ui;
};

#endif // DESERTS_H
