#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int lastNonZero = 0;
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        if (nums[i] != 0) {
            if (i != lastNonZero) {
                swap(nums[lastNonZero], nums[i]);
            }
            ++lastNonZero;
        }
    }
}

int main() {
    vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);
    for(int i=0; i<nums.size(); i++)
    cout << nums[i] << endl;
}