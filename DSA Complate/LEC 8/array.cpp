#include<iostream>
using namespace std;

int main(){
    // int arr[5] = {1, 2, 3, 4, 5};
    // cout<< "Size of array : "<<sizeof(arr) << endl;
    // cout<< "Size of each element : "<<sizeof(arr[0]) <<" bits"<<endl;
    // cout<< "Number of elements in array : "<<sizeof(arr)/sizeof(arr[0]) << endl;

    int arr[] = {1, 2, 3, 4, 5,9,8,7};
    cout << "Size of array : " << sizeof(arr) <<" bits"<< endl;
    cout<<"Size of each element :  "<<sizeof(arr)/sizeof(int) <<" byte"<<endl;
    cout<<"*note : each 1 byte = 4 bits in integer array"<<endl;
    cout<<"Then the size of array is : "<<sizeof(arr)/sizeof(int) <<" elements"<<endl;
    cout<<"last element of array is : "<<arr[sizeof(arr)/sizeof(int)-1]<<endl;
    return 0;
}