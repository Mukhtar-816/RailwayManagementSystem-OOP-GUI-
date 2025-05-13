#ifndef SYSTEMMANAGER_H
#define SYSTEMMANAGER_H

#include <string>
#include <random>
#include "Train.h"

class AuthenticationManager
{
public:
    AuthenticationManager();
    std::string login(const std::string &username, const std::string &password);
    std::string signup(const std::string &username, const std::string &password, const std::string &confirmPassword);

private:
    bool validateCredentials(const std::string &username, const std::string &password);
    bool userExists(const std::string &username);
    int generateID();

    std::default_random_engine generator;
};

class SessionManager
{
public:
    // Ends the current session by deleting the session file
    bool logout();
};

#endif // SYSTEMMANAGER_H
