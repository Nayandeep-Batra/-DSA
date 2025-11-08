#include <iostream>
#include <string>
using namespace std;

bool areAlmostEqual(string s1, string s2) {
    if(s1==s2) {
        return true;
    }
    int counts1[26]={0};
    int counts2[26]={0};
    int diff=0;
    for(int i=0; i<s1.length(); i++) {
        char s1Char = s1[i];
        char s2Char = s2[i];
        if(s1Char != s2Char) {
            diff++;
            if(diff > 2) {
                return false;
            }
        }
        counts1[s1Char-'a']++;
        counts2[s2Char-'a']++;
    }
    for(int i=0; i<26; i++) {
        if(counts1[i] != counts2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string s1= "bank";
    string s2 = "kanb";
    bool ans = areAlmostEqual(s1,s2);
    cout << ans << endl;
}