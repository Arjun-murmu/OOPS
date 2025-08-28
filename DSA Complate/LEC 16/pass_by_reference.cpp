#include<iostream>
using namespace std;

void changA(int a){ // pass by value
    a = 20;
}

void changB(int *ptr){ // pass by reference using pointer
    *ptr = 30;
}

void changC(int &a){ // pass by reference using reference variable
    a = 40;
}

int changD(int a){ // pass by value
    a = 20;
    return a;
}

int main(){
  int a = 10;
  changA(a);
  cout<<"a :"<<a<<endl; // 10

  /*
  int c = changA(a);
  cout<<"c :"<<c<<endl; // 10

  this part show error because changA() is a void function and does not return a value
  */

  int b = changD(a);
  cout<<"b :"<<b<<endl; // 20 (pass by value)

  changB(&a);
  cout<<"a :"<<a<<endl; // 30 (pass by reference using pointer)

  changC(a);
  cout<<"a :"<<a<<endl; // 40 (pass by reference using reference variable)

    return 0;
}