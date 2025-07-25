#include<iostream>
using namespace std;

int main(){
    char name = 'A';
    char name2 = 'Z';
    int value = name;
    int value2 = name2;

    char name3 = 'a';
    char name4 = 'z';
    int value3 = name3;
    int value4 = name4;
    cout << "Character: " << name << endl;
    cout << "Integer value after type casting: " << value << endl;
    cout << "Character: " << name2 << endl;
    cout << "Integer value after type casting: " << value2 << endl;
    cout << "Character: " << name3 << endl;
    cout << "Integer value after type casting: " << value3 << endl;
    cout << "Character: " << name4 << endl;
    cout << "Integer value after type casting: " << value4 << endl;
    return 0;
}

// Type casting is the process of converting a variable from one data type to another
// In C++, type casting can be done using static_cast, dynamic_cast, const_cast,

// type conversion is implicit or explicit
// implicit conversion is done by the compiler automatically
// explicit conversion is done by the programmer using type casting operators
