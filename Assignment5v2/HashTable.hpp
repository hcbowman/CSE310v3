//
// Created by Hunter Bowman on 2/24/22.
//

#ifndef ASSIGNMENT5V2_HASHTABLE_HPP
#define ASSIGNMENT5V2_HASHTABLE_HPP

#include "LinkedList.hpp"

class HashTable {

private:
    // Hash table, array of pointers to struc hach_table_entry
    //hash_entry** the_table;
    LinkedList** hashTable;
    int hashTableSize;

public:
    HashTable();
    HashTable(LinkedList **hashTable);
    //HashTable(int arg_count, char** arg_var);
    ~HashTable();


    int hash();
    void insert(annual_storms as_array[], int index);
    int search();
    void deleteItem();
    int longestTitle();
    void print();

};


#endif //ASSIGNMENT5V2_HASHTABLE_HPP
