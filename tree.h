#ifndef __TREE_H__
#define __TREE_H__

#include <iostream>
#include <vector>

struct Node {
    int val;
    std::vector<Node *> children;
    Node() : val(0) { }
    Node(int val) : val(val) { }
};

class Tree {
private:
    Node *root;
    //Recursive print function. Print the tree with root being the parameter
    void print_(Node *);
    //Convert the tree with root being parameter to string
public:
    Tree() : root(0) { } //Initialize an empty tree
    Tree(int type); //Initialize a hard coded tree
    //The tree will leak but we can't give the destructor since it'll
    //Be in the assignment next week. Just don't make too many trees
    ~Tree() { }
    void print() { print_(root); }
};

//TODO:
// 1. Draw the postorder traversal order on paper and then write the print
//      function to print the tree in postorder
//
// 2. Draw the inorder traversal order on paper and then write the print
//      function to print the tree inorder (remember for trees with children > 2
//      inorder means you visit the left child, yourself, and then the rest of
//      your children from left to right)
//
// 3. Write a member function to Find the height of the tree (number of
//      levels - 1 according to Miller)
//
// 4. Write a member function to find the shortest path to a leaf (the height of
//      the shortest leaf)
//
// 5. Write an avg function to find the mean of all of the values in the tree
//
// 6. Overload the == operator so we can check if two trees are equal. Remember
//      that comparing pointers won't get you anywhere since two trees can be
//      equivalent, but with their data in different places!
//


#endif //__TREE_H__
