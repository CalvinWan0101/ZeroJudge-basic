#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, m;
	string a;
	string b;
	int array[101];
	while (cin >> n >> m)
	{
		if (n == m && n == 0)
			break;
		cin >> a;
		for (int i = 0; i < n - 1; i++)
		{
			cin >> b;
			a += b;
		}
		for (int i = 0; i < m; i++)
		{
			cin >> array[i];
			cout << a[array[i]-1];
		}
	}
	return 0;
	system("PAUSE");
}