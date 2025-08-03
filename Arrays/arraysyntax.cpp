#include<iostream>
using namespace std;
int main()
{
    int a[5]= {1,3,5,7,9}; // array declaration
    cout << sizeof(a) << endl;

    for(int i=0;i<5;i++) // traversal in an array
    {
        cout << a[i] << endl;
    }
}