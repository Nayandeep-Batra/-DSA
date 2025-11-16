#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void QueueReverse (queue<int> &q) {  // TC O(n)  SC  O(n)
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

int main() {
    queue<int> org;
    for(int i=1; i<=10; i++) {
        org.push(i);
    }

    QueueReverse(org);

    for(int i=1; i<=10; i++) {
        cout << org.front() << " ";
        org.pop();
    }
    cout << endl;
    
}