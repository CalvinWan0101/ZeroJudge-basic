#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	while (cin >> n)
	{
		for (int i = 1; i <= n; i++)
		{
			//�U���u
			for (int k = n - 1 - i; k >= 0; k--)
				cout << "_";
			//�P��
			for (int k = 1; k <= 1 + (i - 1) * 2; k++)
				cout << "*";
			//�U���u
			for (int k = n - 1 - i; k >= 0; k--)
				cout << "_";
			cout << endl;
		}
	}
	system("PAUSE");
	return 0;
}