#include<iostream>

using namespace std;

int main(){
    int a = 10;
    cout << "Value of "<<a << " and the address is : " << &a <<endl;  //0x61ff0c
    char ch = 'a';
    cout << "The Charater of ch : "<<ch << " Address is : "<< &ch <<endl;

    return 0;
}