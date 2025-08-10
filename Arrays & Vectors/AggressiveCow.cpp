#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int>& arr, int n, int c, int largestMinDist){ 
    int cows = 1, lastPos= arr[0];
    for(int i=0; i<n; i++){ //O(n)
        if(arr[i]-lastPos>= largestMinDist){
            cows++;
            lastPos = arr[i];
        }
        if(cows == c){
            return true;
        }
    }
    return false;
}

int largestMinDistance(vector<int>arr, int n, int c){  //O(logn * n)
    sort(arr.begin() , arr.end()); // O(n log n)
    int st = 1, end= arr[n-1]-arr[0], ans=-1;
    while(st <= end){
        int mid = st+(end-st)/2;
        if(isPossible(arr,n,c,mid)){ // right
            ans = mid;
            st = mid+1;
        }
        else{ //left
            end = mid-1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1,2,8,4,9}; // output will be 3
    int n = 5, c = 3;
    cout << largestMinDistance(arr,n,c) << endl; 
    return 0;
}