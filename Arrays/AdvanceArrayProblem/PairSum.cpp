#include <iostream>
using namespace std;

// ---------- NON_OPTIMISED APPROACH ----------
// bool pairSum(int arr[], int n, int k)
// {
// 	for (int i = 0; i < n; i++)
// 	{
// 		for (int j = i + 1; j < n; j++)
// 		{
// 			if ((arr[i] + arr[j]) == k)
// 			{
// 				cout << i + 1 << " " << j + 1 << endl;
// 				return true;
// 			}
// 		}
// 	}
// 	return false;
// }

bool pairsum(int arr[], int n, int k)
{
	int low = 0;
	int high = n - 1;

	while (low < high)
	{
		if ((arr[low] + arr[high]) == k)
		{
			cout << low + 1 << " " << high + 1 << endl;
			return true;
		}
		else if ((arr[low] + arr[high]) > k)
		{
			high--;
		}
		else
		{
			low++;
		}
	}
	return false;
}

int main()
{
	int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
	int k = 31;

	cout << pairsum(arr, 8, k);
	return 0;
}