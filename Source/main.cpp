#include <iostream>
#include <vector>
#include "Student.h"

int main()
{
    Student s0;
    Student s1 = Student("sam", "kaz", 1, 10);
    std::vector<Student> students;
    students.push_back(s0);
    students.push_back(s1);
    for(auto& student : students)
    {
        student.PrintInfo();
    }
}