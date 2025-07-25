#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number to calculate its factorial: ";
    cin >> number;
    // int factorial = 1; // Initialize factorial to 1
    unsigned long long factorial = 1;
    for(int i = 1; i <= number; i++){
        factorial *= i; // Multiply factorial by the current number
    }

    cout << "The factorial of " << number <<"! " << " is : " << factorial << endl; // Output the result
    return 0;
}