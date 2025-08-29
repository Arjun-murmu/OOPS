#include <iostream>
#include <vector>
using namespace std;

int RecbinarySearch(vector<int> arr, int target, int start, int end) {
    if (start > end) {
        return -1;  // base case: element not found
    }

    int mid = start + (end - start) / 2;

    if (target == arr[mid]) {
        return mid;
    }
    else if (target < arr[mid]) {
        return RecbinarySearch(arr, target, start, mid - 1);
    }
    else {
        return RecbinarySearch(arr, target, mid + 1, end);
    }
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};  // odd size
    int target1 = 12;
    cout << "The target element index is: "
         << RecbinarySearch(arr1, target1, 0, arr1.size() - 1) << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; // even size
    int target2 = 2;
    cout << "The target element index is: "
         << RecbinarySearch(arr2, target2, 0, arr2.size() - 1) << endl;

    vector<int> arr3 = {-1, 0, 3, 5, 9, 12}; // even size
    int target3 = 0;
    cout << "The target element index is: "
         << RecbinarySearch(arr3, target3, 0, arr3.size() - 1) << endl;

    return 0;
}
