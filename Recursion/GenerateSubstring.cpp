#include<iostream>
using namespace std;

void generateSubstring(string s, string ans) {

    if(s.length() == 0) {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);

    generateSubstring(ros, ans);
    generateSubstring(ros, ans+ch);
}

int main() {
    generateSubstring("ABC", "");
    return 0;
}