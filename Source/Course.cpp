#include "Course.h"
#include <fstream>

Course::Course()
{

}

Course::Course(const std::string& name)
   :m_courseName(name) {}

void Course::AddStudent(const Student& student)
{
    m_students.push_back(student);
}

const std::vector<Student>& Course::GetStudents() const
{
    return m_students;
}

void Course::Print() const
{
    for(const auto& s : m_students)
    {
        s.PrintInfo();
    }
}

void Course::LoadFromFile(const std::string& fileName)
{
    std::ifstream fin(fileName);
    std::string first, last;
    int id;
    float avg;

    while (fin >> first)
    {
        fin >> last >> id >> avg;
        AddStudent(Student(first, last, id, avg));
    }
}
