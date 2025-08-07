#include<iostream>
#include<limits.h> // For INT_MAX and INT_MIN
using namespace std;


int main(){
    int num[] = {5, 15,23,1,-12,24,-34};
    int size = sizeof(num) / sizeof(num[0]);
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i<size; i++){
        if(num[i] < smallest){
            smallest = num[i];
        }
        if(num[i] > largest){
            largest = num[i];
        }
    }
    cout << "Smallest number is: " << smallest << endl;
    cout <<" Largest number is: " << largest << endl;

    // or 
    int maximum_num = INT_MIN;
    int minimum_num = INT_MAX;
    for (int i = 0; i < size; i++){
        // Using max and min functions
        // from the <algorithm> header
        maximum_num = max(num[i], maximum_num);
        minimum_num = min(num[i], minimum_num);
    }
    cout << "Smallest number is: " << minimum_num << endl;
    cout << "Largest number is: " << maximum_num << endl;

    // index print maximum and minimum
    int maxIndex = 0, minIndex = 0;
    for (int i = 0; i < size; i++) {
        if (num[i] == maximum_num) {
            maxIndex = i;
        }
        if (num[i] == minimum_num) {
            minIndex = i;
        }
    }
    cout << "Index of largest number: " << maxIndex << endl;
    cout << "Index of smallest number: " << minIndex << endl;

    return 0;
}