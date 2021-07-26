#include <iostream>
using namespace std;

int factorial(int n)
{
	int factorial = 1;
	for (int i = 2; i <= n; i++)
	{
		factorial *= i;
	}
	return factorial;
}

int main()
{
	int n, r;
	cin >> n >> r;

	int ans = factorial(n) / (factorial(r) * factorial(n - r));
	cout << ans << endl;
	return 0;
}