#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isDuplicate(string str) {
    stack<char> s;

    for(int i=0; i<str.size(); i++) {
        char ch = str[i];
        if(ch != ')') { // Non-closing Condition
            s.push(ch);
        }              
        else {  // Closing Bracket Condition
            if(s.top()=='(') {
                return true; // Duplicate
            }
            while(s.top() != '(') {
                s.pop();
            }
            s.pop();
        }
    }
    return false;
}

int main() {
    string s = "((a+b)+(c+d))";
    bool ans = isDuplicate(s); // if true then duplicate is present and false then duplicate is absent
    cout << ans << endl;
}