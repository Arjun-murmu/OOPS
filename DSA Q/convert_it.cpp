/*
Problem Statement
Given an array of integer, an astrologer has determined that it is not lucky and needs to be changed.

The suggested modification involves increasing the value at each index by the maximum value encountered up to that index. Your task is to print the modified array.

Input Format
The first line contains a single integer N, representing the size of the array.

The second line contains N space-separated integers, representing the elements of the array.

Output Format
Print the modified array after applying the suggested changes.

Constraints
1 <= N <= 100

0 <= A[i] <= 10^4

Sample Testcase 0
Testcase Input
1
12
Testcase Output
24*/

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
