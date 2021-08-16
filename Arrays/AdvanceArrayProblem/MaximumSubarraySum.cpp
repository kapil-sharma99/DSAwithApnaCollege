#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int sum = 0, sum1 = 0;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			for (int k = i; k <= j; k++)
			{
				sum1 += arr[k];
			}
			sum = max(sum, sum1);
			sum1 = 0;
		}
	}
	cout << sum << endl;
	return 0;
}