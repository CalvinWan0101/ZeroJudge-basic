#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int large;
	int min;
	cout << "�U���G";
	cin >> min;
	cout << "�W���G";
	cin >> large;
	int count = 0;
	int i, j;
	cout << min << "~" << large << "����Ʀ��G";
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
	cout << "�@�p" << count << "��" << endl;
	system("PAUSE");
	return 0;
}