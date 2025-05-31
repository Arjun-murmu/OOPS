#include<iostream>
using namespace  std;
class  customer
{
    string name;
    int acc_no;
    int balance;

    public:
    customer(){
        name = "Jaga";
        acc_no = 23451;
        balance = 3000;
    }
    inline customer(string a,int b,int c):name(a),acc_no(b),balance(c){

    }
    void dispaly(){
        cout<<"name : "<<name<<" ,Account no : "<<acc_no<<" ,Balance : "<<balance<<"\n";
    }
};

int main(){
    customer A1;
    A1.dispaly();
    customer A2("sonu",23445,20000);
    A2.dispaly();


}
