#include<iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enter a character : ";
    cin >> ch;

    // cout<<char(111);
    // cout<<int('a');
    // cout<<int('z');

    if((ch >= 'a' && ch <= 'z') || (ch >= 97 && ch <= 122)){
        cout<<"The character : '"<<ch<<"' is in LowerCase."<<endl;
    }
    else{
        cout<<"The character : '"<<ch<<"' is in UpperCase."<<endl;
    }
    return 0;
}