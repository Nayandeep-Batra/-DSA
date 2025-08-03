#include <iostream>
#include <vector>
using namespace std;

vector<int> TwoSum(vector<int>& nums, int target)
{
        vector<int> ans;
        int n = nums.size();
        int i = 0, j = n-1;
        while(i != j)
        {
            int pairSum = nums[i] + nums[j];
            if(pairSum == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
            else if(pairSum > target)
            {
                j--;
            }       
            else if(pairSum < target)
            {
                i++;
            }     
        }
        return ans;
}
int main()
{
    vector<int> nums = {2,7,11,15}; // output will be 9
    int target = 9;
    
    vector<int> ans = TwoSum(nums, target);
    cout << ans[0] << "," << ans[1] << endl; 
    return 0;
}