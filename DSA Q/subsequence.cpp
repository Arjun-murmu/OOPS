#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int SizeS = s.length();
        int SizeT = t.length();
        int left = 0, right = 0;
        
        while(left < SizeS && right < SizeT){
            if(s[left] == t[right]){
                left++;
            }
            right++; 
        }
        if(left != SizeS){
            return false; 
        }
        return true;
        
    }
};

int main(){
    string s,t;
    cout<<"Enter a string : ";
    cin>>t;
    cout<<"Enter a substring : ";
    cin>>s;
    Solution obj;
    if(obj.isSubsequence(s,t)){
        cout<<"True";
    }
    else{
        cout<<"False.";
    }
}