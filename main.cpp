#include <iostream>

int main()
{
    int a = 8;
    int b = 10;

    int& ref = a;
    ref = b; // you cannot assign a ref to reference another variable.

    //the code above will modify value of a.

    // we will end up with a = 10 b = 10

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    
}