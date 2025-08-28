#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr;

    cout<<"Address of first memory block : "<<arr<<endl;
    cout<<"Address of first memory block : "<<&arr<<endl;

    cout<<"*Arr :  "<<*arr<<endl;
    cout<<"*(ptr +1 ) : "<<*(ptr + 1)<<endl;
    cout<<"*(ptr +2 ) : "<<*(ptr + 2)<<endl;
    cout<<"*(ptr +3 ) : "<<*(ptr + 3)<<endl;
    cout<<"*(ptr +4 ) : "<<*(ptr + 4)<<endl;

    return 0;
}