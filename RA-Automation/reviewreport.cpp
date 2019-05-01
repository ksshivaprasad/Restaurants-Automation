#include "reviewreport.h"
#include "ui_reviewreport.h"

#include <QTextStream>
#include <QFile>

QString REVIEW_FILE_NAME = "/Users/konalesureshs/Desktop/CSUF/Spring 2019/SW Design/CPSC462- Project/CPSC462/Restaurants-Automation/RA-Automation/Feedback.txt";

reviewReport::reviewReport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reviewReport)
{
    ui->setupUi(this);
}

reviewReport::~reviewReport()
{
    delete ui;
}

void reviewReport::on_pushButton_clicked()
{
    readFeedback();
}

void reviewReport::readFeedback()
{
    QFile file(REVIEW_FILE_NAME);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);

    while (!in.atEnd())
    {
        QString line = in.readLine();
        ui->textReport->append(line);
    }

    return;
}
