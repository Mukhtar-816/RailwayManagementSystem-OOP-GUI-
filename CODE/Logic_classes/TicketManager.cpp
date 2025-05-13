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
    std::ifstream userFile("Database/currentuser.txt");
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
    std::ifstream userFile("Database/currentuser.txt");
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
    std::ifstream trainFile("Database/trains_data.txt");
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
    int id = getCurrentUserID();
    std::string path = "Database/Bookings/bookings_" + std::to_string(id) + ".txt";

    std::ofstream bookingFile(path, std::ios::app);
    if (!bookingFile.is_open())
    {
        return "Error: Could not open bookings file.";
    }

    bookingFile << "UserID: " << getCurrentUserID() << "\n";
    bookingFile << "TicketID: " << ticketID << "\n";
    bookingFile << "Name: " << name << "\n";
    bookingFile << "TrainNo: " << trainNo << "\n";
    bookingFile << "Seats: " << seats << "\n";
    bookingFile << "TotalCost: " << seats * cost << "\n";
    bookingFile << "----------------------\n";
    bookingFile.close();

    return "Train Booked Succesfully.";
};

std::string TicketManager::cancelTicket(int ticketID)
{
    int id = getCurrentUserID();
    std::string path1 = "Database/Bookings/bookings_" + std::to_string(id) + ".txt";
    std::string path2 = "Database/Cancellations/cancelled_tickets_" + std::to_string(id) + ".txt";
    std::ifstream inFile(path1);
    std::ofstream outFile("Database/temp_bookings.txt");
    std::ofstream cancelFile(path2, std::ios::app);

    if (!inFile.is_open() || !outFile.is_open() || !cancelFile.is_open())
    {
        return "Error: File operation failed.";
    }

    std::string line;
    bool ticketFound = false;
    bool insideBlock = false;
    bool copyToCancel = false;
    std::vector<std::string> currentBlock;
    int currentUserID = getCurrentUserID();

    while (std::getline(inFile, line))
    {
        if (line.find("UserID: ") == 0)
        {
            currentBlock.clear();
            insideBlock = true;
            copyToCancel = false;
        }

        if (insideBlock)
        {
            currentBlock.push_back(line);

            if (line.find("TicketID: ") == 0)
            {
                int fileTicketID = std::stoi(line.substr(10));

                // Find user ID from current block
                int fileUserID = -1;
                for (const auto &blockLine : currentBlock)
                {
                    if (blockLine.find("UserID: ") == 0)
                    {
                        fileUserID = std::stoi(blockLine.substr(8));
                        break;
                    }
                }

                // Only cancel if userID matches as well
                if (fileTicketID == ticketID && fileUserID == currentUserID)
                {
                    ticketFound = true;
                    copyToCancel = true;
                }
            }

            if (line == "----------------------")
            {
                insideBlock = false;
                if (copyToCancel)
                {
                    for (const std::string &l : currentBlock)
                        cancelFile << l << "\n";
                }
                else
                {
                    for (const std::string &l : currentBlock)
                        outFile << l << "\n";
                }
            }
        }
    }

    inFile.close();
    outFile.close();
    cancelFile.close();

    if (ticketFound)
    {
        fs::remove(path1);
        fs::rename("Database/temp_bookings.txt", path1);
        return "Ticket ID " + std::to_string(ticketID) + " cancelled successfully.";
    }
    else
    {
        fs::remove("Database/temp_bookings.txt");
        return "Ticket not found or does not belong to current user.";
    }
}

std::vector<Ticket> TicketManager::getUserBookedTickets()
{
    int id = getCurrentUserID();
    std::string path = "Database/Bookings/bookings_" + std::to_string(id) + ".txt";
    std::ifstream inFile(path);
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
    std::ifstream file("Database/trains_data.txt");
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
