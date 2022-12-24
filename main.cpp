#include <iostream>
#include "Entity.h"
#include "Player.h"

int main()
{
    Entity e(0, 0);

    e.Move(3,5);

    std::cout << e.X << " " << e.Y << std::endl;

    Player p(1,1);

    p.Move(1,1);

    std::cout <<p.X << " " << p.Y << std::endl;
}