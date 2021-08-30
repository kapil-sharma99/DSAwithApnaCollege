#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string s1 = "fam";
	string s2 = "ily";
	string abc = "Motivation of the day";
	abc.clear();
	cout << abc << endl;

	cout << s1 + s2 << endl;
	s1.append(s2);
	cout << s1 << endl;

	string s3 = "nincompoop";
	s3.erase(3, 3);
	cout << s3 << endl;
	cout << s3.find("nin") << endl;

	s1.insert(2, "lol");
	cout << s1 << endl;
	cout << s1.length() << endl;

	string s = s3.substr(3, 4);
	cout << s << endl;

	string x = "786";
	int y = stoi(x);
	cout << y << endl;
	x = to_string(y);
	cout << x << endl;

	string ss = "sdsfsdagaeoise;ihs;hsd;ih";
	sort(ss.begin(), ss.end());
	cout << ss << endl;
	return 0;
}