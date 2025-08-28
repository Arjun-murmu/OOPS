#include<iostream>
using namespace std;

int main(){
    // int a = 10;
    // int* ptr = &a;
    // cout<<"Address of a : "<<&a<<endl; //0x61ff04
    // cout<<"Value of ptr : "<<ptr<<endl;  //0x61ff04

    // int** Pptr = &ptr;
    // cout<<"Address of Pptr : "<<Pptr<<endl;  //0x61ff00
    // cout<<"Address of ptr : "<<&ptr<<endl; // 0x61ff00
    // cout<<"Value of Pptr : "<<*Pptr<<endl; //0x61ff04

    // float b = 2.14;
    // float *ptr2 = &b;
    // cout<<"Address of b : "<<&b<<endl;
    // cout<<"Value of ptr2 : "<<ptr2<<endl;
    
    // float** Poptr = &ptr2;
    // cout<<"Address of Poptr : "<<Poptr<<endl;
    // cout<<"Address of ptr2 : "<<&ptr2<<endl;
    

    //______ Dereference operator *() ___ 

    int c = 10;
    int* ptr = &c;
    int ** point_ptr = &ptr; 
    cout<<"Dereference operator *(&c): "<< *(&c) <<endl;  // 10
    cout<<"Dereference operator *(ptr): "<< *(ptr) <<endl;  // 10

    // // Dereference operator *(&c): 10
    // // Dereference operator *(ptr): 10

    // cout<<"Dereference operator *(&ptr): "<< *(&ptr) <<endl;
    // cout<<"Dereference operator *(point_ptr): "<< *(point_ptr) <<endl;
    // cout<<"Address of (pointer_ptr)  : "<<&point_ptr <<endl;

    // Dereference operator *(&ptr): 0x61ff0c
    // Dereference operator *(point_ptr): 0x61ff0c
    // Address of (pointer_ptr)  : 0x61ff04


    int d = 10;
    int *p = &d;
    int** q = &p;
    cout<<"*P : "<<*p<<endl; 
    cout<<"**q : "<<**q<<endl; 
    cout<<"P: "<<p<<endl;
    cout<<"* q: "<<*q<<endl;
    return 0;
}