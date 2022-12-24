#ifndef CPP_SANDBOX_PLAYER_H
#define CPP_SANDBOX_PLAYER_H

#include <iostream>
#include "Entity.h"

class Player: public Entity {
public:
    int Health;

    Player(std::string myName, int health);

    void ShowMyHealth();
};


#endif //CPP_SANDBOX_PLAYER_H
