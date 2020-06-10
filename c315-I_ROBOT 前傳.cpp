#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int x, y;
	int n;
	cin >> n;
	cin >> x >> y;
	int array[2];
	for (int i = 0; i < n - 1; i++)
	{
		cin >> array[0] >> array[1];
		switch (array[0])
		{
		case 0://y+
			y += array[1];
			break;
		case 1://x+
			x += array[1];
			break;
		case 2://y-
			y -= array[1];
			break;
		case 3://x-
			x -= array[1];
		}
	}
	cout << x <<" "<<y << endl;

	system("PAUSE");
	return 0;
}