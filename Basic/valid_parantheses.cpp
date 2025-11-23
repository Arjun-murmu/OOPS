#include<iostream>
#include<stack>
#include<list>
#include<vector>
using namespace std;

class validParantheses{
public:
    bool isValid(string str){
        stack<char> st;
        for(int i = 0; i < str.length(); i++){
            if(str[i] == '(' || str[i] == '{' || str[i] == '['){ //opening
                st.push(str[i]);
            }
            else{ // closing
                if(st.size() == 0){ // closing > opening
                    return false;
                }
                // if(str[i] == ')' || str[i] == '}' || str[i] == ']'){
                //     st.pop();
                // }
                if((st.top() == '(' && str[i] == ')') || 
                    (st.top() == '{' && str[i] == '}') || 
                    (st.top() == '[' && str[i] == ']')){
                    st.pop();
                }
                else{ //no matching
                    return false;
                }
            }
        }
        return st.size() == 0;
    }
};

int main(){
    validParantheses vp;
    string str = "[{()}]";
    // cout<<vp.isValid(str)<<endl;
    if(vp.isValid(str)){
        cout<<"valid string.";
    }
    else{
        cout<<"Not valid.";
    }
    return 0;
}