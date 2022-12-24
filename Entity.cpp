#include "Entity.h"
#include <iostream>

Entity::Entity(std::string myName) {
    name = myName;
}

void Entity::SayMyName() {
    std::cout << name << std::endl;
}