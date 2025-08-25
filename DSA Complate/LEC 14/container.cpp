#include<iostream>
#include<vector>
#include<algorithm> // for max, min
using namespace std;

int maxArea(vector<int>& height) {
    int maxWater = 0;
    int left_point = 0, right_point = height.size() - 1;
    while(left_point < right_point){
    int width = right_point - left_point;
    int ht = min(height[left_point], height[right_point]);
    int area = width * ht;
    maxWater = max(maxWater, area);

    height[left_point] < height[right_point] ? left_point ++ : right_point --;
    }
    return maxWater;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int result = maxArea(height);
    cout<<"Max water containe : "<<result<<endl;
    cout<<"Time Complexity : O(n)."<<endl;

    return 0;
}