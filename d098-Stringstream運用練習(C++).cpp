#include <iostream>
#include<string>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
	string a;
	int start, end;
	int array[1000];
	int know, distance;
	long long  int count;
	//test
	int buffer;
	while (getline(cin, a))
	{
		count = 0;
		for (int i = 0; i < a.length(); i++)
		{
			array[i] = a[i];
			array[i] -= 48;
		}
		//tab=-16
		start = 0;
		while (true)
		{
			know = 0;
			for (int i = start; i < a.length(); i++)
				if (array[i] == -16 || i == a.length() - 1)
				{
					end = i;
					break;
				}
			//最後一項
			if (a.length() - 1 == end)
			{
				//檢測是否符合計算標準
				for (int i = start; i <= end; i++)
					if (array[i] > 9 || array[i] < 0)
					{
						know = 1;
						break;
					}
				if (know == 0)
				{
					distance = end - start + 1;
					for (int i = start; i <= end; i++)
					{
						buffer = 1;
						for (int i = 1; i < distance; i++)
							buffer *= 10;
						count += array[i] * buffer;
						//cout <<"測試："<<array[i] * buffer<<endl;
						distance--;
					}
				}
			}
			//除了最後一項的其他項
			else
			{
				//檢查是否符合計算標準
				for (int i = start; i < end; i++)
					if (array[i] > 9 || array[i] < 0)
					{
						know = 1;
						break;
					}
				if (know == 0)
				{
					distance = end - start;
					for (int i = start; i < end; i++)
					{
						buffer = 1;
						for (int i = 1; i < distance; i++)
							buffer *= 10;
						count += array[i] * buffer;
						//cout <<"測試："<<array[i] * buffer << endl;;
						distance--;
					}
				}
			}
			if (end == a.length() - 1)
				break;
			//來找start
			else
				for (int i = end; i < a.length(); i++)
					if (array[i] != -16)
					{
						start = i;
						break;
					}
		}
		cout << count << endl;
	}
	return 0;
}
