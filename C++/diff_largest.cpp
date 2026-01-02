#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int second_largest(int arr[],int n, int k = 3){
    int largest = -1, second_largest = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    
    for(int i = 0; i < n; i++){
        while(k > 0){
            if(arr[i] > largest){
            largest = arr[i];
        }
        if(arr[i] > second_largest && largest != arr[i]){
            second_largest = arr[i];
        }
          k--;
    }
    }
  
    return second_largest;
}

int findKthLargest(int arr[], int n, int k) {
    for(int i = 1; i <= k; i++){
        int maxIndex = 0;
    
    for(int j = 1; j < n; j++){
        if(arr[j] > arr[maxIndex]){
            maxIndex = j;
        }
    }
    if(i == k){
        return arr[maxIndex];
    }
        arr[maxIndex] = INT_MIN;
    }
    return -1;

}


int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter a arr : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int k = 4;
    //  int result = second_largest(arr, n);
    // if (result == -1)
    //     cout << "Second largest element does not exist";
    // else
    //     cout << "Second largest element is: " << result;

    cout <<"The "<<k<<" Largest : "<<findKthLargest(arr, n, k);

    return 0;
}
    