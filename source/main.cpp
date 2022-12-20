#include <iostream>
#include "Entity.h"


int main()
{
    Entity e(0, 0);

	e.Move(3,5);

    std::cout << e.X << " " << e.Y << std::endl;
}