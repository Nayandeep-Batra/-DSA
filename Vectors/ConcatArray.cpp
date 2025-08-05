#include <iostream>
#include <vector>
using namespace std;


vector<int> getConcatenation(vector<int>& nums) {
    int n=nums.size();
    vector <int> ans (2*n);
    for(int i = 0; i<n; i++)
    {
        ans[i]= nums[i];
        ans[i+n] = nums[i];
    }
    return ans;
}
int main ()
{
    vector<int>nums = {1,2,1}; // output = {1,2,1,1,2,1}
    vector<int>ans = getConcatenation(nums);
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}