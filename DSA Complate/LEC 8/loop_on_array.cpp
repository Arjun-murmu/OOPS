#include<iostream>
using namespace std;

int main(){
    int mark[] = {10, 20, 30, 40, 50};
    int size = sizeof(mark) / sizeof(mark[0]);
    cout << "Size of array: " << size << endl;

    for (int i = 0;i<size;i++){
        cout<<"student mark "<<i+1<<" is : "<<mark[i]<<endl;
    }
    cout<<"Student mark enter here... "<<endl;
    int newMark[5];

    for(int i = 0;i<=size;i++){
        cout<<"Enter student mark "<<i+1<<" : ";
        cin >> newMark[i];
    }
    for (int i = 0;i<=size;i++){
        cout<<"Updated student mark "<<i+1<<" is : "<<newMark[i]<<endl;
    }

    return 0;
}