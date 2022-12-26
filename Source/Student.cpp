#include "Student.h"
#include "string"

Student::Student() {}

Student::Student(std::string name, std::string last, int id, float avg)
    : m_firstName(name)
    , m_lastName(last)
    ,m_id(id)
    ,m_avg(avg) {}

std::string Student::GetFirstName()
{
    return m_firstName;
}

std::string Student::GetLastName()
{
    return m_lastName;
}

int Student::GetId()
{
    return m_id;
}

float Student::GetAvg()
{
    return m_avg;
}

void Student::PrintInfo()
{
    std::cout << "First Name: " << m_firstName  << std::endl;
    std::cout << "Last Name: " << m_lastName << std::endl;
    std::cout << "ID: " << m_id << std::endl;
    std::cout << "Avg: " << m_avg << std::endl;
    std::cout << "-----------------------------" << std::endl;
}
