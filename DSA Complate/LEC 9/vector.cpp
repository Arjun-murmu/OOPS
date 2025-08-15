#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> vec;
    // vector<int> vec = {1,2,3};
    vector<int> vec(5,0);
    // cout << vec[0]<<endl;
    // cout << vec[1]<<endl;
    // cout << vec[2]<<endl;
    // cout << vec[3]<<endl;

    // Loop use in vector special loop used : for each loop

    // for(int i : vec){
    //     cout<<i<<endl;
    // }

    vector<char> alph = {'a','b','c'};
      for(char i : alph){
        cout<<i<<endl;
    }



    return 0;
}