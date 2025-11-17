#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2;
    cout<<"Enter a string : ";
    getline(cin , str1);
    cout<<"Enter a substring : ";
    getline(cin, str2);
    
    unordered_set<char> toremove(str2.begin(), str2.end());
    string result = " ";
    for(char c : str1){
        if(toremove.count(c) == 0){
            result += c;
        }
    }
    cout<<result;

    return 0;

}