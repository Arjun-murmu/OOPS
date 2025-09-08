#include<iostream>
#include<vector>
#include <climits>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int mid){
    int painterNo = 1;
    int time = 0;
    for(int i = 0;i<n; i++){
        if(time + arr[i] <= mid){
            time += arr[i];
        }
        else{
            painterNo++;
            // if(painterNo > m || arr[i] > mid){
            //     return false;
            // }
            time = arr[i];
        }
    }
    return painterNo <= m;  // if painterNo is less than or equal to m then it is possible to paint with mid time
    // return true;
}

int minTimeTOPoint(vector<int> &arr, int n, int m){
    int sum = 0;
    int maxVal = INT_MIN;
    for(int i = 0;i<n; i++){
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal, end = sum, ans = -1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(isPossible(arr, n, m, mid)){ // if it is possible to paint with mid time
            ans = mid;
            end = mid -1;
        }
        else{ // if it is not possible to paint with mid time
            st = mid +1;
        }
    }
    return ans;                    
}


int main(){
    vector<int> arr = {10, 10, 10, 10};
    int n = 4,  m = 2;

    cout<<"First array ans : "<<minTimeTOPoint(arr, n , m)<<endl;

    vector<int> arr2 = {40 , 30, 10, 20};
    int n2 = 4, m2 = 2;
    cout<<"Second array ans : "<<minTimeTOPoint(arr2, n2, m2)<<endl;
    return 0;
}