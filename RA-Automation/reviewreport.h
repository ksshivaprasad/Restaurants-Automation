#ifndef REVIEWREPORT_H
#define REVIEWREPORT_H

#include <QDialog>

namespace Ui {
class reviewReport;
}

class reviewReport : public QDialog
{
    Q_OBJECT

public:
    explicit reviewReport(QWidget *parent = 0);
    void readFeedback();
    ~reviewReport();

private slots:
    void on_pushButton_clicked();

private:
    Ui::reviewReport *ui;
};

#endif // REVIEWREPORT_H
