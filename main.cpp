#include <iostream>
#include <vector>

int main()
{
    std::vector<float> numbers;
    numbers.push_back(1.2f);
    numbers.push_back(2.3f);

    std::cout << "-----------------" << std::endl;
    for (auto& a : numbers)
    {
        std::cout << a << std::endl;
    }
}