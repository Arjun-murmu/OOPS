#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 1, end = arr.size() - 2;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
                return mid;
            }
            if(arr[mid-1] < arr[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return -1;
    }     
};

int main(){
    Solution sol;
    vector<int> nums = {4,5,6,7,0,1,2};
    int result = sol.peakIndexInMountainArray(nums);
    cout << "Peak index is :  "<< result << "\n Value is : " <<nums[result]<<endl; // Output: 4
    return 0;
}