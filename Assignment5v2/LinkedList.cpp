//
// Created by Hunter Bowman on 2/24/22.
//

#include "LinkedList.hpp"

LinkedList::LinkedList() {
    this->firstNode = nullptr;
    this->lastNode = nullptr;
}
//LinkedList::~LinkedList() {}

/// This function just appends the new node to the end.
int LinkedList::addNode(Node* newNode) {

    //
    int offTrack = 0;

    // Check if last node really is the last one.
    if (this->lastNode->nextNode == nullptr) {

        std::cout << "Adding new node" << std::endl;
        this->lastNode->nextNode = newNode;
    } else {

        std::cout << "lastNode was't the last one." << std::endl;
        while (this->lastNode->nextNode != nullptr) {
            this->lastNode->nextNode = this->lastNode->nextNode->nextNode;
            offTrack++;
        }
        this->lastNode->nextNode = newNode;
    }

    return 0;
}

int LinkedList::removeNode(Node* nodeToRemove) {

    int count = 0;

    // Start at top of LinkedList
    Node* current = firstNode;

    // Iterate through until we fine the desired node
    while (current != nodeToRemove) {

        // Move onto the next node
        current = current->nextNode;

        // For keeping tracking of total node count
        count++;
    }

    std::cout << "Deleting " << current->title << std::endl;
    current = nullptr;

    return 0;
}

int LinkedList::searchNode() {
    return 0;
}

int LinkedList::searchLongestTitle() {
    return 0;
}

int LinkedList::printList() {
    return 0;
}
