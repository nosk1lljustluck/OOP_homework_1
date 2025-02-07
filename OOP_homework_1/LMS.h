#ifndef LMS_h
#define LMS_h

#include <iostream>
#include <vector>
#include "Student.h"
#include "Course.h"
using namespace std;
class LMS {
private:
    string name;
    vector<Student> students; // List of students
    vector<Course> courses;   // List of courses

public:
    LMS(string name);

    void addStudent(Student& student);
    void addCourse(Course& course);

    bool addStudentToCourse(int studentId, int courseId);

    void printDetails();
};

#endif /* LMS_H */
