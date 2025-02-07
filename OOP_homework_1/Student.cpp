#include "Student.h"
#include "Course.h"
using namespace std;
Student::Student(int id, string name){
    this->id = id;
    this->name = name;
};

int Student::getId() {
    return id;
}
string Student::getName() {
    return name;
}
vector<int> Student::getEnrolledCourses() {
    return enrolledCourses;
}

bool Student::takesCourse(Course& course) {
    for (int courseId : enrolledCourses) {
        if (courseId==course.getId()) return true;
    }
    return false;
}
bool Student::takeCourse(Course& course) {
    if (takesCourse(course)) {
        return false;
    }
    enrolledCourses.push_back(course.getId());
    return true;
}
void Student::dropCourse(Course& course) {
    for (auto it = enrolledCourses.begin(); it != enrolledCourses.end(); ++it) {
        if (*it == course.getId())enrolledCourses.erase(it);
    }
}
void Student::printDetails() {
    cout << "Student ID: " << id << ", Name: " << name << endl;
    cout << "Enrolled Courses: ";
    
    for (int i = 0; i < enrolledCourses.size(); i++) {
        cout << enrolledCourses[i]<<" ";
    }
    cout<<endl;
}
