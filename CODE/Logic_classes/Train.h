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

#endif // TRAIN_H