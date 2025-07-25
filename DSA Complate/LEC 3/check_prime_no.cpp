#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true; // Assume the number is prime initially
    if(n <= 1){
        isPrime = false; // Numbers less than or equal to 1 are not prime
    } 
    else {
        for(int i = 2; i <= n-1; i++){ // Check divisibility from 2 to sqrt(n)
            if(n % i == 0){
                isPrime = false; // If divisible, it's not prime
                break; // No need to check further
            }
        }
    }
    if(isPrime){
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}