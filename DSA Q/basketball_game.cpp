#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to implement logic
int user_logic(vector<string>& ops) {
    vector<int> record;

    for (string op : ops) {
        if (op == "C") {
            // Invalidate last score
            record.pop_back();
        } 
        else if (op == "D") {
            // Double last score
            record.push_back(2 * record.back());
        } 
        else if (op == "+") {
            // Sum of last two scores
            int size = record.size();
            record.push_back(record[size - 1] + record[size - 2]);
        } 
        else {
            // Convert string to integer
            record.push_back(stoi(op));
        }
    }

    // Sum of all valid scores
    int total = 0;
    for (int score : record) {
        total += score;
    }

    return total;
}

int main() {
    int n;
    cin >> n; // Number of operations
    vector<string> ops(n);

    // Input operations
    for (int i = 0; i < n; ++i) {
        cin >> ops[i];
    }

    // Compute and output result
    cout << user_logic(ops) << endl;
    return 0;
}

/*
8
1 2 + C D 8 D +
Testcase Output
55
*/