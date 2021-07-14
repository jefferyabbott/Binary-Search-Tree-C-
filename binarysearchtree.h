#ifndef binarysearchtree_h
#define binarysearchtree_h

class Binarysearchtree {
    
private:
    struct Node {
        char value;
        Node *left;
        Node *right;
    };
    
    Node *root;
    void inOrderTraversal(Node *);
    void preOrderTraversal(Node *);
    void postOrderTraversal(Node *);
    void destroySubTree(Node *);
    
public:
    Binarysearchtree() { root = nullptr; }
    ~Binarysearchtree() { destroySubTree(root); }
    void insertNode(char);
    void printUsingPreOrderTraversal();
    void printUsingInOrderTraversal();
    void printUsingPostOrderTraversal();
};

#endif /* binarysearchtree_h */
