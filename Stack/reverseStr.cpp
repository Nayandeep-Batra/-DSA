#include <iostream>
#include <stack>
#include <string>
using namespace std;

void PushBottom(stack<int> &s, int val) {
    if(s.empty()) {
        s.push(val);
        return;
    }

    int temp = s.top();
    s.pop();
    PushBottom(s, val);
    s.push(temp);
}

void reverse(stack <int> &s){
if(s.empty()) {
    return;
}

    int temp = s.top();
    s.pop();
    reverse(s);
    PushBottom(s,temp);
}

int main() {
stack<int> s;
s.push(3);
s.push(2);
s.push(1);

while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    reverse(s);

while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}