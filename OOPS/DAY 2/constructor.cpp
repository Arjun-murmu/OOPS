#include<iostream>
using namespace std;

class customer{
    string name;
    int acc_no;
    int balance;

    //Default constructor
    public:
    customer(){
        cout<<"This is default constructor.\n";
    }
};

int main(){
    customer A1;
}