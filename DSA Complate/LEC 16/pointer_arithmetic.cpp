#include<iostream>
using namespace std;

int main(){
    // int a = 10;
    // int* ptr = &a;
    // cout<<"ptr : "<<ptr <<endl;
    // ptr++;
    // cout<<"ptr : "<<ptr <<endl;
    // ptr++;
    // cout<<"ptr : "<<ptr <<endl;
    // ptr--;
    // cout<<"ptr : "<<ptr <<endl;
    // ptr--;
    // cout<<"ptr : "<<ptr <<endl;

    // cout<<"ptr + 1 : "<<ptr + 1 <<endl;
    // cout<<"ptr + 3 : "<<ptr + 3 <<endl;

    // cout<<"ptr - 1 : "<<ptr - 1 <<endl;
    // cout<<"ptr - 3 : "<<ptr - 3 <<endl;

    //Substraction pointer

    // int *ptr2;
    // int *ptr1 = ptr2 + 2;
    // cout<<"ptr1 : "<<ptr1<<endl;
    // cout<<"ptr2 : "<<ptr2<<endl;
    // cout<<"ptr1 - ptr2 : "<<ptr1 - ptr2<<endl;


    //compare pointer (<,>,<=,>=,==,!=)

    int *ptr3;
    int *ptr4;
    int *ptr5 = ptr4;
    cout<<"ptr3 : "<<ptr3<<endl;
    cout<<"ptr4 : "<<ptr4<<endl;
    cout<<"ptr5 : "<<ptr5<<endl;

    cout<<"ptr3 > ptr4 : "<<(ptr3 > ptr4)<<endl;
    cout<<"ptr3 < ptr4 : "<<(ptr3 < ptr4)<<endl;
    cout<<"ptr3 >= ptr4 : "<<(ptr3 >= ptr4)<<endl;
    cout<<"ptr3 <= ptr4 : "<<(ptr3 <= ptr4)<<endl;
    cout<<"ptr3 == ptr4 : "<<(ptr3 == ptr4)<<endl;
    cout<<"ptr3 != ptr4 : "<<(ptr3 != ptr4)<<endl;

    return 0;
}