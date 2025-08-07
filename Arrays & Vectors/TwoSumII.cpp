#include <iostream>
#include <vector>
using namespace std;


vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> ans;
        int st=0, end= numbers.size()-1;
        int pairSum=0;
        while(st<=end)
        {
            pairSum = numbers[st]+numbers[end];
            if(pairSum > target){
                end--;
            }
            else if(pairSum < target){
                st++;
            }
            else{
            ans.push_back(st+1);
            ans.push_back(end+1);
            break;
            }
        }
        return ans;
    }
    int main()
{
    vector<int> numbers = {2,7,11,15}; // output will be [1,2]
    int target = 9;
    
    vector<int> ans = twoSum(numbers, target);
    cout << ans[0] << "," << ans[1] << endl; 
    return 0;
}