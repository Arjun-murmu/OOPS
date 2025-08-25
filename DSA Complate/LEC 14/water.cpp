#include<iostream>
#include<vector>
#include<algorithm> // for max, min
using namespace std;

int maxArea(vector<int>& height) {
    int maxWater = 0;
    for(int left = 0;left < height.size();left++){
        for(int right = left+1;right < height.size();right++){
            int weight = right-left;
            int height_tang = min(height[left], height[right]);
            int area = weight * height_tang;
            maxWater = max(maxWater , area);
        }
    }
    return maxWater;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int result = maxArea(height);
    cout<<"Max water containe : "<<result<<endl;
    cout<<"Time Complexity : O(n^2)."<<endl;

    return 0;
}