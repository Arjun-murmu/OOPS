#include <iostream>
using namespace std;

class Student {
    string name, grade;
    int age, roll_no;

public:
    void setName(string s) {
        if (s.size() == 0) {
            cout << "Invalid name." << endl;
            return;
        }
        name = s;
    }

    void setGrade(string g) {
        grade = g;
    }

    void setAge(int a) {
        if (a < 0 || a > 100) {
            cout << "Invalid age." << endl;
            return;
        }
        age = a;
    }

    void setRollNo(int r) {
        roll_no = r;
    }

    void getDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Age: " << age << endl;
    }

    void getGrade(int pin) {
        if (pin == 1234) {
            cout << "Grade: " << grade << endl;
        } else {
            cout << "Wrong PIN. Cannot show grade." << endl;
        }
    }
};

int main() {
    Student s1;
    s1.setName("Arjun Murmu");
    s1.setGrade("A+");
    s1.setAge(21);
    s1.setRollNo(123);
    s1.getDetails();
    s1.getGrade(1234);  // correct PIN
    s1.getGrade(0000);  // wrong PIN

    cout << endl;

    Student s2;
    s2.setName("Uttam Kumar Murmu");
    s2.setGrade("A+");
    s2.setAge(20);
    s2.setRollNo(122);
    s2.getDetails();
    s2.getGrade(1234);  // correct PIN

    return 0;
}
