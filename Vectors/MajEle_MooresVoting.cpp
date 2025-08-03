// In this program we are using Moore's Voting Algorithm
// This is one of the most important algoritm for DSA
// this algorithm has time complexity = O(n)

#include <iostream>
#include <vector>
using namespace std;
int majorityElement(vector<int>& nums)
{
        int n = nums.size();
        int b = n/2, ans=0, c=0;
        for(int i=0; i<n; i++)
        {
            if(c == 0)
            {
                ans= nums[i];
            }
            if(ans == nums[i])
            {
                c++;
            }
            else
            {
            c--;
            }
        }
        int count = 0;
        for(int val : nums)
        {
            if(val == ans)
            {
                count ++;
            }
        }
        if(count > b)
        return ans;
        else
        return -1;   
}
int main()
{
    vector<int> nums = {1,2,2,1,1}; // output will be 1
    
    int ans = majorityElement(nums);
    cout << ans << endl; 
    return 0;
}