#include<iostream>
using namespace std;

int main(){
    //do while loop in C++
    //syntax: do { // code to execute } while(condition);
    int n;
    cout << "Enter a number to print natural numbers: ";
    cin >> n;
    int start = 1;
    do {
        cout << start << endl; // Print the current number
        start++; // Increment the number
    } while (start >= n); // Continue until start exceeds n
    return 0;
}