#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	while (cin >> n)
	{
		n %= 12;
		switch (n)
		{
		case 0:
			cout << "��" << endl;
			break;
		case -11:
		case 1:
			cout << "��" << endl;
			break;
		case -10:
		case 2:
			cout << "��" << endl;
			break;
		case -9:
		case 3:
			cout << "��" << endl;
			break;
		case -8:
		case 4:
			cout << "��" << endl;
			break;
		case -7:
		case 5:
			cout << "�s" << endl;
			break;
		case -6:
		case 6:
			cout << "�D" << endl;
			break;
		case -5:
		case 7:
			cout << "��" << endl;
			break;
		case -4:
		case 8:
			cout << "��" << endl;
			break;
		case -3:
		case 9:
			cout << "�U" << endl;
			break;
		case -2:
		case 10:
			cout << "��" << endl;
			break;
		case -1:
		case 11:
			cout << "��" << endl;
			break;
		}
	}
	system("PAUSE");
	return 0;
}