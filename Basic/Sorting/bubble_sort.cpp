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
    vector<int> bubbleSort(vector<int>& arr){
        int n = arr.size();
        bool swapped;
        int count = 0;
        for(int i = 0; i < n; i++){
            swapped = false;
            for(int j = 0; j < n; j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j], arr[j+1]);
                    swapped = true;
                    if(swapped){
                        count++;
                    }
                }
            }
            if(!swapped){
                break;
            }
        }
        cout<<"Swaperd time : "<<count<<endl;
        return arr;
    }
};

int main(){
    vector<int> arr = {7, 12, 9, 11, 3};
    Solution s;
    vector<int> result = s.bubbleSort(arr);
    for(int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}