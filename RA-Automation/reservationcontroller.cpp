#include "reservationcontroller.h"
#include "fileaccess.h"
#include<QDebug>
#include<bitset>

#define BitSet(arg,posn) ((arg) | (1L << (posn)))
#define BitClr(arg,posn) ((arg) & ~(1L << (posn)))
#define BitTst(arg,posn) bool((arg) & (1L << (posn)))

QString TABLE_FILE = "/Users/balasubramaniang/MS_Assignment/Second_sem/S:w_design/Restaurant_automation_1/Restaurants-Automation/RA-Automation/Tables.txt";
ReservationController* ReservationController::INSTANCE=0;
ReservationController::ReservationController()
{
    init();
}

ReservationController* ReservationController::getInstance()
{
    if(INSTANCE == NULL)
         INSTANCE = new ReservationController();
     return INSTANCE;
}
void ReservationController::init()
{
    FileAccess fileAccess;
    qDebug() << "init";
    QStringList wordList;
    wordList = fileAccess.readFromFile(TABLE_FILE);
    free_tables = wordList.at(0).toInt();
    reserved_tables = 0;
    qDebug() << "Number of tables: " <<free_tables;
}
int ReservationController::reserveTable()
{
    FileAccess fileAccess;
    QStringList tableList;
    qDebug() << "Reserve table";
    if(free_tables == 0)
       return 0;
    int pos = 0;
    qDebug() << QString::number( free_tables, 2 );
    while(!BitTst(free_tables,pos))
    {

        ++pos;
    }
    free_tables = BitClr(free_tables,pos);
    tableList.append(QString::number(free_tables));

    qDebug() << "Postion: "<<(pos+1);
    qDebug() << "Number available: " << free_tables;
    fileAccess.writeToFile(TABLE_FILE,tableList);
    return (pos+1);

}
int ReservationController::freeTable(int pos)
{
    FileAccess fileAccess;
    QStringList tableList;
    qDebug() << "Free table";
    if(free_tables == 0)
       return 0;
    //int pos = 0;

    free_tables = BitSet(free_tables,(pos-1));
    qDebug() << QString::number( free_tables, 2 );

    tableList.append(QString::number(free_tables));

    qDebug() << "Postion: "<<(pos-1);
    qDebug() << "Number available: " << free_tables;
    fileAccess.writeToFile(TABLE_FILE,tableList);
    return (pos+1);

}
