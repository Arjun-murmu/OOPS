#include<iostream>
using namespace std;
class student{
    public:
    string name;
};
int main(){
    student *s = new student;
    (*s).name = "Arjun";
    cout<<s->name<<""<<endl;

    // student *s = new student;
    // s->name = "Arjun";

    cout << "Student name: " << s->name << endl;
    cout << "Address (stored in s): " << s << endl;

    delete s;
    return 0;
}

