#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
	int ans = 0;
	int x = 1;
	while (n > 0)
	{
		int y = n % 10;
		ans += x * y;
		x *= 2;
		n /= 10;
	}
	return ans;
}

int octalToDecimal(int n)
{
	int ans = 0;
	int a = 1;
	while (n > 0)
	{
		int y = n % 10;
		ans += a * y;
		a *= 8;
		n /= 10;
	}
	return ans;
}

int hexadecimalToDecimal(string n)
{
	int ans = 0;
	int x = 1;

	int s = n.size();
	for (int i = s - 1; i >= 0; i--)
	{
	}
}

int32_t main()
{
	int n;
	cin >> n;
	string hexa;
	cin >> hexa;

	cout << "BinaryToDecimal: " << binaryToDecimal(n) << endl;
	cout << "OctalToDecimal: " << octalToDecimal(n) << endl;
	cout << "HexadecimalToDecimal: " << hexadecimalToDecimal(hexa) << endl;

	return 0;
}