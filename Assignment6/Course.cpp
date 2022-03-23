//
// Created by Hunter Bowman on 3/22/22.
//

#include "Course.hpp"

//The following two functions are constructors
Course::Course() {
    courseName = "?";
    numberOfCredits = 0;
    parent = nullptr;
    left = nullptr;
    right = nullptr;
}


Course::Course(string courseName1, int numberOfCredits1) {
    courseName = courseName1;
    numberOfCredits = numberOfCredits1;
    parent = nullptr;
    left = nullptr;
    right = nullptr;
}

//The following functions are accessor functions
Course *Course::getLeft() {
    return left;
}

Course *Course::getRight() {
    return right;
}

Course *Course::getParent() {
    return parent;
}

string Course::getCourseName() {
    return courseName;
}

int Course::getNumberOfCredits() {
    return numberOfCredits;
}


//The following functions are mutator functions
void Course::setLeft(Course *other) {
    left = other;
}

void Course::setRight(Course *other) {
    right = other;
}

void Course::setParent(Course *other) {
    parent = other;
}

//The print method prints the courseName and numberOfCredits
void Course::print() {
    cout << "Course Name: " << courseName;
    cout << ", Credits: " << numberOfCredits << endl << endl;
}

//you can add more functions