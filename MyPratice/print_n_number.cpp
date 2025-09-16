//Print numbers from 1 to 100.
#include<iostream>
using namespace std;

void numberCount(int n){
    for(int i = 1;i <= n;i++){
        cout<<i<<" ";
    }
}
int numberCount2(int n){
    int i = 1;
    while(i <= n){
        cout<<i<<" ";
        i++;
    }
    return i;

}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    //soluation 1
    //  int i = 1;
    // while(i <= n){
    //     cout<<i<<" ";
    //     i++;
    // }
    //soluation 2
    // for(int i = 1; i<= n; i++){
    //     cout<<i<<" ";
    // }

    // soluation 3
   // while(n-- > 0){
    //     cout<<n<<endl;
    // }

    numberCount(n);
    numberCount2(n);

    return 0;

}