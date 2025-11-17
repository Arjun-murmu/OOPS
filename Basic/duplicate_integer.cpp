#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

//Brute Force Method
/*Time complexity: O(n^2)
Space complexity: O(1)
*/
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }
};

//Sorting Method
/*
Time complexity: O(nlogn)
Space complexity: O(1) or O(n) depending on the sorting algorithm.
*/
class Solution2{
    bool hasDuplicate(vector<int>& nums){
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;
    }
};

//Hash Set Method
/*
Time complexity: O(n)
Space complexity: O(n)
*/
class Solution3 {
    bool hasDuplicate(vector<int>& nums){
        unordered_set<int> se;
        for(int num : nums){
            if(se.count(num)){
                return true;
            }
            se.insert(num);
        }
    }
};

// Hash Set Length Method
/*
Time complexity: O(n)
Space complexity: O(n)
*/
class Solution4{
    bool hasDuplicate(vector<int>& nums){
        return unordered_set<int> (nums.begin(), nums.end()).size() < nums.size();
    }
};

int main() {
    Solution sol;
    Solution sol2;
    Solution sol3;
    Solution sol4;
    
    vector<int> nums = {1, 2, 3, 4, 2}; // Example input
    //1
    if (sol4.hasDuplicate(nums)) {
        cout << "Contains duplicate" << endl;
    } else {
        cout << "No duplicates" << endl;
    }

    // if (sol2.hasDuplicate(nums)) {
    //     cout << "Contains duplicate" << endl;
    // } else {
    //     cout << "No duplicates" << endl;
    // }
    return 0;
}