#ifndef MANAGEPAY_H
#define MANAGEPAY_H

#include <QDialog>

namespace Ui {
class managePay;
}

class managePay : public QDialog
{
    Q_OBJECT

public:
    explicit managePay(QWidget *parent = 0);
    ~managePay();

private:
    Ui::managePay *ui;
};

#endif // MANAGEPAY_H
