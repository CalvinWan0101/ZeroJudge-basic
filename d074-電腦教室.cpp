#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n, max;
	int array[10];
	while (cin >> n)
	{
		max = -1;
		for (int i = 0; i < n; i++)
			cin >> array[i];
		for (int i = 0; i < n; i++)
			if (array[i] > max)
				max = array[i];
		cout << max << endl;
	}
	system("PAUSE");
	return 0;
}