#include <iostream>
#include "Player.h"

Player::Player(std::string myName, int health) : Entity(myName) {
    Health = health;
}

void Player::ShowMyHealth() {
    std::cout << Health << std::endl;
}