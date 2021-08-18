#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();

	char arr[n + 1];
	cin.getline(arr, n);
	cin.ignore();

	int i = 0;
	int currentLength = 0, maxLength = 0;
	int st = 0, maxSt = 0;
	while (1)
	{
		if (arr[i] == ' ' || arr[i] == '\0')
		{
			if (currentLength > maxLength)
			{
				maxLength = currentLength;
				maxSt = st;
			}
			currentLength = 0;
			st = i + 1;
		}
		else
			currentLength++;
		if (arr[i] == '\0')
		{
			break;
		}
		i++;
	}
	cout << maxLength << endl;
	for (int i = 0; i < maxLength; i++)
	{
		cout << arr[i + maxSt];
	}
	cout << endl;
	return 0;
}