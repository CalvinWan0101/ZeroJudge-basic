#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int start;
	while (cin >> a)
	{
		start = 0;
		for (int i = a.length() - 1; i >= 0; i--)
			if (a[i] != '0')
			{
				start = i;
				break;
			}
		for (int i = start; i >= 0; i--)
			cout << a[i];
	}
	return 0;
}
