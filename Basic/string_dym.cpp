#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> str(n);

    for(int i = 0; i < n; i++){
        cin >> str[i];
    }

    return 0;
}
