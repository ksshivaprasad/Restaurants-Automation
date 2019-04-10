#include "feedback.h"
#include "ui_feedback.h"

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
        if( (ui->lineEdit_1->text().compare(" ") != 0) && (ui->lineEdit_2->text().compare(" ") != 0))
        {
            cout << "data entered" << ui->spinBox->value() << "\n";
        }
}
