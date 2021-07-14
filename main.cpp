/*

 Comparing in order, pre order and post order traversals in a Binary Search Tree
 Author: Jeffery Abbott
 Date: June 1, 2020

*/


#include <iostream>
#include "binarysearchtree.h"

using namespace std;

int main() {

    Binarysearchtree tree;
    int menuChoice = 0;
    
    cout << "Create a binary search tree using characters (char)." << endl << endl;

    while (menuChoice != 1 && menuChoice != 2) {
        cout << "1) Use sample data" << endl;
        cout << "2) Enter your own data" << endl;
        cin >> menuChoice;
    }
    
    if (menuChoice == 1) {
        cout << "Displaying results using sample data." << endl;
        tree.insertNode('H');
        tree.insertNode('D');
        tree.insertNode('B');
        tree.insertNode('A');
        tree.insertNode('C');
        tree.insertNode('F');
        tree.insertNode('E');
        tree.insertNode('G');
        tree.insertNode('P');
        tree.insertNode('K');
        tree.insertNode('I');
        tree.insertNode('N');
        tree.insertNode('U');
        tree.insertNode('R');
        tree.insertNode('Y');
    }
    else {
        char userCharacter = '~';
        cout << "Enter your data - (press ESC then ENTER when finished)." << endl;
        while (userCharacter != 27) {
            cout << "Enter char: ";
            cin >> userCharacter;
            if (userCharacter != 27) {
                tree.insertNode(userCharacter);
            }
        }
    }
    

    
    
    cout << endl << "============================================" << endl;
    
    cout << "IN ORDER TRAVERSAL" << endl;
    tree.printUsingInOrderTraversal();
    cout << endl << "============================================" << endl;
    
    
    cout << "PRE ORDER TRAVERSAL" << endl;
    tree.printUsingPreOrderTraversal();
    cout << endl << "============================================" << endl;
    
    cout << "POST ORDER TRAVERSAL" << endl;
    tree.printUsingPostOrderTraversal();
    cout << endl << "============================================" << endl;
    
    
    return 0;
}
