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
    void pupulateGrocery();
    QList<int> getGroceryList();
    void init();

public slots:
    void on_removeGroceryButton_clicked();

    void on_addGroceryButton_clicked();

private:
    Ui::manageGrocery *ui;
};

#endif // MANAGEGROCERY_H
