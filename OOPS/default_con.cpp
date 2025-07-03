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
    void dispaly(){
        cout<<"name : "<<name<<" ,Account no : "<<acc_no<<" ,Balance : "<<balance<<"\n"; 
    }
};

int main(){
    customer A1,A2,A3;
    A1.dispaly();
    A2.dispaly();
    A3.dispaly();
    /*name : Arjun Murmu ,Account no : 289304 ,Balance : 2000
    name : Arjun Murmu ,Account no : 289304 ,Balance : 2000
    name : Arjun Murmu ,Account no : 289304 ,Balance : 2000*/

}