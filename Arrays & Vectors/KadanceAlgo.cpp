#include <iostream>
#include <vector>
using namespace std;

    int maxSubArray(vector<int>& nums) {
        int currSum=0, maxSum=INT32_MIN;
        
        for(int val : nums){
            currSum += val;
            maxSum = max(currSum , maxSum);
            if(currSum < 0){
                currSum=0;
            }
        }
        return maxSum;
    }
    int main()
{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4}; // output will be 6
    int sum = maxSubArray(nums);
    cout << "maximum Sum of Subarray is : " << sum;
    cout << endl;
    return 0;
}
