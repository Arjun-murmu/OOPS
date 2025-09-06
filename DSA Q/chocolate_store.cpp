#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

void processQueries(int q, const vector<vector<string>>& queries) {
    unordered_map<string, long long> stock; // store chocolate -> count
    
    for (int i = 0; i < q; ++i) {
        string type = queries[i][0];
        string name = queries[i][1];
        long long qty = stoll(queries[i][2]); // convert string to number

        if (type == "1") {
            // Add chocolates
            stock[name] += qty;
        } else {
            // Customer wants to buy
            long long available = stock[name];
            long long sold = min(available, qty);
            cout << sold << "\n";
            stock[name] = available - sold;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    vector<vector<string>> queries(q, vector<string>(3));
    
    for (int i = 0; i < q; ++i) {
        cin >> queries[i][0] >> queries[i][1] >> queries[i][2];
    }
    
    processQueries(q, queries);

    return 0;
}
