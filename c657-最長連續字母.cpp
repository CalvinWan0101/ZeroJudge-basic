#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	string a;
	int start, end;
	char b;
	int max;
	while (cin >> a)
	{
		max = 0;
		start = 0;
		end = 0;
		while (true)
		{
			for (int i = start; i < a.length(); i++)
				if (a[i] != a[start] || i == a.length() - 1)
				{
					end = i;
					break;
				}
			if (end - start > max)
			{
				max = end - start;
				b = a[start];
			}
			if (end == a.length() - 1)
				break;
			start = end;
		}
		cout << b << " " << max << endl;
	}
	system("PAUSE");
	return 0;
}