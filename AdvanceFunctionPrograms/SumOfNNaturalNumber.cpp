#include <iostream>
using namespace std;

int sum(int n)
{
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		ans += i;
	}
	return ans;
}

int32_t main()
{
	int n;
	cout << "Enter the value of n: " << endl;
	cin >> n;

	cout << sum(n) << endl;
}