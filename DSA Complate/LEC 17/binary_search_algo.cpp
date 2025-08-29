#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr,int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = 0;
    while(start <= end){
        // mid = (start + end)/2;
         mid = start + (end - start)/2;
        if(target > arr[mid]){
            start = mid+1;
        }
        else if(target < arr[mid]){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;  // if element not found
}

int main(){
    vector<int> arr1 = {-1,0,3,4,5,9,12};  //odd
    int target1 = 12;
    cout<<"The target element index is : "<<binarySearch(arr1, target1) << endl;

    vector<int> arr2 = {-1,0,3,5,9,12}; // even
    int target2 = 2;
    cout<<"The target element index is : "<<binarySearch(arr2, target2) << endl;

    vector<int> arr3 = {-1,0,3,5,9,12}; // even
    int target3 = 0;
    cout<<"The target element index is : "<<binarySearch(arr3, target3) << endl;

    return 0;
}