#ifndef IOBSERVERINTERFACE_H
#define IOBSERVERINTERFACE_H

#include <QObject>
#include <QtPlugin>

class IObserverInterface
{

public:
   virtual void receiveNotification(int event)=0;

};

#define IObserverInterface_iid "com.swd.IObserverInterface"

Q_DECLARE_INTERFACE(IObserverInterface, IObserverInterface_iid)
#endif // IOBSERVERINTERFACE_H
