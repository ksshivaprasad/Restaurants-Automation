#ifndef MANAGEMENU_H
#define MANAGEMENU_H

#include <QWidget>
#include <QListWidget>
#include "menucontroller.h"
#include"ui_managemenu.h"
namespace Ui {
class manageMenu;
}

class manageMenu : public QWidget
{
    Q_OBJECT

public:
    explicit manageMenu(QWidget *parent = 0);
    ~manageMenu();
    void populateMenu();

    void init();
public slots:
    void on_removeButton_clicked();

    void on_addButton_clicked();
private:
    Ui::manageMenu *ui;
};

#endif // MANAGEMENU_H
