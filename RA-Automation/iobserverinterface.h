#ifndef IOBSERVERINTERFACE_H
#define IOBSERVERINTERFACE_H

#include <QObject>

class IObserverInterface : public QObject
{
    Q_OBJECT
public:
    explicit IObserverInterface(QObject *parent = 0);

signals:

public slots:

};

#endif // IOBSERVERINTERFACE_H
