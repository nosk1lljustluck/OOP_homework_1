#ifndef Student_h
#define Student_h

//#include <bits/stdc++.h>
#include <string>
#include <vector>
#include "Course.h"
using namespace std;
class Course;
class Student{
private:
    int id;
    string name;
    vector<int> enrolledCourses;
    static const int MAX_ALLOWED_CREDITS = 18;
public:
    Student(int id, string name);
    
    int getId();
    string getName();
    vector<int> getEnrolledCourses();
    
    
    bool takesCourse (Course& course);
    bool takeCourse(Course& course);
    void dropCourse(Course& course);
    void printDetails();
    
    
};

#endif
