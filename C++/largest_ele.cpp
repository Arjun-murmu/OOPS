#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int largestelementWrost(vector<int>& arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    return arr[n-1];
}

int largestElementOptimize(vector<int>& arr){
    int n = arr.size();
    int largest = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Largest Element : "<<largestelementWrost(arr)<<endl;
    cout<<"Largest Number Optimize case : "<<largestElementOptimize(arr);
    return 0;

}