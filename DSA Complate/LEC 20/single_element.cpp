#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        //some case purpose
        if(nums.size() == 1){
            return nums[0];
        }

        while(start <= end){
            int mid = start+(end - start)/2;
            //some case issue solve {
            if(mid == 0 && nums[0] != nums[1]){
                return nums[mid];
            }
            if(mid == nums.size() - 1 && nums[nums.size()-1] != nums[nums.size() -2]){
                return nums[mid];
            }
            // }
            if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]){
                return nums[mid];
            }
            if(mid %2 == 0){ // even side
                if(nums[mid-1] == nums[mid]){
                    end = mid -1;
                }
                else{
                    start = mid+1;
                }
            }
            else{
                if(nums[mid-1] == nums[mid]){
                    start = mid + 1;
                }
                else{
                    end = mid -1;
                }
            }
        }
        return -1;  
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1,1,2,2,3,3,4,4,5,8};
    int result = sol.singleNonDuplicate(nums);
    cout << "single Non Duplicate value :  "<< result <<endl;
    return 0;
}