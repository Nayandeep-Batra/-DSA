#include <iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int>& nums) {
    int currMax=1,currMin=1, maxProd=nums[0];
        
    for(int val : nums){
        if(val < 0)
        {
            swap(currMax, currMin);
        }
        currMax = max(val, currMax*val);
        currMin = min(val, currMin*val);
        maxProd = max(currMax , maxProd);
    }
    return maxProd;
}
int main()
{
    vector<int> nums = {2,3,-2,4}; // output will be 6
    
    int ans =maxProduct(nums);
    cout << ans << endl; 
    return 0;
}