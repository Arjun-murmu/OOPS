#include<iostream>
using namespace std;

// Structure to represent the 
// singly linked list
struct Node{
    // Data field - can be of 
    // any type and count
    int data;

    // Pointer to the next node
    struct Node* next;
};
int main(){
    // Allocate nodes in heap memory
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Assign data
    head->data = 12;
    second->data = 13;
    third->data = 14;

     // Connect nodes
    head->next = second;
    second->next = third;
    third->next = NULL;


     // Print the list
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        cout<<temp->next<<" ";
        temp = temp->next;
    }
    return 0;


}