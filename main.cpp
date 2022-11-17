#include <iostream>

class Player
{
public:
    int speed;
    int health;

    void IncreaseHealth(int plusHealth)
    {
        health += plusHealth;
    }
};

int main()
{
    Player player;
    player.speed = 4;
    player.health = 5;
    player.IncreaseHealth(5);
    std::cout << player.health << std::endl; 
}