#include<bits/stdc++.h>
using namespace std;

bool palindrom(string s){
    int left = 0;
    int right = s.length() - 1;
    while(left < right){
        if(s[left] != s[right]){
            return false;
            break;
        }
        left++;
        right--;
    }
    return true;
}

int main(){
    string str = "ABCDEDCEBA";
    cout<<str[6]<<endl;;
    if(palindrom(str)){
        cout<<"yes Palindram.";
    }
    else{
        cout<<"Not Palindram.";
    }
    return 0;

}
