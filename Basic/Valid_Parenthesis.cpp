#include <bits/stdc++.h>
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

int main() {
	validParantheses vp;
	int n;
	cin>>n;
	while(n--){
    	string str;
    	cin>>str;
    	cout<<vp.isValid(str)<<endl;
	}
    return 0;
}

/*
Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of a single line of input, containing string 
S
S.
Output Format
For each test case, output 
1
1 if the given string is a valid parenthesis, or output 
0
0 otherwise.

Sample 1:
Input
Output
3
()(())
(()()
))((
1
0
0
*/