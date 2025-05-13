#include "SystemManager.h"
#include <fstream>
#include <chrono>
#include <cstdio>
#include <windows.h>


AuthenticationManager::AuthenticationManager()
{
    auto seed = std::chrono::system_clock::now().time_since_epoch().count();
    generator.seed(seed);
}


// ---------------- AuthenticationManager ----------------

std::string AuthenticationManager::login(const std::string& username, const std::string& password) {
    std::ifstream inFile("Database/user_credentials.txt");
    if (!inFile.is_open()) {
        return "Error: Unable to open credentials file.";
    }

    std::string line, userID, fileUsername, filePassword;
    while (std::getline(inFile, line)) {
        if (line.find("userID : ") == 0) {
            userID = line.substr(9);
        } else if (line.find("username : ") == 0) {
            fileUsername = line.substr(11);
        } else if (line.find("password : ") == 0) {
            filePassword = line.substr(11);

            if (fileUsername == username && filePassword == password) {
                std::ofstream out("Database/currentuser.txt");
                if (out.is_open()) {
                    out << "userID : " << userID << "\n";
                    out << "username : " << fileUsername << "\n";
                    out.close();
                    return "Success";
                } else {
                    return "Error: Unable to open currentuser.txt";
                }
            }
        }
    }

    return "Invalid Credentials";
}


std::string AuthenticationManager::signup(const std::string& username, const std::string& password, const std::string& confirmPassword) {
    if (userExists(username)) {
        return "Error: Username already exists.";
    }

    if (password != confirmPassword) {
        return "Error: Passwords do not match.";
    }

    std::ofstream outFile("Database/user_credentials.txt", std::ios::app);
    if (!outFile.is_open()) {
        return "Error: Unable to open credentials file.";
    }

    int userID = generateID();

    outFile << "userID : " << userID << "\n";
    outFile << "username : " << username << "\n";
    outFile << "password : " << password << "\n";

    outFile.close();
    return "Success";
}


bool AuthenticationManager::validateCredentials(const std::string& username, const std::string& password) {
    std::ifstream inFile("Database/user_credentials.txt");
    if (!inFile.is_open()) {
        return false;
    }

    std::string line;
    std::string fileUsername, filePassword;

    while (std::getline(inFile, line)) {
        if (line.find("username : ") == 0) {
            fileUsername = line.substr(11);
        } else if (line.find("password : ") == 0) {
            filePassword = line.substr(11);
            if (fileUsername == username && filePassword == password) {
                return true;
            }
        }
    }

    return false;
}


bool AuthenticationManager::userExists(const std::string& username) {
    std::ifstream inFile("Database/user_credentials.txt");
    std::string storedUsername, storedPassword;

    while (inFile >> storedUsername >> storedPassword) {
        if (storedUsername == username) {
            return true;
        }
    }

    return false;
}

// ---------------- IDGenerator ----------------

int AuthenticationManager::generateID()
{
    std::uniform_int_distribution<int> dist(1000, 9999);
    return dist(generator);
}

// ---------------- SessionManager ----------------

bool SessionManager::logout() {
    Sleep(800);
    if (remove("Database/currentuser.txt") == 0) {
        return true;
    } else {
        return false;
    }
}
