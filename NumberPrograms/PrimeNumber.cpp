#include <iostream>
using namespace std;

int main()
{
	int n;
	bool flag = 0;
	cout << "Enter the Number to check: " << endl;
	cin >> n;

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			cout << "Non-Prime Number" << endl;
			flag = 1;
			break;
		}
	}

	if (flag == 0)
	{
		cout << "Prime Number!" << endl;
	}
	return 0;
}