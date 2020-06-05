#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	cout << "木棒數量：";
	cin >> n;
	int array[100];
	for (int i = 0; i < n; i++)
	{
		cout << "第" << i + 1 << "根木棒長度：";
		cin >> array[i];
	}
	int count = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
			{
				if (i != j && i != k && j != k)
					if (pow(array[i], 2) + pow(array[j], 2) == pow(array[k], 2) ||
						pow(array[i], 2) + pow(array[k], 2) == pow(array[j], 2) ||
						pow(array[j], 2) + pow(array[k], 2) == pow(array[i], 2))
						if (array[i] > array[j] && array[j] > array[k])
							count++;
			}
	cout << "可以構成" << count << "種直角三角形" << endl;
	system("PAUSE");
	return 0;
}
