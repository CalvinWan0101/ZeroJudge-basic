/*#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	string a;
	int start = 0, end = 0;
	int count = 0;
	while (getline(cin, a), cin >> n)
	{
		count = 0;
		if (n == 1)
		{
			end = a.length() - 1;
			for (int i = a.length() - 1; i >= 0; i--)
				if (a[i] == ' ' || i == 0)
				{
					if (i == 0)
						start = i;
					else
						start = i + 1;
					break;
				}
			for (int i = start; i <= end; i++)
				cout << a[i];
			cout << endl;
		}
		else
		{
			//找第n-1個空格
			for (int i = a.length() - 1; i >= 0; i--)
			{
				if (a[i] == ' ')
					count++;
				if (count == n - 1)
				{
					end = i;
					//cout <<"end="<<end<<endl;
					break;
				}
			}
			for (int i = end-1; i >= 0; i--)
				if (a[i] == ' ' || i == 0)
				{
					if (i != 0)
						start = i + 1;
					else
						start = i;
					//cout << "start=" << start << endl;
					break;
				}
			for (int i = start; i < end; i++)
				cout << a[i];
			cout << endl;
		}
	}
}*/