#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> num = {4,1,2,1,2};
    int ans = 0;
    for(int val:num){
        ans = ans^val;
    }
    cout<<ans;
    return 0;
}