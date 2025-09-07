#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        vector<int> temp(n);
        for(int i = 0;i<n;i++){
            temp[(i+k)%n] = nums[i];
        }
        //copy temp to nums
        nums = temp;                           
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    Solution sol;
    sol.rotate(nums, k);  // Output: [5,6,7,1,2,3,4]
    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    // The time complexity is O(n) where n is the length of the input array.
    return 0;
}