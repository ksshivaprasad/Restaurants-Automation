#ifndef FEEDBACKCONTROLLER_H
#define FEEDBACKCONTROLLER_H

class feedbackController
{

private:
    static feedbackController* INSTANCE;
    feedbackController();

public:
    void init();
    static feedbackController* getInstance();
};

#endif // FEEDBACKCONTROLLER_H



