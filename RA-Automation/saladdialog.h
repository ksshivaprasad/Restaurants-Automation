#ifndef SALADDIALOG_H
#define SALADDIALOG_H

#include <QDialog>

namespace Ui {
class SaladDialog;
}

class SaladDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SaladDialog(QWidget *parent = 0);
    ~SaladDialog();

private:
    Ui::SaladDialog *ui;
};

#endif // SALADDIALOG_H
