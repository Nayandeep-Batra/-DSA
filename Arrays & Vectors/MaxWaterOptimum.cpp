#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
        int n= height.size();
        int maxWater=0;
        int left = 0, right = n-1;
        while(left!= right)
        {
            int ht = min(height[left] , height[right]);
            int wd = right-left;
            int area = ht * wd;
            maxWater = max(maxWater , area);
            
            height[left]<height[right] ? left++ : right--;
        }    
        return maxWater;
}
int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7}; // output will be 49
    
    int ans = maxArea(height);
    cout << ans << endl; 
    return 0;
}