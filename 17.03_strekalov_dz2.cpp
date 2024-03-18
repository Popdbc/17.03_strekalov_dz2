#include <iostream>
using namespace std;
int main()
{
	const int n = 10;
	int mass[n], temp, nShift;
	cout << "Please, enter elements of the array.\n";
	for (int i = 0; i < n; i++)
	{
		cin >> mass[i];
	}
	cout << "\n";
	for (int i = 1; i < n; ++i)
	{
		nShift = 0;
		for (int r = 0; r < n — i; r++)
		{
			if (mass[r] > mass[r + 1])
			{
				temp = mass[r];
				mass[r] = mass[r + 1];
				mass[r + 1] = temp;
				nShift++;
			}
		}
		if (nShift == 0)
		{
			cout << "The sorting process is stoped at ";
			cout << i << " step\n";
			break;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << mass[i] << " ";
	}
	return 0;
}