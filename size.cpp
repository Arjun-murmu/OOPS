#include<iostream>
using namespace std;
class size_check{
    char a;
    char b;
    int c;
    float d;
    double e;
};
class size_1{
    char a;
    int b;
};
class size_2{
    char c;
    int a;
    char b;
};
class size_3{
    double e;
};

int main(){
    size_check obj;
    cout<<"Size is : "<<sizeof(obj)<<" "<<endl;
    size_1 ob;
    cout<<"Size is : "<<sizeof(ob)<<" "<<endl;
    size_2 obje;
    cout<<"Size is : "<<sizeof(obje)<<" "<<endl;
    size_3 si;
    cout<<"Size is : "<<sizeof(si)<<" "<<endl;
    return 0;
}