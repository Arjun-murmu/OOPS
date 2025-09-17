#include<iostream>
#include<string>
#include <algorithm> 
using namespace std;

int palidromInt(unsigned long long n){
    unsigned long long rev = 0;
    unsigned long long num = n;
    cout<<rev<<" n: "<<n<<endl;
    while(n > 0){
        unsigned long long rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    cout<<rev<<" n: "<<n<<endl;
    if(rev == num){
        cout<<"This number is Palindrom."<<endl;
    }
    else{
        cout<<"This number is not"<<endl;
    }

}

int main(){
    unsigned long long n;
    cin>>n;
    //input 1234567890987654321
    cout<<"n = "<<n<<endl;
    palidromInt(n);
    return 0;

}