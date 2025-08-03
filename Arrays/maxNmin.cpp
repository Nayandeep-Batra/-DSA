#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int a[n]; // array declaration
    cout << "\nEnter elements in an array" <<endl;

    for(int i=0;i<n;i++) 
    {
        cin >> a[i];
    }
    int smallest = INT64_MAX; // INT64_MAX gives the largest possible number i.e. +ve infinity
    int largest = INT64_MIN; // INT64_MIN gives the smallest possible number i.e. -ve infinity
    for(int i=0;i<n;i++) 
    {
        if(smallest > a[i]) // we can use predefined min and max functions instead of if else and then checking
        smallest = a[i]; // or max, for example check below

        smallest = min(a[i],smallest); // this is the example for checking minimum among two values using min function
        if(largest < a[i])
        largest = a[i];
    }
    cout << "Smallest Number is : " << smallest << endl;
    cout << "Largest Number is : " << largest << endl;
}