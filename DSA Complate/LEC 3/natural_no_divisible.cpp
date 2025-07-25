#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;

    for(int i = 1; i <= n;i++){
        if(i % 3 == 0){
            sum += i; // Add to sum if divisible by 3
           // cout << i << " is divisible by 3." << endl;
        } 
        else {
           // cout << i << " is not divisible by 3." << endl;
    }
    }
    cout << "The sum of natural numbers from 1 to " << n << " that are divisible by 3 is: " << sum << endl;
    return 0;
}