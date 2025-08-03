#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    int c=0,a;
    char ch='c';
    for(char val : vec) // this is called for each loop
    {
        if(val == ch)
        {
            c=1;
            a=val;
            break;
        }
    }
    if(c==1)
    cout << "Element found at index :" << a << endl;
    else
    cout << "Element not found" << endl;
    return 0;
}