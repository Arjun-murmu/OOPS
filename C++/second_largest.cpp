#include<iostream>
using namespace std;

int second_largest(int arr[],int n){
    int largest = -1, second_largest = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > second_largest && largest != arr[i]){
            second_largest = arr[i];
        }
    }
    return second_largest;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter a arr : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

     int result = second_largest(arr, n);
    if (result == -1)
        cout << "Second largest element does not exist";
    else
        cout << "Second largest element is: " << result;
    return 0;
}
    