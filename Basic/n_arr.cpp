// C++ program to convert integer
// number into character array

#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

vector<char> convertIntegerToChar(int N)
{

    vector<char> arr;

    while (N != 0) {
        arr.insert(arr.begin(), N % 10 + '0');
        N /= 10;
    }
    return arr;
}
int main()
{
    // Given number
    int N = 12349;

    // Function call
    vector<char> arr = convertIntegerToChar(N);

    // Print array
    for (auto& it : arr)
        cout << it << ", ";

    return 0;
}
