// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int second_l(int arr[], int n){
    if(n < 2){
        return -1;
    }
    int first = INT_MIN;
    int second = INT_MAX;
    
    for(int i = 0;i < n; i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] < first){
            second = arr[i];
        }
    }
    if(second == INT_MIN){
        return -1;
    }
    return second;
}
int main() {
    // Write C++ code here
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = second_l(arr, n);
    cout<<"ans : "<<result;
    

    return 0;
}
