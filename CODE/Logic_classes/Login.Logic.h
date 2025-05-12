#ifndef LOGINLOGIC_H
#define LOGINLOGIC_H

#include <string>

class LoginLogic {
public:
    bool authenticate(const std::string& username, const std::string& password, bool isAdmin);
};

#endif // LOGINLOGIC_H
