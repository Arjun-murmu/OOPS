#include<iostream>
using namespace std;
int FizzBuzz(int n){
    int i = 0;
    while(i++ < n){
        if(i % 3 == 0 && i % 5 == 0){
            cout<<"FizzBuzz.."<<endl;
        }
        else if(i % 5 == 0){
            cout<<"Buzz."<<endl;
        }
        else if(i % 3 == 0){
            cout<<"Fizz."<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
}
int main(){
    int n;
    cin>>n;
    FizzBuzz(n);
    return 0;
}