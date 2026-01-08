#include<bits/stdc++.h>
using namespace std;

int main(){
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int arr[] = {4,2,5,7,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    // for(int i = 0; i < n; i++){
    //     if(smallest > arr[i]){
    //         smallest = arr[i];
    //     }
    //     if(arr[i] > largest){
    //         largest = arr[i];
    //     }
    // }
    // cout<<"S : "<<smallest<<endl;
    // cout<<"L : "<<largest<<endl;

    // //Second Smallest number
    // int sec_smallest = INT_MAX;
    // int sec_largest = INT_MIN;
    // for(int i = 0; i < n; i++){
    //     if(sec_smallest > arr[i] && smallest != arr[i]){
    //         sec_smallest = arr[i];
    //     }
    //     if(sec_largest < arr[i] && largest != arr[i]){
    //         sec_largest = arr[i];
    //     }
    // }
    
    // cout<<"sec_smallest : "<<sec_smallest<<endl;
    // cout<<"sec_largest : "<<sec_largest<<endl;

    //Reverse array 
    for(int i = 0; i < n/2; i++){
        swap(arr[i], arr[n-i-1]);
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}