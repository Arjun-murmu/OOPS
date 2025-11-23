#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};

int main(){
    Node* head = new Node();
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 10;
    first->data = 20;
    second->data = 30;
    third->data = 40;
    
    head->next = first;
    first->next = second;
    second->next = third;
    third->next = head;  // circular link

    cout<<"RUN 1 : ";
    Node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    while(temp != head);
    
    cout<<"\n";
    cout<<"RUN 2 : ";
    Node* temp2 = third;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    while(temp != head);
    return 0;

}