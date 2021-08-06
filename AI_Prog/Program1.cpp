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
	int a[] = {343, 342, 341, 321};
	int n = sizeof(a) / sizeof(a[0]);

	Hash h(7);
	for (int i = 0; i < n; i++)
		h.insertItem(a[i]);
	h.displayHash();

	return 0;
}
