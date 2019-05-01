#include "managepay.h"
#include "ui_managepay.h"
#include "viewallorders.h"
#include "order.h"
#include "ordercontroller.h"
#include "orderitem.h"
#include "reservetable.h"
#include "reservationcontroller.h"

#include <QMessageBox>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTableWidget>
#include <QtAlgorithms>
#include <QDebug>

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

void managePay::on_SubmitButton_clicked()
{

    float totalAmount = 0;

    if(ui->tableId->text().isEmpty())
    {
        QMessageBox message;
        message.setText("Table ID cannot be empty!");
        message.exec();
    } else
    {
        ui->makePaymentButton->setEnabled(true);
        clearLayout(ui->verticalLayout);

        int tablenum = 0;
        tablenum = ui->tableId->text().toInt();

        order* myOrder = OrderController::getInstance()->getOrderFRomTableId(tablenum);

        if (myOrder != NULL)
        {
            QList<orderItem*> orderItems = myOrder->getOrderItems();
            int rownum = 0;

            QTableWidget* tableWidget = new QTableWidget();

            tableWidget->setColumnCount(5);
            tableWidget->setColumnWidth(2, 250);
            tableWidget->horizontalHeader()->setStretchLastSection(true);
            tableWidget->setRowCount(orderItems.size());
            tableWidget->setHorizontalHeaderLabels(QStringList() << tr("Table ID") << tr("Order ID") << tr("Name") << tr("Quantity") << tr("Price"));

            for(int j = 0;j< orderItems.size() ;j ++,rownum++)
            {

                tableWidget->setItem(rownum, 0, new QTableWidgetItem(QString::number(tablenum)));

                tableWidget->setItem(rownum, 1, new QTableWidgetItem(QString::number(orderItems.at(j)->getItem_id())));
                tableWidget->setItem(rownum, 2, new QTableWidgetItem(orderItems.at(j)->getMenuItem()->getName()));
                tableWidget->setItem(rownum, 3, new QTableWidgetItem(QString::number(orderItems.at(j)->getQuantity())));
                tableWidget->setItem(rownum, 4, new QTableWidgetItem(QString::number(orderItems.at(j)->getMenuItem()->getPrice()*orderItems.at(j)->getQuantity())));

                totalAmount = totalAmount + (orderItems.at(j)->getMenuItem()->getPrice()*orderItems.at(j)->getQuantity());
                printf("Total Amount %f",totalAmount);

            }

            ui->verticalLayout->addWidget(tableWidget);
            ui->totalAmount->setText(QString::number(totalAmount));
        }
        submit = true;
    }
}

void managePay::init()
{
    ui->makePaymentButton->setEnabled(false);
}

void managePay::on_makePaymentButton_clicked()
{
       int tablenum = ui->tableId->text().toInt();
       qDebug() << tablenum;

       OrderController::getInstance()->removeOrder(tablenum);
       ReservationController::getInstance()->freeTable(tablenum);

}

void managePay::clearLayout(QLayout *layout) {
    QLayoutItem *item;
    while((item = layout->takeAt(0))) {
        if (item->layout()) {
            clearLayout(item->layout());
            delete item->layout();
        }
        if (item->widget()) {
           delete item->widget();
        }
        delete item;
    }
}
