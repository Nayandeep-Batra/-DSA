#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //method 1
    vector<int> vec; //size 0
    cout <<vec[0];
    return 0;

    //method 2
    vector<int> vec = {1,2,3}; //size 3
    cout<<vec[0];
    return 0;

    //method 3
    vector<int> vec (3,0); // where left digit is size of vector and right digit is the value stored at each index
    cout <<vec[0]<<endl;
    cout <<vec[1]<<endl;
    cout <<vec[2]<<endl;
    return 0;
}

// we use below command to get output for vectors
// g++ -std=c++11 VectorSyntax.cpp
// ./a.exe