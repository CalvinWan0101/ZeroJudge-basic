#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int array[3];
	int max;
	while (cin >> array[0] >> array[1] >> array[2])
	{
		max = -1;
		for (int i = 0; i < 3; i++)
			if (array[i] > max)
				max = array[i];
		cout << max << endl;
	}
	system("PAUSE");
	return 0;
}