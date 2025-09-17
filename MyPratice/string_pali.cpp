#include<iostream>
#include<string>
#include <algorithm> 
using namespace std;

void 

int main(){

    string word;
    cin>>word;
    string str1 = word;
    string str2 = word;
    reverse(str1.begin(), str1.end());
    cout<<"Str1 = "<<str1<<" str 2 : "<<str2<<endl;

    if(str1 == str2){
        cout<<"Reverse this word. Palindrom word"<<endl;
    }
    else{
        cout<<"Not Reverse. Not Palindrom."<<endl;
    }
    // palidromString(n);


    
    return 0;

}