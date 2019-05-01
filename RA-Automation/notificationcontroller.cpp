#include "notificationcontroller.h"
#include "fileaccess.h"
#include<QStringList>
NotificationController* NotificationController::INSTANCE=0;
//QString NOTIFICATION_FILE = "/Users/balasubramaniang/MS_Assignment/Second_sem/S:w_design/Restaurant_automation/Restaurants-Automation/RA-Automation/Notification.txt";
QString NOTIFICATION_FILE = "/Users/konalesureshs/Desktop/CSUF/Spring 2019/SW Design/CPSC462- Project/CPSC462/Restaurants-Automation/RA-Automation/Notification.txt";
NotificationController::NotificationController()
{
    init();
}

void NotificationController::init()
{
    QStringList wordList;
    FileAccess fileAcess;
    int GROCERY_NOTIFICATION  = 1;
    int ORDER_NOTIFICTION = 2;
   /* wordList = fileAcess.readFromFile(NOTIFICATION_FILE);

    for(int i = 0;i<wordList.size();i++)
    {
        QStringList dataList;
        sendNotification(dataList.at(0));
    }*/

}
NotificationController *NotificationController::getInstance()
{
    if(INSTANCE == NULL)
         INSTANCE = new NotificationController();
     return INSTANCE;
}

void NotificationController::sendNotification(int notification)
{
    for(int i = 0;i<listeners.keys().size();i++)
    {
        if(listeners.keys().at(i) == notification)
        {
           QList<IObserverInterface*> listeners_m = listeners.values(listeners.keys().at(i));
           for(int j = 0;j<listeners_m.size();j++)
           {
               listeners_m.at(j)->receiveNotification(notification);
           }
        }
    }

}
void NotificationController::subscribeForNotification(int subscription_id,IObserverInterface* listener)
{
    listeners.insert(subscription_id,listener);

}
void NotificationController::unsubscribeForNotification(int subscription_id,IObserverInterface* listener)
{
    for(int i = 0;i<listeners.keys().size();i++)
    {
        if(listeners.keys().at(i) == subscription_id)
        {
           QList<IObserverInterface*> listeners_m = listeners.values(subscription_id);
           for(int j = 0;j<listeners_m.size();j++)
           {
               if(listeners_m.at(j) == listener)
                    listeners_m.removeAt(j);
           }
        }
    }
}
