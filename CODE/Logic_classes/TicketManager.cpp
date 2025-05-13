#include "TicketManager.h"
#include <fstream>
#include <sstream>
#include <chrono>
#include <filesystem>

namespace fs = std::filesystem;

TicketManager::TicketManager()
{
    auto seed = std::chrono::system_clock::now().time_since_epoch().count();
    generator.seed(seed);
}

int TicketManager::generateTicketID()
{
    std::uniform_int_distribution<int> dist(1000, 9999);
    return dist(generator);
}

std::string TicketManager::getCurrentUsername()
{
    std::ifstream userFile("txtFiles/currentuser.txt");
    std::string line, username;
    while (std::getline(userFile, line))
    {
        if (line.find("username : ") != std::string::npos)
        {
            username = line.substr(line.find(":") + 2);
            break;
        }
    }
    return username;
}

int TicketManager::getCurrentUserID()
{
    std::ifstream userFile("txtFiles/currentuser.txt");
    std::string line;
    int id = -1;
    while (std::getline(userFile, line))
    {
        if (line.find("userID : ") != std::string::npos)
        {
            id = std::stoi(line.substr(line.find(":") + 2));
            break;
        }
    }
    return id;
}

std::string TicketManager::bookTicket(int trainNo, const std::string &name, int seats)
{
    std::ifstream trainFile("txtFiles/trains_data.txt");
    if (!trainFile.is_open())
    {
        return "Error: Could not open train data.";
    }

    bool trainExists = false;
    int cost;
    std::string trainLine;
    while (std::getline(trainFile, trainLine))
    {
        if (trainLine.find("TrainNo: " + std::to_string(trainNo)) != std::string::npos)
        {
            trainExists = true;

            // Continue reading the block for this train
            while (std::getline(trainFile, trainLine))
            {
                if (trainLine.find("Cost: ") != std::string::npos)
                {
                    std::string costStr = trainLine.substr(trainLine.find("Cost: ") + 6);
                    cost = std::stoi(costStr);
                    break;
                }
            }

            break; // Exit after finding the train block
        }
    }

    trainFile.close();

    if (!trainExists)
    {
        return "Error: Train number not found.";
    }

    std::string currentUser = getCurrentUsername();
    if (currentUser.empty())
    {
        return "Error: User not logged in.";
    }

    int ticketID = generateTicketID();

    std::ofstream bookingFile("txtFiles/bookings.txt", std::ios::app);
    if (!bookingFile.is_open())
    {
        return "Error: Could not open bookings file.";
    }

    bookingFile << "TicketID: " << ticketID << "\n";
    bookingFile << "Name: " << name << "\n";
    bookingFile << "TrainNo: " << trainNo << "\n";
    bookingFile << "Seats: " << seats << "\n";
    bookingFile << "TotalCost: " << seats * cost << "\n";
    bookingFile << "----------------------\n";
    bookingFile.close();

    return "Train Booked Succesfully." ;
};

std::string TicketManager::cancelTicket(int ticketID)
{
    std::ifstream inFile("txtFiles/bookings.txt");
    std::ofstream outFile("txtFiles/temp_bookings.txt");
    std::ofstream cancelFile("txtFiles/cancelled_tickets.txt", std::ios::app);

    if (!inFile.is_open() || !outFile.is_open() || !cancelFile.is_open())
    {
        return "Error: File operation failed.";
    }

    std::string line;
    bool ticketFound = false;
    bool copyBlock = true;

    while (std::getline(inFile, line))
    {
        if (line.find("TicketID: ") != std::string::npos)
        {
            int currentID = std::stoi(line.substr(10));
            if (currentID == ticketID)
            {
                ticketFound = true;
                copyBlock = false;
                cancelFile << line << "\n";
                continue;
            }
        }

        if (!copyBlock)
        {
            cancelFile << line << "\n";
            if (line == "----------------------")
            {
                copyBlock = true;
                continue;
            }
        }
        else
        {
            outFile << line << "\n";
        }
    }

    inFile.close();
    outFile.close();
    cancelFile.close();

    if (ticketFound)
    {
        fs::remove("txtFiles/bookings.txt");
        fs::rename("txtFiles/temp_bookings.txt", "txtFiles/bookings.txt");
        return "Ticket ID " + std::to_string(ticketID) + " cancelled successfully.";
    }
    else
    {
        fs::remove("txtFiles/temp_bookings.txt");
        return "Ticket not found.";
    }
}

std::vector<Ticket> TicketManager::getUserBookedTickets()
{
    std::ifstream inFile("txtFiles/bookings.txt");
    std::vector<Ticket> tickets;
    std::string line;
    Ticket ticket;

    while (std::getline(inFile, line))
    {
        if (line.find("TicketID: ") == 0)
            ticket.ticketID = std::stoi(line.substr(10));
        else if (line.find("Name: ") == 0)
            ticket.name = line.substr(6);
        else if (line.find("TrainNo: ") == 0)
            ticket.trainNo = std::stoi(line.substr(9));
        else if (line.find("Seats: ") == 0)
            ticket.seats = std::stoi(line.substr(7));
        else if (line.find("TotalCost: ") == 0)
            ticket.totalCost = std::stoi(line.substr(11));
        else if (line == "----------------------")
            tickets.push_back(ticket);
    }

    inFile.close();
    return tickets;
}


std::vector<Train> TicketManager::viewTrains()
{
    std::vector<Train> trains;
    std::ifstream file("txtFiles/trains_data.txt");
    std::string line;

    while (std::getline(file, line))
    {
        if (line.find("TrainNo: ") == std::string::npos)
            continue;

        Train t;
        t.trainNo = std::stoi(line.substr(line.find(":") + 2));

        std::getline(file, line); // Name
        t.name = line.substr(line.find(":") + 2);

        std::getline(file, line); // From
        t.from = line.substr(line.find(":") + 2);

        std::getline(file, line); // To
        t.to = line.substr(line.find(":") + 2);

        std::getline(file, line); // Time
        t.time = line.substr(line.find(":") + 2);

        trains.push_back(t);
    }

    file.close();
    return trains;
}
