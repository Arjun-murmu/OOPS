#include<iostream>
#include<vector>
#include <climits>

using namespace std;

int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = sizeof(arr)/sizeof(int);
    cout<<size<<endl;
    int current_sum = 0;
    int max_sum = INT_MIN;

        for(int i = 0;i<=size;i++){
            current_sum = current_sum + arr[i];
            max_sum = max(current_sum,max_sum);
        
            if (current_sum < 0){
                current_sum = 0;
            }
        }
    cout<<"Maximum subarray : "<<max_sum<<endl;
    return 0;
}
