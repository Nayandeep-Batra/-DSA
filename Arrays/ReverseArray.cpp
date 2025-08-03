// In this program we are going to use
// 2 POINTER APPROACH 

// this algorithm is one of the most important algorithm for learning and practicing DSA
// So, this is an important program

#include<iostream>
using namespace std;

void reverseArray (int arr[], int size)
{
    int start = 0, end = size-1;
    while(start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    } 
}
int main()
{
    int arr[]= {4,2,7,8,1,2,5};
    int size = 7;
    reverseArray(arr,size);
    for(int i=0;i<size;i++) // loop for showing output of an array
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// Time Complexity = O(n)