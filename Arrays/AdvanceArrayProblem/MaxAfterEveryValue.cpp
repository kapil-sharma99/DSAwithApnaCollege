#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int mx = -1999999;
	for (int i = 0; i < n; i++)
	{
		mx = max(arr[i], mx);
		cout << "Maximum Element in " << i + 1 << "th iteration: " << mx << endl;
	}
	return 0;
}