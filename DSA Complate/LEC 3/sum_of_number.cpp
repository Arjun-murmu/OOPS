#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0; // Initialize sum to 0

    for (int i = 0;i<=n;i++){
        sum += i; // Calculate the sum of numbers from 0 to n
    }
    cout<< "The sum of numbers from 0 to " << n << " is: " << sum << endl; // Output the result
    return 0;

}