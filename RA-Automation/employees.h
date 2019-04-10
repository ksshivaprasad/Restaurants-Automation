#ifndef EMPLOYEES_H
#define EMPLOYEES_H

#include <QDialog>

#include <iostream>
using namespace std;

namespace Ui {
class employees;
}

class employees : public QDialog
{
    Q_OBJECT

public:
    explicit employees(QWidget *parent = 0);
    void setAttributes(QString,QString,QString,QString);

    ~employees();

private slots:
    void on_pushButton_clicked();

private:
    Ui::employees *ui;

    QString CNIC;
    QString name;
    QString address;
    QString phone_no;
    QString _Type;

};

#endif // EMPLOYEES_H
