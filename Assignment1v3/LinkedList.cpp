//
// Created by Hunter Bowman on 1/15/22.
//

#include "LinkedList.hpp"

LinkedList::LinkedList() {
    head = NULL;
}

LinkedList::~LinkedList() {
    //Course* current = head;
    //Course* next = head->next;
    Course* newHead;

    while (head != NULL) {
        newHead = head->next;
        delete this->head;
        this->head = newHead;
    }
}

//Description: .... to be completed
bool LinkedList::addCourse(string newCourseName, int newNumberOfCredits)
{
    Course newCourse = Course();
    newCourse.courseName = newCourseName;
    newCourse.numberOfCredits = newNumberOfCredits;

    Course* current = head;
    Course* next = head->next;

    while (current != NULL) {
        next = current->next;
        current = next;
    }

    return true;
}

//Description: .... to be completed
bool LinkedList::removeCourse(string courseName)
{
    //To be completed
    return true;
}

//Description: .... to be completed
int LinkedList::searchCourse(string courseName)
{
    //To be completed
    return 0;
}

//Description: .... to be completed
void LinkedList::printList()
{
    //To be completed
}