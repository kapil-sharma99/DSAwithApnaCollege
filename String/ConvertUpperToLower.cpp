#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s = "sdafldkjfdsfsdalhiasf";

	//Lower case to Upper case
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}
	cout << s << endl;

	//Upper Case to Lower case
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += 32;
		}
	}
	cout << s << endl;

	//functional approach
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	cout << s << endl;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	cout << s << endl;
	return 0;
}