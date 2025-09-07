#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

void find_flower_indices(int n, int t, vector<int>& arr, int result[2]) {
    // Write your logic here.
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == t) {
            result[0] = left;
            result[1] = right;
            return;
        } else if (sum < t) {
            left++;
        } else {
            right--;
        }
    }
}


int main() {
    int n, t;
    cin >> n >> t;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result[2];
    find_flower_indices(n, t, arr, result);
    cout << result[0] << " " << result[1];
    return 0;
}