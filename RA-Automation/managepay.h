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

private slots:
    void init();

    void on_makePaymentButton_clicked();

    void on_SubmitButton_clicked();

private:
    Ui::managePay *ui;
    int submit = false;
};

#endif // MANAGEPAY_H
