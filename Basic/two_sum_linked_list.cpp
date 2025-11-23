#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution{
    public:
    ListNode* addTwoNum(ListNode* l1, ListNode* l2){
        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;
        int curray = 0;
        while(l1 != nullptr || l2 != nullptr || curray != 0){
            int sum = curray;
            if(l1 != nullptr){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != nullptr){
                sum += l2->val;
                l2 = l2->next;
            }
            curray = sum / 10;
            int digit = sum % 10;
            curr->next = new ListNode(digit);
            curr = curr->next;
        }
        return dummy->next;

    }
};

ListNode* createListFromInput(int n) {
    if (n == 0) return nullptr;

    int value;
    cin >> value;

    ListNode* head = new ListNode(value);
    ListNode* temp = head;

    for (int i = 1; i < n; i++) {
        cin >> value;
        temp->next = new ListNode(value);
        temp = temp->next;
    }
    return head;
}

void printList(ListNode* head) {
    while(head != nullptr){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create first number: 342 (2 → 4 → 3)
    // ListNode* l1 = new ListNode(2);
    // l1->next = new ListNode(4);
    // l1->next->next = new ListNode(3);

    // // Create second number: 465 (5 → 6 → 4)
    // ListNode* l2 = new ListNode(5);
    // l2->next = new ListNode(6);
    // l2->next->next = new ListNode(4);

    // User input 
    int n1, n2;
    cout<<"Enter number of digits in first list: ";
    cin>>n1;
    cout<<"Enter digits : ";
    ListNode* l1 = createListFromInput(n1);

    cout<<"Enter number of digits in first list: ";
    cin>>n2;
    cout<<"Enter digits : ";
    ListNode* l2 = createListFromInput(n2);

    Solution obj;

    // Add the numbers
    ListNode* result = obj.addTwoNum(l1, l2);

    // Print result: 7 0 8
    cout << "Sum list : ";
    printList(result);

    return 0;
}