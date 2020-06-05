#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int large;
	int min;
	cout << "下限：";
	cin >> min;
	cout << "上限：";
	cin >> large;
	int count = 0;
	int i, j;
	cout << min << "~" << large << "的質數有：";
	for (i = min; i <= large; i++)
		for (j = 2; j <= i - 1; j++)
			if (i % j == 0)
				break;
			else if (j == i - 1 && i % j != 0)
			{
				count++;
				cout << setw(3) << i;
			}
	cout << endl;
	cout << "共計" << count << "個" << endl;
	system("PAUSE");
	return 0;
}
