#include<iostream>
#include<string>
using namespace std;

int main(){
    int n = 5;
    // cin>>n;
    string str[n] = {};
    for(int i = 0; i < n; i++){
        string st;
        cin>>st;
        str[i] = st;
    }
    for(int i = 0; i < n; i++){
        cout<<str[i] << " ";
        cout<<str[i].length()<<" ";
    }
    for(int j = 0; j < str[0].length(); j++){
    cout<<str[j]<<" "<<"\n";
    }
    return 0;
}