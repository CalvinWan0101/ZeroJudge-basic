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
			cout << "½Þ" << endl;
			break;
		case -11:
		case 1:
			cout << "¹«" << endl;
			break;
		case -10:
		case 2:
			cout << "¤û" << endl;
			break;
		case -9:
		case 3:
			cout << "ªê" << endl;
			break;
		case -8:
		case 4:
			cout << "¨ß" << endl;
			break;
		case -7:
		case 5:
			cout << "Às" << endl;
			break;
		case -6:
		case 6:
			cout << "³D" << endl;
			break;
		case -5:
		case 7:
			cout << "°¨" << endl;
			break;
		case -4:
		case 8:
			cout << "¦Ï" << endl;
			break;
		case -3:
		case 9:
			cout << "µU" << endl;
			break;
		case -2:
		case 10:
			cout << "Âû" << endl;
			break;
		case -1:
		case 11:
			cout << "ª¯" << endl;
			break;
		}
	}
	system("PAUSE");
	return 0;
}