#include<iostream>
using namespace std;

class student{
    string name,grade;
    int age,roll_no;
    public:
    void setname(string s)
    {
        name = s;
    }
    void setgrade(string g){
        grade = g;
    }
    int setage(int a){
        age = a;
    }
    int setrollno(int r){
        roll_no = r;
    }
    void get_detalish(){
        cout<<"Name : "<<name<<endl;
        cout<<"Grade : "<<grade<<endl;
        cout<<"Roll_no : "<<roll_no<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
int main(){
    student s1;
    s1.setname("Arjun Murmu");
    s1.setgrade("A+");
    s1.setage(21);
    s1.setrollno(123);
    s1.get_detalish();

    student s2;
    s2.setname("Uttam Kumar Murmu");
    s2.setgrade("A+");
    s2.setage(20);
    s2.setrollno(122);
    s2.get_detalish();
}