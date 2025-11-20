#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moveZeroes(vector<int>& nums) {
    vector<int> ans;
    int pt = 0;
    int n = nums.size();
    for(int i=0; i<n; i++) {
        if(nums[i] != 0){
            ans.push_back(nums[i]);
            pt++;
        }
    }
    while(pt < n) {
        ans.push_back(0);
        pt++;
    }
    // write result back into the input vector
    nums = ans;
}

int main() {
    vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);
    for(int i=0; i<nums.size(); i++)
    cout << nums[i] << endl;
}