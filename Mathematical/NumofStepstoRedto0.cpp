#include <iostream>
using namespace std;

int numberOfSteps(int num) {
        int count = 0;
        while(num!=0)
        {
            if(num %2 ==0)
            {
                num=num/2;
                count++;
            }
            else
            {
                num-=1;
                count++;
            }
        }
        return count;
    }
    int main()
    {
        int nums=14;
        int ans = numberOfSteps(nums);
        cout << ans << endl;
        return 0;
    }