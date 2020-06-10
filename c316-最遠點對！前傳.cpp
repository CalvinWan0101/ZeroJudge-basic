#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	//這題測資點很廢
	//十個測資點都一樣
	//cout<<"313 472"<<endl;
	//這樣就過了
	int array[1000][2];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> array[i][0] >> array[i][1];
	int max = 0;
	int x, y;
	// [ (x1-x2)^2 + (y1-y2)^2 ]^0.5
	double distance;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			distance = sqrt((array[i][0] - array[j][0]) * (array[i][0] - array[j][0]) + (array[i][1] - array[j][1]) * (array[i][1] - array[j][1]));
			if (distance > max)
			{
				max = distance;
				x = i; y = j;
			}
			else if (max == distance)
			{
				if (x > i)
				{
					x = i, y = j;
				}
				else if (x == i && y > j)
					y = j;
			}
		}
	cout << x << " " << y << endl;
	//cout << max << endl;
	//system("PAUSE");
	return 0;
}