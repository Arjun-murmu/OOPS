#include<iostream>
using namespace std;

void changArr(int arr[],int size){
    cout<< "\nInside function: " << endl;
    for(int i = 0; i < size; i++){
        arr[i] = 2*arr[i]; // Increment each element by 10
    }
}
int main(){
    int arr[] = {2, 3, 4};
    cout << "Before function call: " << endl;
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " "; // Print the original array
    }
    changArr(arr, 3); // Pass the array and its size to the function
    cout << "After function call: " << endl;
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " "; // Print the modified array
    }
    cout << endl;
    return 0;

}