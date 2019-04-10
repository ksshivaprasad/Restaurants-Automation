#include "reports.h"
#include "ui_reports.h"
#include <QSqlDatabase>
#include <QtSql>
#include "qmessagebox.h"

extern int admin;

using namespace std;
bool reports::connectDB(){
    QString servername="mac-book-pro";
    QString dbname="RA";
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setConnectOptions();
    QString dsn=QString("DRIVER={SQL Server};SERVER=%1;DATABASE=%2;Trusted_Connection=Yes;").arg(servername).arg(dbname);
    mydb.setDatabaseName(dsn);
        if(mydb.open()){
            cout<<"Connection established"<<endl;
            return true;
        }

        else{
            cout<<"Connection not established"<<endl;
            return false;
        }

return false;
}

reports::reports(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reports)
{
    ui->setupUi(this);
    if(admin == false)
    {
        ui->feedback->setHidden(true);
        ui->menu->setHidden(true);
    }
}

reports::~reports()
{
    delete ui;
}


bool reports::updateEmployees(QString cnic, QString n, QString p, QString a)
{

    if(connectDB()){

          //QSqlQuery query("CREATE TABLE Customer (CNIC varchar(50) not null primary key, Name varchar(50) not null,Phone_no varchar(50),_Type varchar(50))");
          //if(!query.isActive())
              //qWarning() << "ERROR: " << query.lastError().text();


       QSqlQuery query("INSERT INTO Customer (CNIC, Name, Phone_no,_Type) VALUES ('"+cnic+"', '"+n+"', '"+p+"','"+a+"')");
        if(!query.isActive())
            qWarning() << "ERROR: " << query.lastError().text();

        QSqlQuery qry;
        qry.prepare("SELECT * FROM Customer where CNIC='"+cnic+"'");
        qry.exec();
        int count=0;

        while(qry.next()){
            count++;
            //cout<< "String" << qry.value("Name").toString();
            //printf("%s", qry.value("CNIC").toString());
        }
        if(count>0){
            //close();
            return true;
        }

        //close();
    }



    return false;
}

void reports::on_order_clicked()
{
    QString cnic = "4";
    QString n = "shiva";
    QString p = "12341234";
    QString a = "california";

    updateEmployees(cnic, n, p, a);

    ui->textBrowser->setText("ID      Name        Phone       State");
    ui->textBrowser->setText("4       shiva       1234        california");

    QMessageBox msg;
    msg.setText("Report has been generated!");
    msg.exec();
}

bool reports::retrieveEmployees(vector<employees*> *cust)
{
    if(connectDB())
    {
        QSqlQuery qry;
        qry.prepare("Select * from Customer");
        if(qry.exec())
        {
            while(qry.next())
            {
                employees *c=new employees();
                c->setAttributes(qry.value("CNIC").toString(),qry.value("Name").toString(),qry.value("Phone_no").toString(),qry.value("_Type").toString());
                cust->push_back(c);
            }
            return true;
        }

        //ui->textBrowser->setText(c.);

        //close();
    }
    return false;
}



