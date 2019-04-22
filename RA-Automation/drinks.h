#ifndef DRINKS_H
#define DRINKS_H

#include <QDialog>

namespace Ui {
class drinks;
}

class drinks : public QDialog
{
    Q_OBJECT

public:
    explicit drinks(QWidget *parent = 0);
    ~drinks();

private:
    Ui::drinks *ui;
};

#endif // DRINKS_H
