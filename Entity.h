#ifndef CPP_SANDBOX_ENTITY_H
#define CPP_SANDBOX_ENTITY_H

#include <iostream>

class Entity{
public:
    std::string name;
    Entity(std::string myName);
    void SayMyName();
};


#endif //CPP_SANDBOX_ENTITY_H
