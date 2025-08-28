#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    cout<<"ptr + 1 : "<<*(ptr + 1)<<endl; //2
    cout<<"ptr + 2 : "<<*(ptr + 2)<<endl; //3
    ptr++;
    cout<<"ptr : "<<*ptr<<endl; //2
    return 0;
}