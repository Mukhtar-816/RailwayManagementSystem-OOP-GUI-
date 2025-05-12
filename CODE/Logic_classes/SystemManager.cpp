#include "SystemManager.h"
#include <fstream>
#include <chrono>
#include <cstdio>
#include <windows.h>

// ---------------- AuthenticationManager ----------------

bool AuthenticationManager::login(const std::string& username, const std::string& password) {
    if (validateCredentials(username, password)) {
        std::ofstream out("txtFiles/currentuser.txt");
        if (out.is_open()) {
            out << "username : " << username << "\n";
            out.close();
            return true;
        } else {
            return false;
        }
    } else {
        return false ;
    }
}

bool AuthenticationManager::signup(const std::string& username, const std::string& password, const std::string& confirmPassword) {
    if (userExists(username)) {
        return "Error: Username already exists.";
    }

    std::ofstream outFile("txtFiles/user_credentials.txt", std::ios::app);
    if (!outFile.is_open()) {
        return "Error: Unable to open credentials file.";
    }

    outFile << username << " " << password << "\n";
    outFile.close();
    return "Sign-up successful.";
}

bool AuthenticationManager::validateCredentials(const std::string& username, const std::string& password) {
    std::ifstream inFile("txtFiles/user_credentials.txt");
    std::string storedUsername, storedPassword;

    while (inFile >> storedUsername >> storedPassword) {
        if (storedUsername == username && storedPassword == password) {
            return true;
        }
    }

    return false;
}

bool AuthenticationManager::userExists(const std::string& username) {
    std::ifstream inFile("txtFiles/user_credentials.txt");
    std::string storedUsername, storedPassword;

    while (inFile >> storedUsername >> storedPassword) {
        if (storedUsername == username) {
            return true;
        }
    }

    return false;
}

// ---------------- IDGenerator ----------------

IDGenerator::IDGenerator() {
    auto seed = std::chrono::system_clock::now().time_since_epoch().count();
    generator.seed(seed);
}

int IDGenerator::generate(int limitType) {
    return limitType == 3 ? generateInRange(100, 999) : generateInRange(1000, 9999);
}

int IDGenerator::generateInRange(int min, int max) {
    std::uniform_int_distribution<int> dist(min, max);
    return dist(generator);
}

// ---------------- SessionManager ----------------

std::string SessionManager::logout() {
    Sleep(1000);
    if (remove("txtFiles/currentuser.txt") == 0) {
        return "User successfully logged out.";
    } else {
        return "Error: Could not remove session file.";
    }
}
