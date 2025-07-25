// Data type example in C++
#include <iostream>
using namespace std;
int main(){
    int a = 10; // integer variable
    float b = 5.5; // float variable
    char c = 'A'; // character variable
    string d = "Hello"; // string variable
    bool e = true; // boolean variable
    double f = 3.14159; // double precision floating point variable
    
    // cout << "Integer: " << a << endl;
    // cout << "Float: " << b << endl;
    // cout << "Character: " << c << endl;
    // cout << "String: " << d << endl;
    // cout << "Boolean: " << e << endl;
    // cout << "Double: " << f << endl;

    //if the cheking the size of data types
    cout << "Size of int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of float: " << sizeof(b) << " bytes" << endl;
    cout << "Size of char: " << sizeof(c) << " bytes" << endl;
    cout<<"Size of string: " <<sizeof(d)<<" bytes" << endl;
    cout << "size of bool : " << sizeof(e) << "bytes" << endl;
    cout << "Size of double: " << sizeof(f) << " bytes" << endl;
    return 0;

} 


// Data types are used to define the type of data a variable can hold
// Each data type has its own size and range
// Common data types in C++ include:
// int, float, char, string, bool, double
// The 'int' type is used for integers, 'float' for floating-point numbers, 'char' for characters, 'string' for text, 'bool' for boolean values,
// and 'double' for double precision floating-point numbers.


// size of int is 4 bytes which is 32 bits , range is -2,147,483,648 to 2,147,483,647 
//char is 1 byte which is 8 bits, and range is -128 to 127 or 0 to 255
// float is 4 bytes which is 32 bits, range is approximately -3.4E+38 to 3.4E+38
// bool is 1 byte which is 8 bits, and range is true or false  (bool can be 1 or 0 , True = 1 , False = 0)
// double is 8 bytes which is 64 bits, range is approximately -1.7E+308 to 1.7E+308

// this are all callad as primitive data types
// string is a sequence of characters, and it is not a primitive data type
// C++ also supports user-defined data types like structs and classes
// Data types help the compiler understand how to allocate memory for variables and how to interpret the data
// Using the correct data type is crucial for efficient memory usage and performance


//non-primitive data types are user-defined data types like structs and classes
// C++ also supports arrays, pointers, and references as data types
// non primitive data types name like struct, class, array, pointer, reference