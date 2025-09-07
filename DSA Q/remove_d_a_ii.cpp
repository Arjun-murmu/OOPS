#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       if(nums.empty()){
            return 0;
        }
        if(nums.size() == 1){
            return 1;
        }
        int index = 2;
        for(int i = 2;i<nums.size();i++){
            if(nums[i] != nums[index-2]){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
        
    }
};

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    Solution sol;
    int k = sol.removeDuplicates(nums);  // Output: 5, nums = [1, 1, 2, 2, 3, _]
    cout << "k: " << k << endl;  // The first k elements are the unique elements
    cout << "nums[:k]: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    // The time complexity is O(n) where n is the length of the input array.
    return 0;
}
