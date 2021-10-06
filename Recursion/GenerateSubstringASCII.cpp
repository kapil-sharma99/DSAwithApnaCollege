#include<iostream>
using namespace std;

void generateSubstringASCII(string s, string ans) {
    if(s.length() == 0) {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    int ascii = ch;
    string ros = s.substr(1);

    generateSubstringASCII(ros, ans);
    generateSubstringASCII(ros, ans+ch);
    generateSubstringASCII(ros, ans+to_string(ascii));
}

int main() {
    generateSubstringASCII("AB", "");
    return 0;
}