#include<iostream>
using namespace std;

// void reverseArr(int arr[] , int size){
//     int start = 0, end = size - 1;
//     while (start < end) {
//         // Swap the elements at start and end
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
        
//         // Move towards the middle
//         start++;
//         end--;
//     }
// }

//or 

void revArr(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end){
        swap(arr[start], arr[end]); 
        start++;
        end--;
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // reverseArr(arr, size);
    revArr(arr, size); // Call the function to reverse the array

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}