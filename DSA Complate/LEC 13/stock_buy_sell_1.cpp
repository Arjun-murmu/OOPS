#include<iostream>
#include<vector>
#include<algorithm> // for max, min
using namespace std;

int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int bestBuy = prices[0];
        for(int i = 0;i<prices.size();i++){
            if(prices[i] > bestBuy){
                maxProfit = max(maxProfit,prices[i]-bestBuy);
            }
            bestBuy = min(bestBuy,prices[i]);
            cout<<" Best Buy : "<<bestBuy<<endl;
        }
        return maxProfit;
}

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int result = maxProfit(prices);
    cout<<"Max profit : "<<result<<endl;

    return 0;
}