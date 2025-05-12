#include "Login.Logic.h"

bool LoginLogic::authenticate(const std::string& username, const std::string& password, bool isAdmin) {
    // Dummy logic — replace with actual file/database check
    if (isAdmin)
        return username == "admin" && password == "admin123";
    else
        return username == "user" && password == "user123";
}
