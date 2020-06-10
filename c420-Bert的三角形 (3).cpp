#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	while (cin >> n)
	{
		for (int i = 1; i <= n; i++)
		{
			//下劃線
			for (int k = n - 1 - i; k >= 0; k--)
				cout << "_";
			//星號
			for (int k = 1; k <= 1 + (i - 1) * 2; k++)
				cout << "*";
			//下劃線
			for (int k = n - 1 - i; k >= 0; k--)
				cout << "_";
			cout << endl;
		}
	}
	system("PAUSE");
	return 0;
}