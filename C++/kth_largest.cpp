#include <iostream>
#include <climits>
using namespace std;

int findKthLargest(int arr[], int n, int k) {
    for(int count = 1; count <= k; count++){
        int maxIndex = 0;

        for(int i = 1; i < n; i++){
            if(arr[i] > arr[maxIndex]){
                maxIndex = i;
            }
        }

        if(count == k)
            return arr[maxIndex];

        arr[maxIndex] = INT_MIN;  // remove current max
    }
    return -1;
}

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << findKthLargest(arr, n, k);
    return 0;
}
