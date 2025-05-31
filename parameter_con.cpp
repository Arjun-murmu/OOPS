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

    //Parameterized constructor
    // customer(string a,int b,int c){
    //     name = a;
    //     acc_no = b;
    //     balance = c;
    // }

    //This used of the parameter or argument.
     customer(string name,int acc_no,int balance){
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
    }
    void dispaly(){
        cout<<"name : "<<name<<" ,Account no : "<<acc_no<<" ,Balance : "<<balance<<"\n"; 
    }
};

int main(){
    customer A1;
    A1.dispaly();
    customer A2("Uttam ku murmu",23456,1000);
    A2.dispaly();
    // customer A4("Abinash Murmu",23436,1000);
    // A4.dispaly();
}