#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	//泡沫排序計算最少排序次數
	int count = 0;
	int n;
	cout << "車廂數量：";
	cin >> n;
	int array[101];
	for (int i = 1; i <= n; i++)
	{
		cout << "第" << i << "節車廂：";
		cin >> array[i];
	}
	int buffer;
	//排序開始
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - 1; j++)
			if (array[j] > array[j + 1])
			{
				buffer = array[j + 1];
				array[j + 1] = array[j];
				array[j] = buffer;
				count++;
			}
	}
	cout << "最少需要旋轉" << count << "次" << endl;
	system("PAUSE");
	return 0;
}