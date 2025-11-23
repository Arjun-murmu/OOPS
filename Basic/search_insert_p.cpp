#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int ans;
        int start = 0, end = n-1;
        while(start <= end){
            int mid = (end+start)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }
            else {
                end = mid -1;
            }
        }
        return start;
    }
};

int main(){
    // vector<int> nums = {2, 4, 5, 6, 7};
    // int target = 4;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin>>nums[i];
        nums.push_back(nums[i]);
    }
    int target;
    cout<<"Enter target : ";
    cin>>target;

    Solution s;
    int result = s.searchInsert(nums, target);
    cout<<result;

    return 0;

}