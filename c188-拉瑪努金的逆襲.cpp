#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		long long int M[201] = { 1 };
		for (int i = 1; i <= 200; i++)
		{
			for (int j = i; j <= 200; j++)
				M[j] += M[j - i];
		}
		cout << M[n] << '\n';
	}
	return 0;
}