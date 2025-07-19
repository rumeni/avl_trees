#include "avl_tree.h"

int AVLTree::get_height(const Node* node) { return node != nullptr ? node->height : 0; }
int AVLTree::get_balance(const Node *node) { return node != nullptr ? get_height(node->left_child) - get_height(node->right_child) : 0; }

