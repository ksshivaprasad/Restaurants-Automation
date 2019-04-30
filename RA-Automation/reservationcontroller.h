#ifndef RESERVATIONCONTROLLER_H
#define RESERVATIONCONTROLLER_H

class ReservationController
{
private:
     static ReservationController* INSTANCE;
     ReservationController();

public:
    static ReservationController* getInstance();
    int free_tables;
    int reserved_tables;
    int reserveTable();
    void init();
    int freeTable(int pos);
};

#endif // RESERVATIONCONTROLLER_H
