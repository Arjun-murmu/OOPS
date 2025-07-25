#include<iostream>
using namespace std;
int main(){
    // now discuss the operators in C++
    // operator in c++ like +, -, *, /, %, ++, --, ==, !=, <, >, <=, >=, &&, ||, !, =, +=, -=, *=, /=, %=
    int a = 12,b = 21;
    // arithmetic operators
    cout<<"\n";
    cout << "Arithmetic Operators:" << endl;
    cout << "Addition: " << a + b << endl; // Addition operator
    cout << "Subtraction: " << a - b << endl; // Subtraction operator
    cout << "Multiplication: " << a * b << endl; // Multiplication operator
    cout << "Division: " << a / b << endl; // Division operator
    cout << "Modulus: " << a % b << endl; // Modulus operator
    cout<<"\n \n";
    // increment and decrement operators (uniary operators)
    cout << "Increment: " << ++a << endl; // Increment operator
    cout << "Decrement: " << --b << endl; // Decrement operator
    cout<<"\n \n";

    // relational operators
    cout << "Relational Operators:" << endl;  
    cout << "Equal to: " << (a == b) << endl; // Equal to operator
    cout << "Not equal to: " << (a != b) << endl; // Not equal to operator
    cout << "Less than: " << (a < b) << endl; // Less than operator
    cout << "Greater than: " << (a > b) << endl; // Greater than operator
    cout << "Less than or equal to: " << (a <= b) << endl; // Less than or equal to operator
    cout << "Greater than or equal to: " << (a >= b) << endl; // Greater than or equal to operator
    cout<<"\n \n";

    // logical operators
    cout << "Logical Operators:" << endl;
    cout << "Logical AND: " << (a && b) << endl; // Logical AND operator
    cout << "Logical OR: " << (a || b) << endl; // Logical OR operator
    cout << "Logical NOT: " << !a << endl; // Logical NOT operator
    cout<<"\n \n";

    // bitwise operators
    cout << "Bitwise Operators:" << endl;
    cout << "Bitwise AND: " << (a & b) << endl; // Bitwise AND operator
    cout << "Bitwise OR: " << (a | b) << endl; // Bitwise OR operator
    cout << "Bitwise XOR: " << (a ^ b) << endl; // Bitwise XOR operator
    cout << "Bitwise NOT: " << ~a << endl; // Bitwise NOT operator
    cout<<"\n \n";

    // conditional (ternary) operator
    cout << "Conditional Operator:" << endl;
    cout << "Condition ? True : False: " << (a > b ? a : b) << endl; // Conditional operator
    cout<<"\n \n";

    // comma operator
    cout << "Comma Operator:" << endl;
    int x = (a, b); // Comma operator
    cout << "Value of x after comma operator: " << x << endl; // Output the value of x
    cout<<"\n \n";

    // shift operators
    cout << "Shift Operators:" << endl; 
    cout << "Left Shift: " << (a << 1) << endl; // Left shift operator
    cout << "Right Shift: " << (a >> 1) << endl; // Right shift operator
    cout<<"\n \n";

    cout<<"Assignment operator varius example"<<endl;
    cout << "Assignment: " << (a = b) << endl; // Assignment operator
    cout << "Addition Assignment: " << (a += b) << endl; // Addition assignment operator
    cout << "Subtraction Assignment: " << (a -= b) << endl; // Subtraction assignment operator
    cout << "Multiplication Assignment: " << (a *= b) << endl; // Multiplication assignment operator
    cout << "Division Assignment: " << (a /= b) << endl; // Division assignment operator
    cout << "Modulus Assignment: " << (a %= b) << endl; // Modulus assignment operator
    cout<<"\n \n";


    return 0; // Return 0 to indicate successful execution
}