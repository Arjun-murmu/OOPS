#include<iostream>
using namespace std;

class customer{
    string name;
    int acc_no;
    int balance;
    int *roi;

    public:
    //Default constructor
    customer(){
        name = "Mohit";
        acc_no = 39898;
        balance = 300;
       roi =  new int[100];
    }
      customer(string name,int acc_no,int balance){
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
    }

    void display(){
        cout<<"name : "<<name<<" ,account no : "<<acc_no<<" ,Balance : "<<balance<<"\n";
    }
};

int main(){
    customer A1;
    A1.display();
    customer A2("jaga",76543,8900);
    A2.display();

}