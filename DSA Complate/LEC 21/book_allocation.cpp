#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages){  // maxAllowedPages = mid
    int student = 1, pages = 0;

    for(int i = 0; i<n;i++){
        if(arr[i] > maxAllowedPages){
            return false;
        }

        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        }

        else{
            student++;
            pages = arr[i];
        }
    }

    return student > m ? false : true;
}

int allocationBooks(vector<int> &arr, int n, int m){ //O(logn * n)
    if(m > n){
        return -1;
    }

    int sum = 0;
    for(int i = 0; i< n ; i++){  //O(n)
        sum += arr[i];
    }

    int answer = -1;
    int start = 0, end = sum;  //range of possible answers

    while(start <= end){ 
        int mid = start + (end - start) / 2;

        if(isValid(arr, n , m, mid)){ // valid //left
            answer = mid;
            end = mid -1;
        }
        else{  // not valid // right
            start = mid + 1;
        }


    }
    return answer;
}

int main(){
    vector<int> arr = {2 ,1, 3, 4};
    int n = 4,  m = 3;

    cout<<allocationBooks(arr, n , m)<<endl;
    return 0;
}