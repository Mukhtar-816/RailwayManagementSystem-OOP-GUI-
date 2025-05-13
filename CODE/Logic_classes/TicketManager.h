#ifndef TICKETMANAGER_H
#define TICKETMANAGER_H

#include <iostream>
#include <vector>
#include <random>
#include "Train.h"

class TicketManager {
public:
    TicketManager();

    std::string bookTicket(int trainNo, const std::string &Name, int seats);
    std::string cancelTicket(int ticketID);
    std::vector<Ticket> getUserBookedTickets();
    std::vector<Train> viewTrains();  

private:
    int generateTicketID();
    std::string getCurrentUsername();
    int getCurrentUserID();

    std::default_random_engine generator;
};

#endif // TICKETMANAGER_H
