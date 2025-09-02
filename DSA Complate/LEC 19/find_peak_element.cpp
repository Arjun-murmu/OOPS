#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
    int start = 0, end = nums.size() - 1;
        
        while (start < end) {
            int mid = start + (end - start) / 2;
            
            if (nums[mid] > nums[mid + 1]) {
                // Peak is on the left side (including mid)
                end = mid;
            } else {
                // Peak is on the right side
                start = mid + 1;
            }
        }
        
        // start == end -> peak index
        return start;
    }    
};

int main(){
    Solution sol;
    vector<int> nums = {4,5,6,7,0,1,2};
    int result = sol.findPeakElement(nums);
    cout << "Peak index is :  "<< result << "\n Value is : " <<nums[result]<<endl; // Output: 4
    return 0;
}