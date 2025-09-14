#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=1; i<n; i++) {
            if(nums[i-1]==nums[i]){
                return true;
            }
        }
        return false;
    }

int main()
{
    vector<int> nums = {1,2,3,1}; // output will be 1    
    bool ans = containsDuplicate(nums);
    cout << ans << endl; 
    return 0;
}