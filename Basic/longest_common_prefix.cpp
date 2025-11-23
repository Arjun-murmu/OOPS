#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for (int i = 0; i < strs[0].length(); i++) {
            char ch = strs[0][i];
            bool match = true;

            for (int j = 1; j < strs.size(); j++) {
                if (strs[j].size() <= i || strs[j][i] != ch) {
                    match = false;
                    cout<<"No Prefix.";
                    break;
                }
            }

            if (!match){ 
                break;
            }
            ans.push_back(ch);
        }
        return ans;
    }
};

int main() {
    int n;
    cin >> n;
    vector<string> strs(n);
    for(int i = 0; i < n; i++){
        cin >> strs[i];
    }

    Solution s;
    cout << s.longestCommonPrefix(strs);
    return 0;
}
