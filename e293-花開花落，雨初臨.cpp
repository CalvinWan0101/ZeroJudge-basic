#include <iostream>
using namespace std;
int main()
{
	int map[25];
	int bucket[25] = { 0 };
	int count = 0;
	//建表
	for (int i = 2; i < 100; i++)
	{
		int know = 0;
		for (int j = 2; j < i; j++)
			if (i % j == 0)
			{
				know = 1;
				break;
			}
		if (know == 0)
		{
			map[count] = i;
			count++;
		}
	}
	int n, a, k, w;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		k = 0;
		w = 0;
		cin >> a;

		//第一步篩選
		k = 0;
		w = 0;
		for (int i = 0; i < 25; i++)
			if (a % map[i] == 0)
			{
				bucket[i]++;
				k = 1;
			}
			else if (a == map[i])
			{
				cout << map[i] << endl;
				w = 1;
				continue;
			}
		if (k == 0 && w != 1)
		{
			cout << "Terrible Silence..." << endl;
			continue;
		}
		else
		{
			for (int i = 0; i < 25; i++)
				if (bucket[i] != 0)
					cout << map[i] << " ";
			cout << endl;
		}
		for (int i = 0; i < 25; i++)
			bucket[i] = 0;
	}
	return 0;
}