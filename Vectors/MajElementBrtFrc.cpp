#include <iostream>
#include <vector>
using namespace std;
int majorityElement(vector<int>& nums)
{
        int n = nums.size();
        int b = n/2;
        for(int i : nums)
        {
            int c=0;
            for(int j : nums)
            {
                if(j == i)
                {
                    c++;
                }
            }
            if(c>b){
            return i;
            }
        }
    return -1;   
}
int main()
{
    vector<int> nums = {1,2,2,1,1}; // output will be 1
    
    int ans = majorityElement(nums);
    cout << ans << endl; 
    return 0;
}