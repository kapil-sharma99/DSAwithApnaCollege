#include <iostream>
using namespace std;

int BinarySearch(int n, int arr[], int key)
{
	int start = 0;
	int end = n;
	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (arr[mid] == key)
		{
			return mid;
		}
		else if (arr[mid] > key)
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}

	return -1;
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

	int key;
	cin >> key;

	int res = BinarySearch(n, arr, key);
	if (res == -1)
	{
		cout << "Element not found in array!!" << endl;
	}
	else
	{
		cout << "Element found at index: " << res + 1 << endl;
	}
	return 0;
}