#include <iostream>
using namespace std;

int main()
{
	int originalNumber;
	int reversedNumber = 0;
	cout << "Enter the Number: " << endl;
	cin >> originalNumber;

	while (originalNumber > 0)
	{
		int lastDigit = originalNumber % 10;
		reversedNumber = reversedNumber * 10 + lastDigit;
		originalNumber = originalNumber / 10;
	}

	cout << reversedNumber;
	return 0;
}