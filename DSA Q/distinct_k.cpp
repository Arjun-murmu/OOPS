#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    cout << "Enter number of strings: ";
    cin >> N;

    vector<string> arr(N);
    unordered_map<string, int> freq;

    cout << "Enter " << N << " strings:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int k;
    cout << "Enter k: ";
    cin >> k;

    vector<string> uniques;
    for (string &s : arr) {
        if (freq[s] == 1) {
            uniques.push_back(s);
        }
    }

    cout << "Result: ";
    if (uniques.size() >= k) {
        cout << uniques[k-1] << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
