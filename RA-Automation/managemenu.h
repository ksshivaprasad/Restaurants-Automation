#ifndef MANAGEMENU_H
#define MANAGEMENU_H

#include <QDialog>

namespace Ui {
class manageMenu;
}

class manageMenu : public QDialog
{
    Q_OBJECT

public:
    explicit manageMenu(QWidget *parent = 0);
    ~manageMenu();

private:
    Ui::manageMenu *ui;
};

#endif // MANAGEMENU_H
