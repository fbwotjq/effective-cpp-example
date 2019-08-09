//
// Created by jaco.ryu on 2019-07-23.
//
#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(int i, const char *name, const char *dept) {
    this->id = i;
    this->name = const_cast<char *>(name);
    this->dept = const_cast<char *>(dept);
    display();
}

void Student::set(int i, char *name, char *dept) {
    this->id = i;
    this->name = name;
    this->dept = dept;
}

void Student::display() {
    cout << "id=" << this->id << " name =" << this->name << " dept=" << this->dept << endl;
}
