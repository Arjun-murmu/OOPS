/*
Problem Statement
Given an array of intervals where intervals[i] = [starti, endi], return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.

Input Format
First line contains an integers denoting the no. of rows, N.

Second line contains an integer M, which will always be 2.

Next N lines contains two space-seprated integers denoted start and end.

Output Format
Display the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.

Constraints
1 <= intervals.length<= 105
intervals[i].length == 2
-5 * 104<= starti <endi <= 5 * 104
Sample Testcase 0
Testcase Input
3
2
1 2
1 2
1 2
Testcase Output
2
Explanation
You need to remove two [1,2] to make the rest of the intervals non-overlapping.
Sample Testcase 1
Testcase Input
1 
2
2 3
Testcase Output
0*/

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
