#ifndef MANAGEGROCERY_H
#define MANAGEGROCERY_H

#include <QDialog>

namespace Ui {
class manageGrocery;
}

class manageGrocery : public QDialog
{
    Q_OBJECT

public:
    explicit manageGrocery(QWidget *parent = 0);
    ~manageGrocery();

private:
    Ui::manageGrocery *ui;
};

#endif // MANAGEGROCERY_H
