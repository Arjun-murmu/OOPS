#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums) {
     int freq = 1, ans = nums[0];
     int n = nums.size();
     for(int i = 1;i < n ;i++){
        if(nums[i] == nums[i-1]){
            freq ++;
        }
        else{
            freq = 1;
            ans = nums[i];
        }
     }
     if(freq > n/2){
        return ans;
     }
     return ans;
}

int main(){
    vector<int> arr = {2,2,1,1,1,2,2};
    int result = majorityElement(arr);
    cout<<result<<endl;
    return 0;
}