#include<iostream>
using namespace std;

int main(){
/*1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5*/
    // int n = 5;
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         cout<< i<<" ";
    //     }
    //     cout<<"\n";
    // }

/** 
* *
* * *
* * * *
* * * * * */
    // int n = 5;
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<"\n";
    // }


/*
A 
B C
D E F
G H I J
K L M N O*/

    // int n = 5;
    // char ch = 'A';
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<"\n";
    // }


/*
A 
A B
A B C
A B C D
A B C D E*/
    //   int n = 5;
    // for(int i = 1;i<=n;i++){
    //     char ch = 'A';
    //     for(int j = 1;j<=i;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<"\n";
    // }

/*
A 
B B
C C C
D D D D
E E E E E*/
    //   int n = 5;
    // char ch = 'A';
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         cout<<ch<<" ";
    //     }
    //     cout<<"\n";
    //     ch++; // Increment character after each row
    // }


/*
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5*/

    // int n = 5;
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1; j < i+1 ;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<"\n";

    // }


/*
1 
2 1
3 2 1
4 3 2 1
5 4 3 2 1
6 5 4 3 2 1*/
    //   int n = 5;
    // for(int i = 0;i<=n;i++){
    //     for(int j = i+1; j > 0 ;j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<"\n";

    // }
    

/*
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21*/
    //   int n = 5;
    //   int num = 1;
    // for(int i = 0;i<=n;i++){
    //     for(int j = i+1; j > 0 ;j--){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<"\n";

    // }    

    /*
    A
    B A
    C B A
    D C B A
    */
//    for(int i = 0;i<5;i++){
//         for(int j = i; j >= 0 ;j--){
//             cout<<char('A' + j)<<" ";
//         }
//         cout<<"\n";
//     }


/*
A 
C C
F F F
J J J J
O O O O O
U U U U U U
*/
      int n = 5;
      char ch = 'A';
    for(int i = 0;i<=n;i++){
        for(int j = i; j >= 0 ;j--){
            cout<<char(ch + j)<<" ";
            ch++;
        }
        cout<<"\n";

    }

    return 0; 
}