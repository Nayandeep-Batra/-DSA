#include<iostream>
#include<vector>
using namespace std;

int reverseVector (vector <int>& vec , int size)
{
    int start = 0, end = size-1;
    while(start < end)
    {
        swap(vec[start],vec[end]);
        start++;
        end--;
    } 
}
int main()
{
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10}; //size 10
    int size=10; 
    reverseVector(vec ,size);
    for(int i=0;i<size;i++) // loop for showing output of an array
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}