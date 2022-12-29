#include <iostream>

void pp(int& i)
{
    std::cout << &i << " " << i << " "<< sizeof(i) << std::endl;
}

int main()
{
    int a = 1;
    int b = 2;

    // we modify a without accessing it directly. This is an example why pointers are unsafe.
    *(&b + 1) = 5;

    pp(a);
    pp(b);
}
