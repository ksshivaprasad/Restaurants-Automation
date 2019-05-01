#include "feedbackcontroller.h"
#include <QString>
#include <QList>
#include <QDebug>

feedbackController* feedbackController::INSTANCE=0;

feedbackController::feedbackController()
{
    //init();
}


feedbackController* feedbackController::getInstance()
{
    if(INSTANCE == NULL)
         INSTANCE = new feedbackController();
     return INSTANCE;
}

void feedbackController::init()
{

}

