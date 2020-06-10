#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	int array[100000];
	int max = -100000;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
			cin >> array[i];
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
				if (array[i] - array[j] > max)
					max = array[i] - array[j];
		cout << max << endl;
	}
	system("PAUSE");
	return 0;
}