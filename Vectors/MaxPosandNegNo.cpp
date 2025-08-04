#include <iostream>
#include <vector>
using namespace std;

int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int pos=0, neg=0, maxNo=0;
        for(int i =0; i<n; i++)
        {
            if(nums[i]>0)
            {
                pos++;
            }
            else if(nums[i]<0)
            {
                neg++;
            }
        }
        maxNo = max(pos,neg);
        return maxNo;
    }
    int main ()
{
    vector<int>nums = {-2,-1,-1,1,2,3}; // output = 3
    int ans = maximumCount(nums);
    cout << ans << endl;
    return 0;
}