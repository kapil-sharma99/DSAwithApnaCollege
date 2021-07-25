#include <iostream>
using namespace std;

int main()
{
	int number;
	int sum = 0;
	cout << "Enter the Number: " << endl;
	cin >> number;

	int numberCopy = number;
	while (number > 0)
	{
		int lastDigit = number % 10;
		sum = sum + (lastDigit * lastDigit * lastDigit);
		number /= 10;
	}

	if (sum == numberCopy)
	{
		cout << "Armstrong Number!!" << endl;
	}
	else
	{
		cout << "Not an Armstrong Number!!" << endl;
	}
	return 0;
}