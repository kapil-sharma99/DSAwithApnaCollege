#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s = "6874681846841351";
	sort(s.begin(), s.end(), greater<int>()); //for reverse sorting
	cout << s << endl;
	return 0;
}