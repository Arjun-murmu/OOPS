#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number to sum of even and odd numbers : ";
    cin >> num;

    int even_sum = 0, odd_sum = 0;
    for(int i = 0;i <= num;i++){
        if(i % 2 == 0){
            even_sum += i; // Add to even sum
        } else {
            odd_sum += i; // Add to odd sum
        }
    }
    cout << "The sum of even numbers from 0 to " << num << " is: " << even_sum << endl;
    cout << "The sum of odd numbers from 0 to " << num << " is: " << odd_sum << endl;
    return 0;
}