#include "avl_tree.h"

int AVLTree::get_height(const Node* node) {
    return node != nullptr ? node->height : 0;
}

int AVLTree::get_balance(const Node *node) {
    return node != nullptr ? get_height(node->left_child) - get_height(node->right_child) : 0;
}

Node* AVLTree::left_rotation(Node* y) {
    Node* x = y->right_child;
    Node* a = x->left_child;

    y->right_child = a;
    x->left_child = y;

    y->height = max(get_height(y->left_child), get_height(y->right_child));
    return x;
}

