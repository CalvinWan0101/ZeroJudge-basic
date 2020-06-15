#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	int array[1000000];
	unsigned long long sum;
	while (cin >> n)
	{
		sum = 0;
		for (int i = 0; i < n; i++)
			cin >> array[i];
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
				sum += array[i] * array[j];
		cout << sum << endl;
	}
	system("PAUSE");
	return 0;
}