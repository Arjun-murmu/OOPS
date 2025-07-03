#include<iostream>
using namespace std;

class customer{
    string name;
    int *data;
    public:
    // customer(){
    //     cout<<"Constructor called.\n";
    //     name = "Arjun";
    //     data = new int;
    //     *data = 10;

    // }
    //Default constructor 
    customer(){
        name = "4";
    }
    customer(string name){
        this->name = name;
        cout<<name<<endl;
    }

    //Destructor
    // ~customer(){
    //     delete data; // Relise the dynamic memory
    //     cout<<"Destuctor is called.\n";
    // }
      ~customer(){
        cout<<"Destorctor is "<<name<<endl; 
        //Destorctor is oreder is reverse order.
    }
};
int main(){
    customer A1;
    customer A2("1"),A3("2"),A4("3");
    customer *A5 = new customer;
    delete A5;

}