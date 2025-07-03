#include <iostream>
using namespace std;

int main() {
    int *p = new int;   // allocate memory
    *p = 10;            // assign value
    cout << "Address: " << p << endl;
    cout << "Value: " << *p << endl;

    //delete p;           // free memory
    int *a = new int;
    *a = 20;
    cout<<"Value  : "<<*p<<endl;
    cout<<"Address : "<<a<<endl;
    cout<<"Value : "<<*a<<endl;

    //delete a;

    int *x = new int;
    *x = 20;
    cout<<"Value  : "<<*p<<endl;
    cout<<"Address : "<<x<<endl;
    cout<<"Value : "<<*x<<endl;
    //delete x;
    return 0;
}
