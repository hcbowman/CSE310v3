//
// Created by Hunter Bowman on 2/24/22.
//

#include "HashTable.hpp"

HashTable::HashTable() {
    this->hashTable = nullptr;
}

HashTable::HashTable(LinkedList **hashTable) : hashTable(hashTable) {
    this->hashTable = hashTable;
}

HashTable::~HashTable() {

    for (unsigned int i = 0; i < this->hashTableSize; i++) {

        if (hashTable[i] != nullptr) {

            LinkedList* previousList = nullptr;

            LinkedList* currentList = this->hashTable[i];

            while (currentList != nullptr) {

                previousList = currentList;

                currentList = currentList->get_next();

                delete previousList;

            }

        }
    }
    delete[] hashTable;
}
