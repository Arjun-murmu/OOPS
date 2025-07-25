#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin >> n;

    // Ternary Operator in C++
    // syntax: condition ? expression_if_true : expression_if_false;

   cout<< ((n % 2 == 0) ? "The number is even." : "The number is odd.")<<endl;
   
    return 0;
}