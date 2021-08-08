#include <iostream>
using namespace std;

int linearSearch(int n, int arr[], int key)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == key)
		{
			return i;
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

	int res = linearSearch(n, arr, key);
	if (res == -1)
	{
		cout << "Element not in array!!" << endl;
	}
	else
	{
		cout << "Element found at position: " << res + 1 << endl;
	}
}