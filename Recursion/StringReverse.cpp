#include<iostream>
using namespace std;

void reverseString(string n) {
    if(n.length() == 0) {
        return;
    }
    string ros = n.substr(1);
    reverseString(ros);
    cout << n[0];
}

int main() {
    string name = "BINOD";
    reverseString(name);
}