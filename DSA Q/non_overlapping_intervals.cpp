#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    if (intervals.empty()) return 0;

    // Sort intervals by end time
    sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
    });

    int count = 0;  // count removals
    int prevEnd = intervals[0][1]; // end of the first interval

    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i][0] < prevEnd) {
            // overlap → remove this interval
            count++;
        } else {
            // no overlap → update prevEnd
            prevEnd = intervals[i][1];
        }
    }

    return count;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> intervals(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    cout << eraseOverlapIntervals(intervals) << endl;
    return 0;
}
