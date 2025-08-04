#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) 
{
    int n = nums.size();
    int lb = 0, ub = n-1;
    int mid;
    while(lb<=ub){
        mid = (lb+ub)/2;
        if(nums[mid] < target)
        {
            lb = mid+1;
        }
        else if(nums[mid] > target)
        {
            ub = mid-1;
        }
        else 
        {
        return mid;
        }
        }
    return -1;
}
int main ()
{
    vector<int>nums = {-1,0,3,5,9,12}; // output = 4
    int target = 9;
    int ans = search(nums,9);
    cout << ans << endl;
    return 0;
}