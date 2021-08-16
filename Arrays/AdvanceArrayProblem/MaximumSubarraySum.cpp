#include <iostream>
#include <climits>
using namespace std;

//---------- Non-optimised approach ----------
// int main()
// {
// 	int n;
// 	cin >> n;
// 	int sum = 0, sum1 = 0;

// 	int arr[n];
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> arr[i];
// 	}

// 	for (int i = 0; i < n; i++)
// 	{
// 		for (int j = i; j < n; j++)
// 		{
// 			for (int k = i; k <= j; k++)
// 			{
// 				sum1 += arr[k];
// 			}
// 			sum = max(sum, sum1);
// 			sum1 = 0;
// 		}
// 	}
// 	cout << sum << endl;
// 	return 0;
// }

//---------- Optimised approach ----------
int main()
{
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int currsum[n + 1];
	currsum[0] = 0;

	for (int i = 1; i <= n; i++)
	{
		currsum[i] = currsum[i - 1] + arr[i - 1];
	}

	int maxSum = INT_MIN;
	for (int i = 1; i <= n; i++)
	{
		int sum = 0;
		for (int j = 0; j < i - 1; j++)
		{
			sum = currsum[i] - currsum[j];
			maxSum = max(maxSum, sum);
		}
	}
	cout << maxSum << endl;
	return 0;
}