/*
Problem Statement
You have a budget of X coins each day to buy beer, and your goal is to buy as many bottles of beer as possible before the price of beer in all shops exceeds your daily budget.
There are N shops, and each shop sells one bottle of beer per day. The price of beer in each shop increases by 1 coin per day after each purchase.
You can visit multiple shops in a single day, but you can buy only one bottle per shop per day.

Your task is to determine the total number of beer bottles you can buy before the prices at all shops exceed your daily budget.

Input Format
The first line contains two space-seperated integers N, X. The number of shops and everyday budget.

The second line contains N space-seperated integers, representing the cost of one bottle in each shop.

Output Format
Print one integer representing the total number of beer bottles you can buy before prices exceed your daily budget.

Constraints
1 ≤  N ≤ 2*10^5

1 ≤  X ≤10^9

1≤ A[i]  ≤10^9

Sample Testcase 0
Testcase Input
5 9
10 20 30 40 50
Testcase Output
0*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long max_bottle_cost(int n, long long x, vector<int>& costs) {
    // 1. Sort the initial costs (cheapest shops first)
    sort(costs.begin(), costs.end());

    // 2. Build prefix sum array
    vector<long long> prefix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + costs[i];
    }

    long long ans = 0;
    long long usedDays = 0;

    // 3. Iterate from largest prefix down to smallest
    for (int k = n; k >= 1; k--) {
        long long base = prefix[k];
        if (base > x) continue;  // can't even afford day 1 with k shops

        long long maxDays = (x - base) / k + 1;  // total days possible

        if (maxDays > usedDays) {
            ans += (maxDays - usedDays) * k;
            usedDays = maxDays;
        }
    }

    return ans;
}

int main() {
    int n;
    long long x;
    cin >> n >> x;
    vector<int> costs(n);
    for (int i = 0; i < n; i++) cin >> costs[i];

    cout << max_bottle_cost(n, x, costs) << endl;
    return 0;
}
