#include <iostream>
#include <vector>
using namespace std;

vector<int> modify_array(int n, vector<int> arr) {
    int max_so_far = arr[0];
    for(int i = 0; i < n; i++) {
        max_so_far = max(max_so_far, arr[i]);  // update maximum till this index
        arr[i] = arr[i] + max_so_far;          // add maximum to current element
    }
    return arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> modified_arr = modify_array(n, arr);
    for(int i = 0; i < modified_arr.size(); i++) {
        cout << modified_arr[i] << " ";
    }
    return 0;
}
