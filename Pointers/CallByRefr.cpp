#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 20;
	int b = 40;

	cout << "Before Swapping: " << endl;
	cout << a << endl
			 << b << endl;

	swap(&a, &b);
	cout << "After Swapping: " << endl;
	cout << a << endl
			 << b << endl;
}