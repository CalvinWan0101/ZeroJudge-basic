#include <iostream>
#include<string>
#include <cmath>
using namespace std;
int main()
{
	string a;
	int start, end;
	int array[10000];
	int know, count, distance;
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
			if (a.length() - 1 == end)
			{
				//確認是否全部都是數字
				for (int i = start; i <= end; i++)
					if (array[i] > 9 || array[i] < 0)
					{
						know = 1;
						break;
					}
				if (know == 0)
				{
					distance = end - start;
					for (int i = start; i <= end; i++)
					{
						count += array[i] * pow(10, distance);
						distance--;
					}
				}
			}
			else
			{
				for (int i = start; i < end; i++)
					if (array[i] > 9 || array[i] < 0)
					{
						know = 1;
						break;
					}
				if (know == 0)
				{
					distance = end - start - 1;
					for (int i = start; i < end; i++)
					{
						count += array[i] * pow(10, distance);
						distance--;
					}
				}
			}
			if (end == a.length() - 1)
				break;
			else
				start = end + 1;
		}
		cout << count << endl;
	}
	return 0;
}