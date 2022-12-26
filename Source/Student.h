#ifndef CPP_SANDBOX_STUDENT_H
#define CPP_SANDBOX_STUDENT_H
#include <iostream>

class Student
{
private:
    std::string m_firstName = "first";
    std::string m_lastName = "last";
    int m_id = 0;
    float m_avg = 0;
public:
    Student();
    Student(std::string name, std::string last, int id, float avg);

    std::string GetFirstName();
    std::string GetLastName();
    int GetId();
    float GetAvg();

    void PrintInfo();
};


#endif //CPP_SANDBOX_STUDENT_H
