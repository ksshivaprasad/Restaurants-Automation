#include "managefeedback.h"
#include "ui_feedback.h"

#include <QFile>
#include <QTextStream>
#include <QDebug>

QString FEEDBACK_FILE_NAME = "/Users/konalesureshs/Desktop/CSUF/Spring 2019/SW Design/CPSC462- Project/CPSC462/Restaurants-Automation/RA-Automation/Feedback.txt";

Feedback::Feedback(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Feedback)
{
    ui->setupUi(this);
}

Feedback::~Feedback()
{
    delete ui;
}

void Feedback::on_pushButton_clicked()
{

        QFile file(FEEDBACK_FILE_NAME);

        if( (ui->lineEdit_1->text().compare(" ") != 0) && (ui->lineEdit_2->text().compare(" ") != 0))
        {
            cout << "data entered" << ui->spinBox->value() << "\n";
        }


        if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
            return;

        QTextStream out(&file);
        out << ui->lineEdit_1->text() << "                  " << ui->spinBox->value() << "                 "<< ui->lineEdit_2->text()<< "\n";
}

void Feedback::readFeedback()
{
    QFile file(FEEDBACK_FILE_NAME);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
    }

    return;
}
