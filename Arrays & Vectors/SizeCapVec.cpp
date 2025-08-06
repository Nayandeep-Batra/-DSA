#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << vec.size() << endl; //5
    cout << vec.capacity() << endl; //8

    // if we enter new elements in a vector and it does not have space for it, so the capacity of vector will double
    // This is because, vectors uses dynamic allocation of memory and it uses heap memory instead of stack
    // Array uses static allocation of memory and it uses stack
    return 0;
}