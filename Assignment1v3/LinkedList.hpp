//
// Created by Hunter Bowman on 1/15/22.
//

#ifndef ASSIGNMENT1V3_LINKEDLIST_HPP
#define ASSIGNMENT1V3_LINKEDLIST_HPP


#include <iostream> //to use cout
#include <iomanip> //to format output
#include <string> //to use strings

using namespace std;

// Struct Course represents some course information
struct Course {
    string courseName;
    int numberOfCredits;
    struct Course * next;
};


// Class LinkedList will contain a linked list of courses
class LinkedList {

private:
    struct Course* head;

public:
    LinkedList();
    ~LinkedList();

    bool addCourse(string courseName, int numberOfCredits);
    bool removeCourse(string courseName);
    int searchCourse(string courseName);
    void printList();

};


#endif //ASSIGNMENT1V3_LINKEDLIST_HPP
