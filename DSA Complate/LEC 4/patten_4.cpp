#include<iostream>
using namespace std;

int main(){
    /*
    ****
    ***
    **
    *
    */
    // int n = 5;
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         cout<<" ";
    //     }
    //     for(int j = 1;j<=n-i;j++){
    //         cout<<"*";
    //     }
    //     cout<<"\n";
    // }

/*
1111
  222
   33
    4
    */
    //     int n = 5;
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         cout<<" ";
    //     }
    //     for(int j = 1;j<=n-i;j++){
    //         cout<<i;
    //     }
    //     cout<<"\n";
    // }


/*
 1234
  123
   12
    1
    */
    //       int n = 5;
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         cout<<" ";
    //     }
    //     for(int j = 1;j<=n-i;j++){
    //         cout<<j;
    //     }
    //     cout<<"\n";
    // }

/*
  1 2 3 4 
   1 2 3
    1 2
     1
    */
    //        int n = 5;
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         cout<<" ";
    //     }
    //     for(int j = 1;j<=n-i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<"\n";
    // }


/*
 1 1 1 1 
  2 2 2
   3 3
    4
    */
    //      int n = 5;
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         cout<<" ";
    //     }
    //     for(int j = 1;j<=n-i;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<"\n";
    // }


/*
 A A A A 
  B B B
   C C
    D
*/

    int n = 5;
    char ch = 'A';
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<" ";
        }
        for(int j = 1;j<=n-i;j++){
            cout<<ch<<" ";
            
        }
        ch++;
        cout<<"\n";
    }


    return 0;
}