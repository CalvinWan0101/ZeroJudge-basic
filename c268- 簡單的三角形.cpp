#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	//cout << "組合數：";
	int n;
	cin >> n;
	int m;
	int array[537];
	int know = 0;
	//大迴圈是資料的組數
	for (int i = 0; i < n; i++)
	{
		know = 0;
		//cout << "元素量：";
		cin >> m;
		//輸入各元素
		for (int i = 0; i < m; i++)
		{
			//cout << "第" << i + 1 << "個元素：";
			cin >> array[i];
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (i == j)
					continue;
				for (int k = 0; k < m; k++)
				{
					if (j == k || i == k)
						continue;
					if (array[i] + array[j] > array[k] && array[i] + array[k] > array[j] && array[j] + array[k] > array[i])
						know = 1;
				}
			}
		}

		if (know == 1)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
	system("PAUSE");
	return 0;
}