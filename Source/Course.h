#ifndef CPP_SANDBOX_COURSE_H
#define CPP_SANDBOX_COURSE_H
#include "iostream"
#include "Student.h"
#include "vector"

class Course
{
    std::string m_courseName = "Course";
    std::vector<Student> m_students;
public:
    Course();
    Course(const std::string& name);

    void AddStudent(const Student& student);

    const std::vector<Student>& GetStudents() const;

    void Print() const;

    void LoadFromFile(const std::string& fileName);
};


#endif //CPP_SANDBOX_COURSE_H
