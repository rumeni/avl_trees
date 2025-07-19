
#ifndef AVL_TREE_AVL_TREE_H
#define AVL_TREE_AVL_TREE_H

#include <iostream>

using namespace std;

class Node {
public:
    explicit Node(const int m_key) : key(m_key), height(0), left_child(nullptr), right_child(nullptr){}

    int key;
    int height;
    Node* left_child;
    Node* right_child;
};

class AVLTree {
    static int get_height(const Node* node);
    static int get_balance(const Node* node);
};
#endif //AVL_TREE_AVL_TREE_H