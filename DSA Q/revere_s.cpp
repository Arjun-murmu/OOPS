#include <iostream>
#include <string>
#include <algorithm>  // for reverse

using namespace std;

string transform_string(const string& s, char ch) {
    size_t idx = s.find_last_of(ch);
    if (idx == string::npos) {
        return s; // if ch not found, return original string
    }
    string result = s;
    reverse(result.begin() + idx, result.end());
    return result;
}

int main() {
    string input;
    getline(cin, input);

    size_t space_pos = input.find(' ');
    string s = input.substr(0, space_pos);
    char ch = input[space_pos + 1];
    
    string result = transform_string(s, ch);
    cout << result << endl;
    return 0;
}
