#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i == 3){
            cout << "Skipping number 3" << endl;
            continue; // Skips the rest of the loop when i is 3
        }
        else if (i == 10){
            cout<<i<<endl;
            break; // Breaks the loop when i is 5
        }
        else{
            cout << i << endl; // This will execute for all other values of i
        }
        

    }
    return 0;
}