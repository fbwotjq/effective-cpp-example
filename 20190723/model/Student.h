//
// Created by jaco.ryu on 2019-07-23.
//

#ifndef EXAMPLE_20190723_LINKEDLIST_STUDENT_H
#define EXAMPLE_20190723_LINKEDLIST_STUDENT_H

class Student {
public:
    int id;
    char* name;
    char* dept;
    Student(int i, const char* name, const char* dept);
    void set(int i, char* name, char* dept);
    void display();
};

#endif //EXAMPLE_20190723_LINKEDLIST_STUDENT_H
