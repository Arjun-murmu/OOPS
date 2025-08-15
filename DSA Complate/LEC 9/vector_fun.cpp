#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec;
    cout<<"Vector size : "<<vec.size()<<endl; // 0
    vec.push_back(40);
    vec.push_back(89);
    vec.push_back(4);
    vec.push_back(3);
    vec.push_back(24);
    // 40 89 4 3 24 
    cout<<"Vector size : "<<vec.size()<<endl; // 5
    cout<<"Vector capacity : "<<vec.capacity()<<endl; //8

    vec.pop_back();
    // 40 89 4 3
    vec.pop_back();
    //40 89 4 

    cout<<vec.front()<<endl;
    //40

    cout<<vec.back()<<endl;
    //4

    cout<<vec.at(1)<<endl;
    //89

    cout<<"Vector capacity : "<<vec.capacity()<<endl; //8

    for(int i: vec){
        cout<<i<< " ";
    }
    cout<<"Vector capacity : "<<vec.capacity()<<endl; //8
    return 0;
}