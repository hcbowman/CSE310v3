//
// Created by Hunter Bowman on 3/22/22.
//

#ifndef ASSIGNMENT6_BINARYSEARCHTREE_HPP
#define ASSIGNMENT6_BINARYSEARCHTREE_HPP


#include "Course.hpp"

//class BinarySearchTree will contains courses
class BinarySearchTree
{
private:
    Course * root;
    int size;

public:
    BinarySearchTree();
    ~BinarySearchTree();
    int postOrderTreeDelete(Course *);
    bool isEmpty();
    void inOrderTreePrint();
    void preOrderTreePrint();
    void postOrderTreePrint();
    void inOrderTreeWalk(Course *);
    void preOrderTreeWalk(Course *);
    void postOrderTreeWalk(Course *);
    Course * treeSearchNode(Course *, string, int);
    Course * treeSearch(string, int);
    Course * treeMinimum();
    Course * treeMaximum();
    Course * treeMinimumNode(Course *);
    Course * treeMaximumNode(Course *);
    Course * treeSuccessor(string,int);
    Course * treePredecessor(string,int);
    bool treeInsert(string,int);
    bool rightRotate(string, int);
    bool leftRotate(string, int);
};


#endif //ASSIGNMENT6_BINARYSEARCHTREE_HPP
