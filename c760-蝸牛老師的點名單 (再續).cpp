#include <iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int start, end, len;
	while (getline(cin, a))
	{
		len = a.length();
		start = 0;
		while (true)
		{
			for (end = start; end < len; end++)
				if (a[end] == ' ')
					break;
			for (int i = start; i < end; i++)
				if (i == start && end == start + 1)
				{
					a[i] -= 32;
					cout << a[i] << endl;
				}
				else if (i == start)
				{
					a[i] -= 32;
					cout << a[i];
				}
				else if (i == end - 1)
					cout << a[i] << endl;
				else
					cout << a[i];
			if (end >= len - 1)
				break;
			else
				for (start = end; start < len; start++)
					if (a[start] != ' ')
						break;
		}
	}
	return 0;
}