/*
Problem Statement
Mohan gave Rohan a challenge. Mohan said “I will give you a number N. You have to convert each number from 1 to N into binary form (1's and 0's). Then, calculate the total number of occurence of 1 in those converted numbers.”

Rohan asks for your help in achieving this.

Input Format
You are given the integer N.

Output Format
Display a single integer which is the count of occurrences of '1' in the binary representations of all numbers from 1 to ( N ).

Constraints
0 < N<= 10^7

Sample Testcase 0
Testcase Input
4
Testcase Output
5
Explanation
for (1) => (0001), set bits = 1


for (2) => (0010), set bits = 1


for (3) => (0011), set bits = 2


for (4) => (0100), set bits = 1


Total set bits = 5


Therefore, for N = 4, result is 5
*/

#include <iostream>

using namespace std;

// Placeholder for user logic function
int countOnesInBinary(int N) {
    int totalCount = 0;
    for (int i = 1; i <= N; i++) {
        totalCount += __builtin_popcount(i); // counts 1s in binary of i
        //__builtin_popcount(x) is a built-in function in GCC/Clang compilers (and also supported by modern C++ compilers like g++). It takes an integer x as input and returns the number of set bits (1s) in its binary representation.
    }
    return totalCount;
}

int main() {
    int N;
    cin >> N;  // Read the integer N

    // Call the user logic function
    int result = countOnesInBinary(N);
    
    // Output the result
    cout << result << endl;

    return 0;
}

/*
What it does:

It counts the number of set bits (1s) in the binary representation of the integer x.
For example:

__builtin_popcount(5) → binary 101 → result 2

__builtin_popcount(7) → binary 111 → result 3

__builtin_popcount(8) → binary 1000 → result 1*/