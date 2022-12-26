#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);

    for (size_t i = 0; i < numbers.size(); ++i)
    {
        if(i == 0)
        {
            std::cout << "number is one" << std::endl;
        }
        std::cout << numbers[i] << std::endl;
    }
    std::cout << "-----------------" << std::endl;
    for (auto a : numbers)
    {
        std::cout << a << std::endl;
    }
}