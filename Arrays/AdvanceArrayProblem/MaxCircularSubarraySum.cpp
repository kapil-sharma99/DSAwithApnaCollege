#include <iostream>
#include <climits>
using namespace std;

int kadaneAlgorithm(int arr[], int n)
{
	int currentSum = 0;
	int maxsum = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		currentSum += arr[i];
		if (currentSum < 0)
		{
			currentSum = 0;
		}
		maxsum = max(maxsum, currentSum);
	}

	return maxsum;
}

int main()
{
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int wrapsum = 0;
	int nonwrapsum = 0;

	nonwrapsum = kadaneAlgorithm(arr, n);
	int totalsum = 0;
	for (int i = 0; i < n; i++)
	{
		totalsum += arr[i];
		arr[i] = -arr[i];
	}
	wrapsum = totalsum + kadaneAlgorithm(arr, n);
	cout << max(wrapsum, nonwrapsum);
	return 0;
}
