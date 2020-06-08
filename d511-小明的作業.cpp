#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int array[5][3];
	int point = 0;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 3; j++)
			cin >> array[i][j];
	for (int i = 0; i < 5; i++)
		if (array[i][0] + array[i][1] > array[i][2] && array[i][1] + array[i][2] > array[i][0] && array[i][0] + array[i][2] > array[i][1])
			point++;
	cout << point << endl;
	system("PAUSE");
	return 0;
}