#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // ----------------------------------------------------------------
    // 1. Recursive Top-Down + Memoization
    // ----------------------------------------------------------------
    int solveRec(int index, vector<int>& nums, vector<int>& memo) {
        int n = nums.size();
        
        // Base: reached destination
        if (index >= n - 1) return 0;

        // Already computed
        if (memo[index] != -1) return memo[index];

        int steps = nums[index];
        if (steps == 0) return memo[index] = INT_MAX; // can't move forward

        int ans = INT_MAX;

        // Try every jump from 1 to nums[index]
        for (int jump = 1; jump <= steps; jump++) {
            int next = solveRec(index + jump, nums, memo);
            if (next != INT_MAX)
                ans = min(ans, next + 1);
        }

        return memo[index] = ans;
    }

    int jumpRecursive(vector<int>& nums) {
        int n = nums.size();
        vector<int> memo(n, -1);
        return solveRec(0, nums, memo);
    }


    // ----------------------------------------------------------------
    // 2. Dynamic Programming (Bottom-Up)
    // ----------------------------------------------------------------
    int jumpDP(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0;

        vector<int> jumps(n, INT_MAX);
        jumps[0] = 0;

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (j + nums[j] >= i && jumps[j] != INT_MAX) {
                    jumps[i] = min(jumps[i], jumps[j] + 1);
                    break;
                }
            }
        }

        return jumps[n - 1];
    }


    // ----------------------------------------------------------------
    // 3. Greedy Optimal Approach (O(n))
    // ----------------------------------------------------------------
    int jumpGreedy(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0;

        int totalJumps = 0, coverage = 0, lastJumpIndex = 0;

        for (int i = 0; i < n; i++) {
            coverage = max(coverage, i + nums[i]);

            if (i == lastJumpIndex) {
                lastJumpIndex = coverage;
                totalJumps++;

                if (coverage >= n - 1)
                    return totalJumps;
            }
        }
        return totalJumps;
    }
};

int main() {
    vector<int> nums = {2, 3, 1, 1, 4};
    Solution s;

    cout << "Recursive: " << s.jumpRecursive(nums) << endl;
    cout << "DP: " << s.jumpDP(nums) << endl;
    cout << "Greedy: " << s.jumpGreedy(nums) << endl;

    return 0;
}
