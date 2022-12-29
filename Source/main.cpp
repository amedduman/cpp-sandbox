#include <iostream>

void pp(int& i)
{
    std::cout << &i << " " << i << " "<< sizeof(i) << std::endl;
}

int main()
{
    int arr[10] = {};
    int* harr = new int[10];

    for(auto& i:arr)
    {
        pp(i);
    }

    std::cout << "-----------------------" << std::endl;

    for(auto i = 0; i < 10; i++)
    {
        pp(harr[i]);
    }
}