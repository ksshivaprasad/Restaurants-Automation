#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "managemenu.h"
#include "managerecipe.h"
#include "managegrocery.h"
#include "manageorder.h"
#include "viewallorders.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


public slots:
    void on_actionViewMenu_triggered();
      void on_actionViewOrder_triggered();
private slots:

    void on_actionGrocery_triggered();

    void on_actionMenu_triggered();

    void on_actionRecipe_triggered();



private:
    Ui::MainWindow *ui;
    manageMenu menu;
    manageRecipe recipe;
    manageGrocery grocery;
    manageOrder menuOrder;
    viewAllOrders viewAllOrders;
};

#endif // MAINWINDOW_H
