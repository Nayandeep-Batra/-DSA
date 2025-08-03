#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int a[n]; // array declaration
    cout << "\nEnter elements in an array" <<endl;

    for(int i=0;i<n;i++) // loop for taking input in an array
    {
        cin >> a[i];
    }

    for(int i=0;i<n;i++) // loop for showing output of an array
    {
        cout << a[i] << endl;
    }
}