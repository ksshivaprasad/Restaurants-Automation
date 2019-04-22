#ifndef REPORTS_H
#define REPORTS_H

#include <QDialog>
#include <qsqldatabase.h>
#include "employees.h"

#include <iostream>
using namespace std;

namespace Ui {
class reports;
}

class reports : public QDialog
{
    Q_OBJECT

public:
    explicit reports(QWidget *parent = 0);
    bool updateEmployees(QString, QString, QString, QString);
    bool retrieveEmployees(vector<employees*> *emp);

    ~reports();

private slots:
    void on_order_clicked();

private:
    Ui::reports *ui;
    QSqlDatabase mydb;
    bool connectDB();
    void close();

};

#endif // REPORTS_H
