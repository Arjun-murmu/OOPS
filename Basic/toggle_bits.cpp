#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int toggle(int n){
    int num_bits = (int)log2(n) + 1;
    int mask = (1 << num_bits) - 1;
    return n^ mask;
}
int main(){
    int n;
    cin>>n;
    cout<<toggle(n)<<endl;
    return 0;
}