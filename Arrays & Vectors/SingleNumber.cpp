#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums)
{
        int ans=0;
        for(int val : nums){
            ans ^= val;  // this algorithm is solved using bitwise XOR
        }
        return ans;
}
int main()
{
    vector<int> nums = {4,1,2,1,2}; // output will be 4
    int sn = singleNumber(nums);
    cout << "Single Number is : " << sn;
    cout << endl;
    return 0;
}