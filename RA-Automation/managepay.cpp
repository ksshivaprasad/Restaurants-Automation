#include "managepay.h"
#include "ui_managepay.h"
#include "viewallorders.h"
#include "order.h"
#include "ordercontroller.h"
#include <QMessageBox>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTableWidget>
#include <QtAlgorithms>


managePay::managePay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::managePay)
{
    ui->setupUi(this);
    init();
}

managePay::~managePay()
{
    delete ui;
}

void managePay::on_pushButton_clicked()
{

    if(ui->tableId->text().isEmpty())
    {
        QMessageBox message;
        message.setText("Table ID cannot be empty!");
        message.exec();
    } else
    {
        ui->pushButton_2->setEnabled(true);

        int tablenum = 0;
        tablenum = ui->tableId->text().toInt();
        printf("\n*********shiva: table number - %d*********\n",tablenum);

        QList<order*> submittedOrders = OrderController::getInstance()->getAllSubmittedOrders();
        //QWidget* pMainWidget = new QWidget();
        //QVBoxLayout* pMainLayout = new QVBoxLayout(pMainWidget);
        //qDeleteAll(ui->verticalLayout->children());
        for(int j = 0;j< submittedOrders.size() ;j ++)
        {

            QTableWidget* tableWidget = new QTableWidget();

            QList<orderItem*> orderItems = submittedOrders.at(j)->getOrderItems();

            tableWidget->setRowCount(1);
            tableWidget->setColumnCount(6);
            tableWidget->setItem(0, 0, new QTableWidgetItem(QString::number(submittedOrders.at(j)->getTable_id())));
            tableWidget->setItem(0, 1, new QTableWidgetItem(QString::number(submittedOrders.at(j)->getOrder_id())));

            for(int i =0;i< orderItems.size();i++)
            {
            if(orderItems.at(i) != 0)
            {

                tableWidget->setItem(i, 2,  new QTableWidgetItem(QString::number(orderItems.at(i)->getItem_id())));
                tableWidget->setItem(i, 3, new QTableWidgetItem(orderItems.at(i)->getMenuItem()->getName()));
                tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(orderItems.at(i)->getQuantity())));

                 //Button
                 //QWidget* pWidget = new QWidget();
                 //QPushButton* btn_prepare = new QPushButton();
                 //btn_prepare->setText("Prepare");
                 //btn_prepare->setProperty("Order-id",submittedOrders.at(j)->getOrder_id());
                 //btn_prepare->setProperty("Item-id",orderItems.at(i)->getItem_id());
                 //QObject::connect(btn_prepare, SIGNAL(clicked()),this, SLOT(on_prepareOrderButton_clicked()));


                 //QHBoxLayout* pLayout = new QHBoxLayout(pWidget);
                 //pLayout->addWidget(btn_prepare);
                 //pLayout->setAlignment(Qt::AlignCenter);
                 //pLayout->setContentsMargins(0, 0, 0, 0);
                 //pWidget->setLayout(pLayout);
                 //tableWidget->setCellWidget(i, 5, pWidget);
            }

        }
        ui->verticalLayout->addWidget(tableWidget);
        }

    }
}

void managePay::init()
{
    ui->pushButton_2->setEnabled(false);
}
