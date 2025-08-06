#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
        int n= height.size();
        int maxWater=0;
        for(int i =0; i<n; i++)
        {
            for(int j =i+1; j<n; j++)
            {
                int ht = min(height[i] , height[j]);
                int wd = j-i;
                int area = ht * wd;
                maxWater = max(maxWater , area);
            }
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