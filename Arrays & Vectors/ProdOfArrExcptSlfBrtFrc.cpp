#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int> ans(n,1);
        for ( int i =0; i<n; i++){
            int prod = 1;
            for (int j=0; j<n; j++)
            {
                if( i != j)
                {
                    prod *= nums[j];
                }
            }
            ans[i]= prod;
        }
        return ans;
        
    }
int main()
{
    vector<int> nums = {1,2,3,4}; // output will be 24,12,8,6
    vector<int> answer = productExceptSelf(nums);
    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    } 
    return 0;
}