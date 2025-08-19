#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> result;
    int n = nums.size();
    int i = 0;
    int j = n-1;
    while(i < j){
        int pair_sum = nums[i] + nums[j];
        if(pair_sum > target){
            j--;
        }
        else if(pair_sum < target){
            i++;
        }
        else{
            result.push_back(i);
            result.push_back(j);
            return result; // Return immediately after finding the first pair
        }
   }
}

int main(){
    vector<int> arr = {2, 7, 11, 15};
    int target = 13;
    vector<int> result = pairSum(arr , target);
    cout<<result[0]<<" "<<result[1]<<endl;
    return 0;
}