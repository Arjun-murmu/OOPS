#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int d) {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};

// Inorder Traversal (Left, Root, Right)
void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Delete tree (to free memory)
void deleteTree(Node* root) {
    if (root == nullptr) return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

int main() {
    // Initialize and allocate memory for tree nodes
    Node* firstNode = new Node(2);
    Node* secondNode = new Node(3);
    Node* thirdNode = new Node(4);
    Node* fourthNode = new Node(5);

    // Connect binary tree nodes
    firstNode->left = secondNode;
    firstNode->right = thirdNode;
    secondNode->left = fourthNode;

    cout << "Inorder traversal: ";
    inorder(firstNode);
    cout << endl;

    // Free memory
    deleteTree(firstNode);

    return 0;
}
