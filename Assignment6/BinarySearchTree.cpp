//
// Created by Hunter Bowman on 3/22/22.
//

#include "BinarySearchTree.hpp"

//The constructor initialize the root to be NULL
BinarySearchTree::BinarySearchTree() {
    root = NULL;
}

//The descurtor should delete all nodes in the tree
//and perform garbage collections starting from leaves (bottom-up order).
//The destructor should also print “The number of nodes deleted: X”
//where X is the number of nodes deleted
BinarySearchTree::~BinarySearchTree() {
    //TO BE COMPLETED
    root = deleteNodes(root);
}

int BinarySearchTree::postOrderTreeDelete(Course *) {
    return 0;
}

//Checks if the tree is empty
bool BinarySearchTree::isEmpty() {
    if (root == nullptr)
        return true;
    else
        return false;
}

//prints all nodes using in-order
void BinarySearchTree::inOrderTreePrint() {
    if (isEmpty())
        cout << "tree is empty" << endl;
    else {
        cout << "\n";
        inOrderTreeWalk(root);
        cout << "\n";
    }
}

//prints all nodes using pre-order
void BinarySearchTree::preOrderTreePrint() {
    if (isEmpty())
        cout << "tree is empty" << endl;
    else {
        cout << "\n";
        preOrderTreeWalk(root);
        cout << "\n";
    }
}

//prints all nodes using post-order
void BinarySearchTree::postOrderTreePrint() {
    if (isEmpty())
        cout << "tree is empty" << endl;
    else {
        cout << "\n";
        postOrderTreeWalk(root);
        cout << "\n";
    }
}

///COMPLETE THE REQUIRED FUNCTIONS
void BinarySearchTree::inOrderTreeWalk(Course *course) {
    if (course == nullptr) {
        return;
    }

    // Recur on left child
    inOrderTreeWalk(course->getLeft());

    // Print
    cout << course->getCourseName() << endl;
    cout << course->getNumberOfCredits() << endl;

    // Recur on right child
    inOrderTreeWalk(course->getRight());
}

void BinarySearchTree::preOrderTreeWalk(Course *course) {
    if (course == nullptr) {
        return;
    }

    // Print
    cout << course->getCourseName() << endl;
    cout << course->getNumberOfCredits() << endl;

    // Recur on left subtree
    preOrderTreeWalk(course->getLeft());

    // Recur on right subtree
    preOrderTreeWalk(course->getRight());
}

void BinarySearchTree::postOrderTreeWalk(Course *course) {
    if (course == nullptr) {
        return;
    }

    // Recur on left subtree
    postOrderTreeWalk(course->getLeft());

    // Recur on right subtree
    postOrderTreeWalk(course->getRight());

    // Print
    cout << course->getCourseName() << endl;
    cout << course->getNumberOfCredits() << endl;
}

Course *BinarySearchTree::treeSearchNode(Course *, string, int) {
    return nullptr;
}

Course *BinarySearchTree::treeSearch(string, int) {
    return nullptr;
}

Course *BinarySearchTree::treeMinimum() {
    return nullptr;
}

Course *BinarySearchTree::treeMaximum() {
    return nullptr;
}

Course *BinarySearchTree::treeMinimumNode(Course *) {
    return nullptr;
}

Course *BinarySearchTree::treeMaximumNode(Course *) {
    return nullptr;
}

Course *BinarySearchTree::treeSuccessor(string, int) {
    return nullptr;
}

Course *BinarySearchTree::treePredecessor(string, int) {
    return nullptr;
}

bool BinarySearchTree::treeInsert(string courseName, int numberOfCredits) {

    bool success = false;

    try {
        root = insert(courseName, numberOfCredits, root);
        success = true;
    }
    catch (runtime_error &e) {
        cerr << e.what() << endl;
    }

    return success;
}

bool BinarySearchTree::rightRotate(string, int) {
    return false;
}

bool BinarySearchTree::leftRotate(string, int) {
    return false;
}

Course* BinarySearchTree::insert(string courseName, int numberOfCredits, Course *course) {


    if (course != nullptr) {
        if (numberOfCredits != course->getNumberOfCredits()) {

            if (numberOfCredits < course->getNumberOfCredits()) {
                course->setLeft(insert(courseName, numberOfCredits, course->getLeft()));
            } else if (numberOfCredits > course->getNumberOfCredits()) {
                course->setRight(insert(courseName, numberOfCredits, course->getRight()));
            }

            // DEBUG:
            cout << "DEBUG: Insert() compared by credits" << endl;
        } else {

            if (courseName.compare(course->getCourseName()) < 0) {
                course->setLeft(insert(courseName, numberOfCredits, course->getLeft()));
            } else if (courseName.compare(course->getCourseName()) > 0) {
                course->setRight(insert(courseName, numberOfCredits, course->getRight()));
            }
            // DEBUG:
            cout << "DEBUG: Insert() compared alphabetically" << endl;
        }
    } else {
        course = new Course(courseName, numberOfCredits);
        course->setLeft(nullptr);
        course->setRight(nullptr);
    }

    size++;
    return course;
}

Course* BinarySearchTree::deleteNodes(Course* course) {
    if (course != nullptr) {
        deleteNodes(course->getLeft());
        deleteNodes(course->getRight());
        delete course;
    }
    return nullptr;
}

int height(Course* root){
    if(root== nullptr) return 0;
    return root->weight;
}
Course* rightRotation(Course* root){
    Course* newRoot = root->getLeft();
    root->setLeft(newRoot->getRight());
    newRoot->setRight(root);

   // size = 1 + max(height(root->getLeft()), height(root->getRight()));
    //newRoot->height = 1+max(height(newRoot->left), height(newRoot->getRight()));
    return newRoot;
}

Course* leftRotation(Course* root){
    Course* newhead = root->getRight();
    //root->getRight() = newhead->getLeft();
    //newhead->getLeft = root;
    //root->height = 1 + max(height(root->getLeft()), height(root->getRight()));
    //newhead->height = 1+max(height(newhead->getLeft()), height(newhead->getRight()));
    return newhead;
}
