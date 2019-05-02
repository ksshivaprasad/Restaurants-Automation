#ifndef VIEWNOTIFICATIONS_H
#define VIEWNOTIFICATIONS_H

#include <QDialog>

namespace Ui {
class viewNotifications;
}

class viewNotifications : public QDialog
{
    Q_OBJECT

public:
    explicit viewNotifications(QWidget *parent = 0);
    ~viewNotifications();

private:
    Ui::viewNotifications *ui;
};

#endif // VIEWNOTIFICATIONS_H
