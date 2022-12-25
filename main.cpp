#include <iostream>

void changeNum(int* num)
{
    *num = 5;
}

int main()
{
    int num = 3;
    int* numPtr = &num;
    changeNum(numPtr);
    std::cout << num << std::endl;
}