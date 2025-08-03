#include<iostream>
using namespace std;
int LinearSearch(int a[],int search,int n)
{
    for(int i=0;i<n;i++) // loop for performing linear search
    {
        if (search == a[i])
        {
            return i;
            break;
        }
    }
    return -1;
}
int main()
{
    int n,answer;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int a[n]; // array declaration
    cout << "\nEnter elements in an array" <<endl;
    for(int i=0;i<n;i++) // loop for taking input in an array
    {
        cin >> a[i];
    }
    int search;
    cout << "Enter search Element :";
    cin >> search;
    answer = LinearSearch(a,search,n);
    if(answer  != -1)
    {
        cout << "\nElement found at index : " << answer <<endl;
    }
    else
        cout << "\nElement found at index : " << answer <<endl;
}

// Time Complexity = O(n)