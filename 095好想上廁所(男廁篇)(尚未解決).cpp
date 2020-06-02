#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	cout << "小便斗數量：";
	cin >> n;
	int array[21][2];
	for (int i = 0; i < 21; i++)
	{
		cout << "第" << i + 1 << "個人&他的時間：";
		cin >> array[i][0] >> array[i][1];
	}

	system("PAUSE");
	return 0;
}