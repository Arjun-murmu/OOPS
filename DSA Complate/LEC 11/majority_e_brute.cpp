#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();

        for(int val : nums){
            int freq = 0;
            for(int element : nums){
                if(element == val){
                    freq ++;
                }
            }
            if(freq > n/2){
                return val;
            }
        }
}

int main(){
    vector<int> arr = {2,2,1,1,1,2,2};
    int result = majorityElement(arr);
    cout<<result<<endl;
    return 0;
}