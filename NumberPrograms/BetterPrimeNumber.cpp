#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	int flag = 0;
	cout << "Enter the Number: " << endl;
	cin >> n;

	for (int i = 2; i <= sqrt(n); i++)
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
		cout << "Prime Number!!" << endl;
	}
	return 0;
}