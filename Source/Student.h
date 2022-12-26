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

    std::string GetFirstName() const;
    std::string GetLastName() const;
    int GetId() const;
    float GetAvg() const;

    void PrintInfo() const;
};


#endif //CPP_SANDBOX_STUDENT_H
