#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int> ans(n,1);
        //prefix
        for(int i=1; i<n; i++){
            ans[i]= ans[i-1] * nums[i-1];
        }
        //suffix
        int suffix = 1;
        for(int i=n-2; i>=0; i--){
            suffix *= nums[i+1];
            ans[i] *= suffix;
        }
        return ans;
    }
    // In this approach Time Complexity is O(n) and Space Complexity is O(1) (excluding output array)
int main()
{
    vector<int> nums = {1,2,3,4}; // output will be 24,12,8,6
    vector<int> answer = productExceptSelf(nums);
    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    } 
    return 0;
}