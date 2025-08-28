#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    cout<<"Address of a : "<<&a<<endl; //0x61ff04
    cout<<"Value of ptr : "<<ptr<<endl; //0x61ff04

    float b = 2.14;
    float *ptr2 = &b; 
    cout<<"Address of b : "<<&b<<endl;  //0x61ff00
    cout<<"Value of ptr2 : "<<ptr2<<endl;  //0x61ff00
    // int *ptr3 = &b;  //Convert error show 


    return 0;
}