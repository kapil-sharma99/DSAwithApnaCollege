#include <bits/stdc++.h>
using namespace std;

class Hash
{
	int BUCKET;
	list<int> *table;

public:
	Hash(int V);
	void insertItem(int x);

	void deleteItem(int key);

	int hashFunction(int x)
	{
		return (x % BUCKET);
	}

	void displayHash();
};

Hash::Hash(int b)
{
	this->BUCKET = b;
	table = new list<int>[BUCKET];
}

void Hash::insertItem(int key)
{
	int index = hashFunction(key);
	table[index].push_back(key);
}

void Hash::displayHash()
{
	for (int i = 0; i < BUCKET; i++)
	{
		cout << i;
		for (auto x : table[i])
			cout << " --> " << x;
		cout << endl;
	}
}

int main()
{
	int a[] = {3, 13, 16, 17, 20, 22, 23, 26, 28, 29, 30, 37, 39, 41, 42, 46, 48, 65, 67, 70, 80, 84, 88, 89, 90, 91, 92, 99, 100, 101, 103, 104, 106, 108, 110, 113, 119, 120, 122, 123, 124, 130, 135, 141, 155, 157, 159, 171, 181, 185, 221, 224, 227, 238, 263, 273, 285, 288, 290, 297, 299, 301, 302, 309, 310, 315, 325, 333, 335, 341, 343, 342};
	int n = sizeof(a) / sizeof(a[0]);

	Hash h(7);
	for (int i = 0; i < n; i++)
		h.insertItem(a[i]);
	h.displayHash();

	return 0;
}
