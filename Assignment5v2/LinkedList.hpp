//
// Created by Hunter Bowman on 2/24/22.
//

// You will develop a C++ program that creates a hash table with chaining,
// using a size that a user enters to store publication information.
// Each publication should have:
// isbn (string such as “0-471-38365-X”),
// title (string, such as “Algorithm Design”),
// publisher (string such as “Prentice Hall”).
// You should make a Publication struct/class to have all these values for each publication.

#ifndef ASSIGNMENT5V2_LINKEDLIST_HPP
#define ASSIGNMENT5V2_LINKEDLIST_HPP

// You also need to define:
// addPublication,
// removePublication,
// searchPublication,
// searchLongestTitle,
// printList

#include <iostream>
#include <string>

struct Node{
    std::string isbn;
    std::string title;
    std::string publisher;
    Node* nextNode = nullptr;
    Node(std::string isbn, std::string title, std::string publisher) {
        this->isbn = isbn;
        this->title = title;
        this->publisher = publisher;
    }
};

class LinkedList {
private:
    Node* firstNode;
    Node* lastNode;

public:
    LinkedList();
    //LinkedList(node* first, node* last) : firstNode(first), lastNode;
    //~LinkedList();

    int removeNode();
    int searchNode();
    int searchLongestTitle();
    int printList();

    int addNode(Node *newNode);
};

#endif //ASSIGNMENT5V2_LINKEDLIST_HPP
