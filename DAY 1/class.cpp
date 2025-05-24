#include<iostream>
using namespace std;

class student{
    public:
    string name,grade;
    int age,roll_no;
};
int main(){
    student s1;
    s1.name = "Arjun Murmu";
    s1.grade = "A+";
    s1.age = 21;
    s1.roll_no = 9923;
    cout<<"Name : "<<s1.name<<"\n"<<"Age : "<<s1.age<<"\n"<<"Roll No : "
    <<s1.roll_no<<"\n"<<"Grade : "<<s1.grade<<endl;
    
    student s2;
    s2.name = "Abinash Murmu";
    s2.grade = "A+";
    s2.age = 21;
    s2.roll_no = 9924;
    cout<<"Name : "<<s2.name<<"\n"<<"Age : "<<s2.age<<"\n"<<"Roll No : "
    <<s2.roll_no<<"\n"<<"Grade : "<<s2.grade<<endl;

}