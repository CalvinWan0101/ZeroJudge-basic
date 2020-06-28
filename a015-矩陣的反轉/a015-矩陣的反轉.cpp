#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int array[101][101];
	int after[101][101];
	int y, x;
	while (cin >> y >> x)
	{
		for (int i = 1; i <= y; i++)
			for (int j = 1; j <= x; j++)
			{
				cin >> array[i][j];
				after[j][i] = array[i][j];
			}
		for (int i = 1; i <= x; i++)
		{
			for (int j = 1; j <= y; j++)
				cout << after[i][j] << " ";
			cout << endl;
		}
	}
	return 0;
}
