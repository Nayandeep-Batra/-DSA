#include<iostream>
#include<string>
using namespace std;

string removeOccurrences(string s, string part) {
    int l= part.length();
    while(s.find(part)<s.length()) {
        s.erase(s.find(part),l);
    }
    return s;

}
int main() {
    string s = "daabcbaabcbc"; //output = "dab"
    string part = "abc";
    string ans = removeOccurrences(s,part);
    cout << ans << endl; 
}