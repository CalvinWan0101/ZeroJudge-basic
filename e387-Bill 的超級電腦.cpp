#include <iostream>
using namespace std;
int main()
{
	int array[2][2];
	int n;
	float count;
	while (cin >> n)
	{
		count = 0;
		for (int i = 1; i <= n; i++)
		{
			if (i == 1)
				cin >> array[0][0] >> array[0][1];
			else
			{
				cin >> array[1][0] >> array[1][1];
				count += sqrt((array[1][0] - array[0][0]) * (array[1][0] - array[0][0]) + (array[1][1] - array[0][1]) * (array[1][1] - array[0][1]));
				array[0][0] = array[1][0];
				array[0][1] = array[1][1];
			}
		}
		cout << count << endl;
	}
	return 0;
}