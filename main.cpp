#include <iostream>

int main()
{
    int var = 8;
    int* ptr = &var; // (type)* => pointer. A pointer is a integer which hold the memory address of an value;
                    // &(type) => get pointer of a value;
    *ptr = 10;      // *pointer => get actual value stored in that memory address which pointer is pointing.
                    // type of pointer is actually says nothing about pointer's type. A pointer will always be an integer.
                    // we are using that type to tell the compiler how many bytes should a value take.
                    // so we can re assign or modify a pointers value. For example if I didn't write int* in the example 
                    // how can we re assign it. 
    std::cout << var << std::endl;
    
}