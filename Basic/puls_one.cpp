#include<iostream>
#include<vector>
//leet code problem number : 66
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n = digits.size();
       for(int i = n-1; i >= 0; i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
       }
       digits.insert(digits.begin(), 1);
       return digits;
    }
};

int main(){
    vector<int> arr = {2, 3, 4, 5};

    Solution s;
    vector<int> result = s.plusOne(arr);

    for(size_t i = 0; i < result.size(); ++i){
        if(i) cout << ",";
        cout << result[i];
    }
    cout << endl;
    return 0;
}