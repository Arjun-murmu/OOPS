#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr,int st,int mid,int end){
    vector<int> temp;
    int i = st, j = mid+1;
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    //left
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    //right
    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx < temp.size(); idx++){
        arr[idx + st] = temp[idx];
    }
}

void mergesort(vector<int>& arr, int st, int end){
    if(st < end){
       int  mid = st + (end - st)/2;
        //left
        mergesort(arr, st, mid);
        //right
        mergesort(arr, mid+1, end);
        merge(arr, st, mid, end);
    }
}


int main(){
    vector<int> arr = {12, 31, 35, 17, 8, 43};
    mergesort(arr, 0, arr.size()-1);

    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}