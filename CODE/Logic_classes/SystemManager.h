#ifndef SYSTEMMANAGER_H
#define SYSTEMMANAGER_H

#include <string>
#include <random>
#include "Train.h"

class AuthenticationManager {
public:
    bool login(const std::string& username, const std::string& password);
    bool signup(const std::string& username, const std::string& password, const std::string& confirmPassword);

private:
    bool validateCredentials(const std::string& username, const std::string& password);
    bool userExists(const std::string& username);
};

class IDGenerator {
public:
    IDGenerator();

    // Generates a random ID: 3-digit if limitType is 3, otherwise 4-digit
    int generate(int limitType);

private:
    int generateInRange(int min, int max);
    std::mt19937 generator;
};

class SessionManager {
public:
    // Ends the current session by deleting the session file
    std::string logout();
};

#endif // SYSTEMMANAGER_H
