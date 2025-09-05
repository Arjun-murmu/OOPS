#include <iostream>
#include <string>
using namespace std;

string determineColor(const string& s) {
    // Example input: "a1", "c5"
    char col = s[0];      // first char is column (a-h)
    int row = s[1] - '0'; // second char is row (1-8)

    int colNum = col - 'a' + 1; // convert a->1, b->2, ...

    // If sum is even -> Black, else -> White
    if ((colNum + row) % 2 == 0) {
        return "Black";
    } else {
        return "White";
    }
}

int main() {
    string s;
    cin >> s;
    string result = determineColor(s);
    cout << result << endl;
    return 0;
}
