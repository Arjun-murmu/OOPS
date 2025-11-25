#include<iostream>
#include<vector>
using namespace std;
//Time Complexity (Worst Case)= O(n²)
//Space = O(1)
class Solution{
    void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }
    public:
    vector<int> selectionSort(vector<int>& arr){ 
        int n = arr.size();
        int count = 0;
        for(int i = 0; i < n-1; i++){
            int smallestIndex = i;
            for(int j = i+1; j < n; j++){
                if(arr[j] < arr[smallestIndex]){
                  smallestIndex = j;
                }
            }
            swap(arr[i], arr[smallestIndex]);
            count++;
        }
        cout<<"Swaperd time : "<<count<<endl;
        return arr;
    }
};

int main(){
    // vector<int> arr = {7, 12, 9, 11, 3};
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90, 5};
    Solution s;
    vector<int> result = s.selectionSort(arr);
    for(int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}