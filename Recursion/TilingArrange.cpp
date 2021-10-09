#include<iostream>
using namespace std;

int arrangeTile(int n) {
    if(n == 0) {
        return 0;
    }

    if(n == 1) {
        return 1;
    }

    return arrangeTile(n-1) + arrangeTile(n-2);
}

int main() {
    cout << arrangeTile(4);
}