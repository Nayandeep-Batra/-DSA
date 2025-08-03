#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int profit = 0, buy = prices[0];
    for(int i=1;i<n;i++) 
    {
        if(prices[i] > buy )
        { 
            profit = max( profit, prices[i]- buy);
        }
            buy = min( buy , prices[i]);
    }
    return profit;
}

int main()
{
   vector<int> nums = {2,4,1};
    int ans = maxProfit(nums);
    cout << ans << endl; 
    return 0;
}