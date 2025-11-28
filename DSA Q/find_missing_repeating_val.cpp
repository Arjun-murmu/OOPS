#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        int n = grid.size();
        int a, b;
        unordered_set<int> s;
        int expected_sum = 0, actual_sum = 0; 
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                actual_sum += grid[i][j];
                if(s.find(grid[i][j]) != s.end()){
                    a = grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);
            }
        }
        expected_sum = (n*n)*(n*n + 1) / 2;
        b = expected_sum+a-actual_sum;
        ans.push_back(b);

        return ans;
    }
};

// ----------------------------------------

void preinput() {
    vector<vector<int>> grid = {
        {1, 3},
        {2, 2}
    };

    Solution obj;
    vector<int> ans = obj.findMissingAndRepeatedValues(grid);

    cout << "Repeated: " << ans[0] << endl;
    cout << "Missing: " << ans[1] << endl;
}

void userinput() {
    int n;
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }

    Solution obj;
    vector<int> ans = obj.findMissingAndRepeatedValues(grid);

    cout << ans[0] << " " << ans[1] << endl;
}

// ----------------------------------------

int main() {
    // Call either demo input OR user input
    // preinput();   // for fixed example
    userinput();    // for user input
    preinput();

    return 0;
}