#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	int array[100];
	int count = 0;
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		count = 0;
		cout << "木棒數量：";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << "第" << i + 1 << "根木棒長度：";
			cin >> array[i];
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == j)
					continue;
				for (int k = 0; k < n; k++)
				{
					if (i == k || j == k)
						continue;
					if (pow(array[i], 2) + pow(array[j], 2) == pow(array[k], 2) || pow(array[i], 2) + pow(array[k], 2) == pow(array[j], 2) || pow(array[j], 2) + pow(array[k], 2) == pow(array[i], 2))
						if(array[i] <= array[j]&&array[j]<=array[k])
						count++;
				}
			}
		}
		cout << "可以構成" << count << "種直角三角形" << endl;
	}
	system("PAUSE");
	return 0;
}
