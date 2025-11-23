#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    // Pointer to the previous node
    struct Node* prev;
};

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 10;
    second->data = 20;
    third->data = 30;

    head->next = second;
    second->next = third;
    third->next = NULL;

    third->prev = second;
    second->prev = head;
    head->prev = NULL;

    Node* temp = head;
    Node* temp2 = third;
    while(temp != 0){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
    while(temp2 != 0){
        cout<<temp2->data<<" ";
        temp2 = temp2->prev;
    }
    return 0;

}