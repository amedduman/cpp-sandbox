#include <iostream>

class Entity
{
public:
    int X = 0;
    int Y = 0;

    Entity(int x, int y)
    {
        X = x;
        Y = y;
    }
};

int main()
{
    Entity e(0, 0);

    std::cout << e.X << " " << e.Y << std::endl;
}