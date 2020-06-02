#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int number;
	int array[1000] = { 0 };
	cout << "資料量：";
	cin >> number;
	for (int i = 0; i < number; i++)
	{
		cout << "第" << i + 1 << "個資料：";
		cin >> array[i];
	}
	//先依照個位的大小排序
	int buffer;
	for (int i = 0; i < number; i++)
		for (int j = i + 1; j < number; j++)
		{
			if (array[i] % 10 > array[j] % 10)
			{
				buffer = array[i];
				array[i] = array[j];
				array[j] = buffer;
			}
		}
	cout << "個位排序後" << endl;
	for (int i = 0; i < number; i++)
		cout << array[i] << " ";

	//將個位數相同的項由大到小排列
	int start = 0;
	int end;
	int i;
	while (true)
	{
		//搜尋end的點
		for (i = start;; i++)
			if ((array[i] % 10) != (array[start] % 10))
				break;
		end = i - 1;
		//在start<=x<=end的範圍當中以大到小排序
		for (int j = start; j <= end; j++)
		{
			for (int k = j + 1; k <= end; k++)
			{
				if (array[j] < array[k])
				{
					buffer = array[j];
					array[j] = array[k];
					array[k] = buffer;
				}
			}
		}
		//重置start
		start = end + 1;
		if (start == number)
			break;
	}
	cout << "全部排序完後" << endl;
	for (int i = 0; i < number; i++)
		cout << array[i] << " ";
	system("PAUSE");
	return 0;
}