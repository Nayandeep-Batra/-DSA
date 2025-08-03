#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int smallest = INT32_MAX; 
    int largest = INT32_MIN; 
    for(int i=0;i<n;i++) 
    {
        if(smallest > prices[i])
        { 
            smallest = prices[i];
            if(smallest == prices[n-1]){
                return 0;
            }
            for(int j= i+1; j<n; j++)
            { 
            if(largest < prices[j])
            largest = prices[j];
            }
        }
    }
    int profit = largest - smallest;
    return profit;
}

int main()
{
   vector<int> nums = {6,8,1};
    int ans = maxProfit(nums);
    cout << ans << endl; 
    return 0;
}