#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int box;
    cin >> box;
    vector<int> label(box);
    
    for (int i = 0; i < box; i++) {
        cin >> label[i];
    }

    int n = box / 2;
    unordered_map<int, int> freq;
    
    for (int l : label) {
        freq[l]++;
    }

    // Traverse from right to left → last valid element wins
    for (int i = 0; i < box; i++) {
        if (freq[label[i]] == n) {
            cout << label[i] << endl;
            return 0;
        }
    }

    return 0;
}
