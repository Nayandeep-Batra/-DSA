#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& a) {
    int st =1, end = a.size()-2;
     while(st<=end){
        int mid = st + (end-st)/2;
        if(a[mid-1] < a[mid] && a[mid]>a[mid+1]){
            return mid;
        }
        else if(a[mid-1]<a[mid]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main ()
{
    vector<int>nums = {0,10,5,2}; // output = 1
    int ans = peakIndexInMountainArray(nums);
    cout << ans << endl;
    return 0;
}