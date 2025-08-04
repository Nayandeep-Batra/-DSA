#include <iostream>
#include <vector>
using namespace std;

int findNumbers(vector<int>& nums) {
        int evenNo=0;
        int n = nums.size();
        for(int val : nums)
        {
            int nDigits=0;
            while(val!=0)
            {
                nDigits++;
                val = val/10;
            }
            if(nDigits % 2==0)
            {
                evenNo++;
            }
        }
        return evenNo;
    }
int main ()
{
    vector<int>nums = {12,345,2,6,7896}; // output = 2
    int ans = findNumbers(nums);
    cout << ans << endl;
    return 0;
}