#include<iostream>
#include<vector>
#include<list>
using namespace std;

class StackLinklist{
    list<int> ll;
public:
    void push(int val){
        ll.push_front(val);
    }
    void pop(){
        ll.pop_front();
    }
    int top(){
        return ll.front();
    }
    bool empty(){
        return ll.size() == 0;
    }

};
int main(){
    StackLinklist sl;
    sl.push(10);
    sl.push(20);
    sl.push(30);
    while(!sl.empty()){
        cout<<sl.top()<<" ";
        sl.pop();
    }
    cout<<endl;
    int n, val;
    cout<<"Enter a number how many push : ";
    cin>>n;
     while(n > 0){
        cout<<"Enter number ["<<n<<"] : ";
        cin>>val;
        sl.push(val);
        n--;
    }
     while(!sl.empty()){
        cout<<sl.top()<< " ";
        sl.pop();
    }

    return 0;
}
