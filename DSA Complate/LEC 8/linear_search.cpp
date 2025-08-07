#include<iostream>
using namespace std;

void lineraSearch(int arr[],int size,int target){
    for(int i = 0; i < size; i++){
        if (arr[i] == target){
            cout << "Element found at index : " << i <<endl;
            return; // Corrected typo: 'retunr' to 'return'
        }
    }  
    cout <<target << " Element is not found at index. " << endl;
}
//or 
int linerSearchtwo(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; // Return -1 if the element is not found
}


int main(){
    int arr[] = {2 ,4 , 6, 8, 1, 2, 3};
    int size = sizeof(arr)/sizeof(int);
    int target;
    cout << "Enter the element to search: ";
    cin >> target;
    lineraSearch(arr, size, target); // Corrected function name: 'lineraSearch' to 'linearSearch'
    // or
    cout << "Element not found in the array." <<linerSearchtwo(arr, size, target)<< endl; // Added message for clarity
    cout << "Element is found in the array : target =  "<< target <<" Index no is = " <<linerSearchtwo(arr, size, target)<< endl;
    return 0;

}