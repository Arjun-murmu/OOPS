#include <iostream>
using namespace std;

void moveZerosToEnd(int arr[], int n) {
    int j = 0; // j will point to the next position of non-zero element

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]); // move non-zero element forward
            j++;
        }
    }
}

int main() {
    int arr[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

   moveZerosToEnd(arr, n);

    cout << "Array after moving zeros to end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "<<sizeof(arr[i])<<" "<<endl;
    }
    cout << endl;

    return 0;
}
