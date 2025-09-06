#include <iostream>
#include <map>
#include <climits>
using namespace std;

int main() {
    int q;
    cin >> q;

    map<int, long long> freq; // number -> frequency

    // read queries
    for (int i = 0; i < q; i++) {
        long long a, b;
        cin >> a >> b;
        freq[b] += a; // add frequency
    }

    // if only one unique number, answer = 0
    if (freq.size() == 1) {
        cout << 0 << endl;
        return 0;
    }

    long long max_freq = 0, min_freq = LLONG_MAX;
    int highest_num = 0, lowest_num = 0;

    // check each number's frequency
    for (auto p : freq) {
        int num = p.first;
        long long count = p.second;

        // find max frequency (choose larger number in tie)
        if (count > max_freq || (count == max_freq && num > highest_num)) {
            max_freq = count;
            highest_num = num;
        }

        // find min frequency (choose smaller number in tie)
        if (count < min_freq || (count == min_freq && num < lowest_num)) {
            min_freq = count;
            lowest_num = num;
        }
    }

    cout << abs(highest_num - lowest_num) << endl;

    return 0;
}
