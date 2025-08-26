#include<iostream>
#include<vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> prefix(nums.size(), 1);
        vector<int> suffix(nums.size(), 1);
        vector<int> ans(nums.size(), 1);
    
        for(int i= 1;i<nums.size();i++){
            prefix[i] = prefix[i-1] * nums[i-1];
        }
   
        //suffix
        for(int i=nums.size()-2; i>= 0;i--){
            suffix[i] = suffix[i+1] * nums[i+1];
        }
        for(int i = 0;i <nums.size(); i++){
            ans[i] = prefix[i] * suffix[i];
        }
        
        return ans;
        
}

int main(){
    vector<int> nums = {1,2,3,4};
    vector<int> result = productExceptSelf(nums);
    cout << "Product : ";
    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Time Complexity : O(n)." << endl;
    cout<<"Space Complexity : O(n)." <<endl;

    return 0;
}