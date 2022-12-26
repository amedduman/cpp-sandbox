#include <iostream>
#include <vector>
#include "Student.h"
#include "Course.h"

int main()
{
    Course c;
    c.LoadFromFile("students.txt");
    c.Print();
}