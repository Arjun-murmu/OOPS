#include<iostream>
#include<vector>
using namespace std;
// Time Complexity: Worst/Average = O(n²), Best = O(n)
// Space Complexity = O(1)
class Solution{
    void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }
    public:
    vector<int> InsertionSort(vector<int>& arr){ 
        int n = arr.size();
        for(int i = 1; i < n; i++){
            int current_val = arr[i];
            int previews_val = i-1;
            while(previews_val >= 0 && arr[previews_val] > current_val){
                arr[previews_val + 1] = arr[previews_val];
                previews_val--;
            } 
            arr[previews_val + 1] = current_val;
        }
        return arr;
    }

    //REVERSE
     vector<int> InsertionSortReverse(vector<int>& arr){ 
        int n = arr.size();
        for(int i = 1; i < n-1; i++){
            int current_val = arr[i];
            int previews_val = i-1;
            while(previews_val >= 0 && arr[previews_val] < current_val){
                arr[previews_val + 1] = arr[previews_val];
                previews_val--;
            }
            arr[previews_val + 1] = current_val;
        }
        return arr;
    }

    //PRINT
    void print(vector<int>& arr){
        for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    }
};

int main(){
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90, 5};
    vector<int> arr2 = {7, 12, 9, 11, 3};
    Solution s;
    vector<int> result = s.InsertionSort(arr);
    cout<<"Insertion sort : ";
    s.print(result);

    cout<<"\n Insertion  Reverse order sort : ";
    vector<int> result2 = s.InsertionSortReverse(arr2);
    s.print(result2);

    return 0;
}