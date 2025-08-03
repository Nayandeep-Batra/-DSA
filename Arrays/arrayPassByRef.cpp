#include<iostream>
using namespace std;

void ChangeArr(int a[], int size)
{
    cout << "in function" << endl;
    for(int i=0; i<size; i++)
    a[i] = 2*a[i];
}
int main()
{
    int a[]={1,2,3};
    ChangeArr(a,3);
    cout << "in main" << endl;
    for(int i=0;i<3;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

// The above example is of call by reference. Even though call by reference is used by "Pointers" but array name
// i.e. array variable is implicitly a pointer

// a pointer variable does not store the value rather pointer stores the address of the value.

// ** IMPORTANT NOTE **

// IN PASS BY REFERENCE
// the change in formal parameters changes the actual parameters
// IN PASS BY VALUE
// the change in formal parameters does not changes changes the actual parameters