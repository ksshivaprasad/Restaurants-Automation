#include "employees.h"
#include "ui_employees.h"
#include "reports.h"
#include "qlabel.h"

int admin = true;

employees::employees(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::employees)
{
    ui->setupUi(this);
}

employees::~employees()
{
    delete ui;
}

void employees::on_pushButton_clicked()
{

    if((ui->radioButton_1->isChecked() && ( (ui->lineEdit_1->text().compare("admin") == 0)  && (ui->lineEdit_2->text().compare("admin123") == 0))) ||
            (ui->radioButton_2->isChecked() && (ui->lineEdit_1->text().compare("chef") == 0)  && (ui->lineEdit_2->text().compare("chef123") == 0)))
    {
        this->hide();
        //cout << ui->lineEdit_1->text();
        //cout << ui->lineEdit_2->text();
        if (ui->radioButton_2->isChecked())
        {
            admin = false;
        }

        reports report;
        report.setModal(true);
        report.exec();
    } else
    {
        ui->label_7->setText("Invalid Password! Try again.");
    }
}

void employees::setAttributes(QString cnic,QString n,QString ph,QString addr)
{
CNIC=cnic;
name=n;
phone_no=ph;
address=addr;
}
