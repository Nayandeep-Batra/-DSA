#include <iostream>
#include <vector>
using namespace std;
int majorityElement(vector<int>& nums)
{
        int n = nums.size();
        int b = n/2;
        //sort(nums.begin(),nums.end());
        int c=1, ans = nums[0];
        for(int i=1; i<n; i++)
        {
            if(nums[i]==nums[i-1])
            {
                c++;
            }
            else
            {
                c=1;
                ans = nums[i];
            }
            if(c>b)
            return ans;
        }
    return ans;   
}
int main()
{
    vector<int> nums = {1,2,2,1,1}; // output will be 1
    
    int ans = majorityElement(nums);
    cout << ans << endl; 
    return 0;
}