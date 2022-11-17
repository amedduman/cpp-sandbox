#include <iostream>

void Increment_using_pointer(int* value)
{
    (*value)++;
}

void Increment_using_ref(int& value) 
{
    value++;
}

// both methods above are actually same. we are using ref instead of pointer since it's essentially a shortcut. 
// instead of passing pointer and de-reference value at pointer and then increment it
// we will pass value by ref so no need to carry about de-referencing or other stuff. concept of references are 
// just something invented to make our lives easier.

int main()
{
    int var = 8;
    Increment_using_pointer(&var);
    Increment_using_ref(var);
    std::cout << var << std::endl;
    
}