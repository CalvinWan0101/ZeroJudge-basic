#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int array[100][2];
	int n;
	int count;
	int distance;
	int rb;
	while (cin >> n)
	{
		count = 0;
		for (int i = 0; i < n; i++)
			cin >> array[i][0] >> array[i][1];
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
				//¥]§t¤ºÂ÷¥~Â÷
			{
				rb = array[i][1] - array[j][1];
				if (rb < 0)
					rb *= -1;
				distance = array[j][0] - array[i][0];
				if (distance < 0)
					distance *= -1;
				if ((distance > (array[j][1] + array[i][1])) || (distance > 0 && distance < rb))
				{
					count++;
					//cout << array[i][0] << array[i][1] << " " << array[j][0] << array[j][1] << endl;
				}
			}
		cout << count << endl;
	}
	system("PAUSE");
	return 0;
}