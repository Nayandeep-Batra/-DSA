// different Vector function are_
// size , push_back , pop_back , front , back , at , ... etc
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // //size function
    // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    // cout << "Size = " << vec.size() << endl; // this gives the size of the vectors
    // for(char val : vec) 
    // {
    //     cout<< val<<endl;
    // }

    //push_back function
    vector<int> vec;
    cout << "Size = " << vec.size() << endl;
    vec.push_back(25); // this is used to add an element at the end/back side of the vector
    vec.push_back(35);
    vec.push_back(45);  
    cout << "After Push back Size = " << vec.size() << endl;
    for(int i : vec)
    {
        cout << i << endl;
    }

    //pop_back function
    cout << "Size = " << vec.size() << endl;
    vec.pop_back(); // this is used to remove an element from the end/back side of the vector
    cout << "After Pop back Size = " << vec.size() << endl;
    for(int i : vec)
    {
        cout << i << endl;
    }

    // front function
    cout << "Size = " << vec.size() << endl;
    cout << "Element at the front is ="<< vec.front()<< endl;; // this is used to print an element that is at the front side of the vector
    
    // back function
    cout << "Size = " << vec.size() << endl;
    cout << "Element at the back is ="<< vec.back()<< endl;; // this is used to print an element that is at the back side of the vector

    // at function
    cout << "Size = " << vec.size() << endl;
    cout << "Element at the index i is ="<< vec.at(1)<< endl;; // this is used to print an element that is at a particular index of the vector
    return 0;

}

// to check any function comment the size functions and to access size function comment all other functions