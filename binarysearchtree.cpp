#include <iostream>
#include "binarysearchtree.h"

using namespace std;


/*
    insertNode
    inserts a new node into a binary search tree
    value: the char to insert
 */
void Binarysearchtree::insertNode(char value) {
    Node *newNode = new Node;
    newNode->value = value;
    newNode->left = newNode->right = nullptr;
    if (root == nullptr) {
        root = newNode;
    }
    else {
        Node *currentNode = root;
        while (currentNode != nullptr) {
            if (newNode->value < currentNode->value) {
                if (currentNode->left == nullptr) {
                    currentNode->left = newNode;
                    currentNode = nullptr;
                }
                else {
                    currentNode = currentNode->left;
                }
            }
            else {
                if (currentNode->right == nullptr) {
                    currentNode->right = newNode;
                    currentNode = nullptr;
                }
                else {
                    currentNode = currentNode->right;
                }
            }
        }
    }
}



// Print using PreOrder Traversal
void Binarysearchtree::printUsingPreOrderTraversal() {
    preOrderTraversal(root);
}



/*
   preOrderTraversal
   recursive method to traverse a binary search tree, pre order
   node: the node used to traverse recursively, starting with root
*/
void Binarysearchtree::preOrderTraversal(Node *node) {
    if (node == nullptr) {
        return;
    }
    cout << node->value << " ";
    preOrderTraversal(node->left);
    preOrderTraversal(node->right);
}



// Print using inOrder Traversal
void Binarysearchtree::printUsingInOrderTraversal() {
    inOrderTraversal(root);
}



/*
   inOrderTraversal
   recursive method to traverse a binary search tree, in order
   node: the node used to traverse recursively, starting with root
*/
void Binarysearchtree::inOrderTraversal(Node *node) {
    if (node == nullptr) {
        return;
    }
    inOrderTraversal(node->left);
    cout << node->value << " ";
    inOrderTraversal(node->right);
}



// Print using postOrder Traversal
void Binarysearchtree::printUsingPostOrderTraversal() {
    postOrderTraversal(root);
}



/*
    postOrderTraversal
    recursive method to traverse a binary search tree, post order
    node: the node used to traverse recursively, starting with root
 */
void Binarysearchtree::postOrderTraversal(Node *node) {
    if (node == nullptr) {
        return;
    }
    postOrderTraversal(node->left);
    postOrderTraversal(node->right);
    cout << node->value << " ";
}



/*  destroySubTree
    recursive method to free memory when program exits
    node: the node used to traverse recursively, starting with root
*/
void Binarysearchtree::destroySubTree(Node *node) {
    if (node == nullptr) {
        return;
    }
    destroySubTree(node->left);
    destroySubTree(node->right);
    delete node;
}
