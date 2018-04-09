#include "std_lib_facilities.h"
using namespace std;

int main()
{
	vector<int> niz;

	cout << "Unesi niz:";
	int temp;
	while (cin >> temp)
	{
		niz.push_back(temp);
	}

	int indeks = niz.size();
	cout << "Zadatak 1:" << endl;
	for (int i = indeks - 1; i >= 0; i--)
	{
		cout << niz[i];
		if (i != 0)
		{
			cout << ", ";
		}
	}
	cout << endl;

	cout << "Zadatak 2:" << endl;
	for (int i = 0; i < indeks; i++)
	{
		if (i % 2 == 0)
		{
			cout << niz[i] << " ";
		}
	}
	cout << endl;

	for (int i = 0; i < indeks; i++)
	{
		if (i % 2 != 0)
		{
			cout << niz[i] << " ";
		}
	}
	cout << endl;

	return 0;
}
