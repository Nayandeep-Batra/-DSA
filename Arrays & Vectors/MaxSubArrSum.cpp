// if the size of an array is n, then total no. of subarray is 

// subarray = n*(n+1)/2

// ** IN THIS ALGORITHM, WE PRINT THE SUM OF THE SUBARRAY WHICH WILL BE MAXIMUM **

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n=5;
    int arr[5]= {1,2,3,4,5};
    
    int maxSum = INT32_MIN;
    for(int st = 0; st<n ; st++)
    {
        int currSum=0;
        for(int end = st; end<n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum , maxSum); 
        }
    }
    cout << "maximum subarray sum = " << maxSum << endl;
    return 0;
}