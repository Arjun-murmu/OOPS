#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums) {
        int frag = 0, ans = 0;
        for(int i = 0;i<nums.size();i++){
            if(frag == 0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                frag++;
            }
            else{
                frag--;
            }
        }
        return ans; 
        
    }

int main(){
    vector<int> arr = {2,2,1,1,1,2,2};
    int result = majorityElement(arr);
    cout<<result<<endl;
    return 0;
}