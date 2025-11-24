#include <iostream>
#include <vector>
#include <string>
#include <numeric> // For std::accumulate (optional)
using namespace std;

int main() {
    vector<int> intArray = {1, 2, 3, 4};
    int result = 0;
    for (int digit : intArray) {
        result = result * 10 + digit;
    }
    cout << "Iterative method: " << result << endl;

    // Method 2: Using stringstream (more flexible for different bases)
    string s;
    for (int digit : intArray) {
        s += to_string(digit);
    }
    int result2 = stoi(s);
    cout << "Stringstream method: " << result2 << endl;
    
    return 0;
}