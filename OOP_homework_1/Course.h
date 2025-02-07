#ifndef Course_h
#define Course_h

#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
using namespace std;
class Student;
class Course {
private:
    int id;
    string name;
    int credits;
    vector<int> students;

public:
    Course(int id, string name, int credits);

    int getId();
    string getName();
    int getCredits();

    
    bool hasStudent(int studentId);
    bool addStudent(int studentId);
    void dropStudent(Student& student);

    void printDetails();
};

#endif /* COURSE_H */
