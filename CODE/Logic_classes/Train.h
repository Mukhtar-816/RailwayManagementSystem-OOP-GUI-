#ifndef TRAIN_H
#define TRAIN_H

#include <string>

struct Train {
    int trainNo;
    std::string name;
    std::string from;
    std::string to;
    std::string time;
};

struct Ticket
{
    int ticketID;
    std::string name;
    int trainNo;
    int seats;
    int totalCost;
};


#endif // TRAIN_H