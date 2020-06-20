#include <iostream>
using namespace std;
int main()
{
	//1-刪除頂端元素
	//2-輸出頂端元素
	//3-丟數字進堆疊
	int n, a, array[100001] = { -1 }, b;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			if (a == 1)
			{
				for (int i = 0; i < 100001; i++)
					if (array[i] == -1)
					{
						array[i - 1] = -1;
						break;
					}
			}
			else if (a == 2)
			{
				for (int i = 0; i < 100001; i++)
					if (array[i] == -1)
					{
						cout << array[i - 1] << endl;
						break;
					}
			}
			else if (a == 3)
			{
				cin >> b;
				for (int i = 0; i < 100001; i++)
					if (array[i] == -1)
					{
						array[i] = b;
						break;
					}
			}
		}
	}
	return 0;
}
