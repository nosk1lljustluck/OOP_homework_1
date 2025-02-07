#include "Course.h"
using namespace  std;
Course::Course(int id, string name, int credits){
    this->id = id;
    this->name = name;
    this->credits = credits;
}

int Course::getId() {
    return id;
}

string Course::getName() {
    return name;
}

int Course::getCredits() {
    return credits;
}

bool Course::addStudent(int studentId) {
    if (!hasStudent(studentId)) {
        students.push_back(studentId);
        return true;
    }
    return false;
}
bool Course::hasStudent(int studentId) {
    return find(students.begin(), students.end(), studentId) != students.end();
}

void Course::dropStudent(Student& student) {
    for (int i = 0; i < students.size(); i++) {
        if (students[i] == student.getId()) {
            students.erase(students.begin() + i);
        }
    }
}

void Course::printDetails() {
    cout << "Course ID: " << id << ", Name: " << name
              << ", Credits: " << credits << endl << "Enrolled Students: ";
    for (int studentId : students) {
        cout << studentId << " ";
    }
    cout << endl;
}


