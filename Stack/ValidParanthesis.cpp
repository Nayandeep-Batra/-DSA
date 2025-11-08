#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isMatch(char &s1, char&s2) {
    return((s1=='(' && s2==')') || (s1=='{' && s2=='}') || (s1=='[' && s2==']'));
}
    
bool isValid(string s) {
    stack<char> st;
    for(int i=0; i<s.length(); i++) {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[') {
            st.push(s[i]);
        }
        else {
            if(st.empty()) {
                return false;
            }
            else if(isMatch(st.top(),s[i])) {
                st.pop();
            }
            else
            return false;
        }
    }
    return(st.empty());
}

int main() {
    string s = "()[]{}";
    bool ans = isValid(s);
    cout << ans << endl;
}