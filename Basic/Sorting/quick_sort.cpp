#include<iostream>
#include<vector>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int partition(vector<int>& arr,int st,int end){
    int idex = st - 1;
    int pivot = arr[end];
    for(int j = st; j < end; j++){
        if(arr[j] <= pivot){
            idex++;
            swap(arr[j], arr[idex]);
        }
    }
    idex++;
    swap(arr[end], arr[idex]);
    return idex;
}

void quicksort(vector<int>& arr, int st, int end){
    if(st < end){
       int pivIdex = partition(arr, st, end);
       quicksort(arr, st, pivIdex - 1); //left half call
       quicksort(arr, pivIdex + 1, end); //right half call 
    }
}


int main(){
    vector<int> arr = {12, 31, 35, 17, 8, 43};
    quicksort(arr, 0, arr.size()-1);

    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}