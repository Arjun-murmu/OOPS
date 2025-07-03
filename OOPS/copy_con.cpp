#include<iostream>
using namespace std;

class customer{
    string name;
    int acc_no;
    int balance;

    //Default constructor
    public:
    customer(){
        // cout<<"This is default constructor.\n";
        name = "Arjun Murmu";
        acc_no = 289304;
        balance = 2000;
    }

    //Construstor Overloading
    customer(string a,int b){
        name = a;
        acc_no = b;
        balance = 0;
    }
    //Parameter constructor
    customer(string a,int b,int c){
        name = a;
        acc_no = b;
        balance = c;
    }

    //Create a copy constructor 
    customer(customer &B){
        name = B.name;
        acc_no = B.acc_no;
        balance = B.balance;
    }
    void dispaly(){
        cout<<"name : "<<name<<" ,Account no : "<<acc_no<<" ,Balance : "<<balance<<"\n"; 
    }
};

int main(){
    customer A1;
    //A1.dispaly();
    customer A2("Uttam ku murmu",23456,1000);
   // A2.dispaly();
    customer A3("Nabin Murmu",345623);
   // A3.dispaly();
    customer A4(A3);
    A4.dispaly();

    customer A5;
    A5 = A2;
    A5.dispaly();
}