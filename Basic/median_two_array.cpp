#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> mergerArr(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergeArr(nums1.size() + nums2.size());
        merge(nums1.begin(), nums1.end(),
                nums2.begin(), nums2.end(),
                mergeArr.begin());
        
        return mergeArr;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergeArr(nums1.size() + nums2.size());
        merge(nums1.begin(), nums1.end(),
                nums2.begin(), nums2.end(),
                mergeArr.begin());
        int n = mergeArr.size();
        float result;
        if(n % 2 == 0){ // even
            result = ((mergeArr[n/2 - 1] + mergeArr[n/2]))/2.0;
        }
        else{ //odd
            result = mergeArr[n / 2];
        }
        return result;
    }
    
};

int main(){
        vector<int> arr1 = {1, 3, 5};
        vector<int> arr2 = {2, 4, 6};

        Solution s;
        vector<int> result = s.mergerArr(arr1, arr2);

        cout<<"Merger arr : ";
        for(size_t i = 0; i < result.size(); ++i){
            if(i) cout << ",";
            cout << result[i];
        }
        cout<<"\n";
        cout<<"Median : "<<s.findMedianSortedArrays(arr1, arr2);
        cout << endl;
        return 0;
}