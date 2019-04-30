#ifndef NOTIFICATIONCONTROLLER_H
#define NOTIFICATIONCONTROLLER_H
#include<QString>
#include<QList>
#include<QMap>
#include "iobserverinterface.h"

class NotificationController
{
private:
    QList<int> notificationList;
    QMap<int, IObserverInterface*> listeners;
    NotificationController();
    int GROCERY_NOTIFICATION = 1;
    int ORDER_NOTIFICATION = 2;
    void init();
    static NotificationController* INSTANCE;

public:
    static NotificationController* getInstance();
    void sendNotification(int notification);
    void subscribeForNotification(int subscription_id ,IObserverInterface* listener);
    void unsubscribeForNotification(int subscription_id,IObserverInterface* listener);
};

#endif // NOTIFICATIONCONTROLLER_H
