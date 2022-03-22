// Assignment #6
// Name:
// ASU Email Address:
// Description: To be completed

#ifndef ASSIGNMENT6_COURSE_HPP
#define ASSIGNMENT6_COURSE_HPP

#include <iostream> //to use cout
#include <string> //to use strings
#include <cstdlib> //to use atoi

using namespace std;

//Course represents some course information
class Course {
private:
    string courseName;
    int numberOfCredits;
    Course * left, * right, * parent;

public:

    Course();
    Course(string courseName1, int numberOfCredits1);

    Course *getLeft();
    Course *getRight();
    Course *getParent();
    string getCourseName();
    int getNumberOfCredits();
    void setLeft(Course *other);
    void setRight(Course *other);
    void setParent(Course *other);
    void print();
};


#endif //ASSIGNMENT6_COURSE_HPP
