#include <iostream>
#include "Entity.h"
#include "Player.h"

int main()
{
    Player p("First Player", 100);
    p.SayMyName();
    p.ShowMyHealth();
}