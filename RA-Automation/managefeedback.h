#ifndef FEEDBACK_H
#define FEEDBACK_H

#include <QDialog>
#include <iostream>
using namespace std;

namespace Ui {
class Feedback;
}

class Feedback : public QDialog
{
    Q_OBJECT

public:
    explicit Feedback(QWidget *parent = 0);
    void  readFeedback();
    ~Feedback();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Feedback *ui;
};

#endif // FEEDBACK_H
