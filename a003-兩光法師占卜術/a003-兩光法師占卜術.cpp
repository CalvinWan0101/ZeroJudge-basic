#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int month, day;
	int S;
	while (cin >> month >> day)
	{
		S = (month * 2 + day) % 3;
		switch (S)
		{
		case 0:
			cout << "普通" << endl;
			break;
		case 1:
			cout << "吉" << endl;
			break;
		case 2:
			cout << "大吉" << endl;
		}
	}
	return 0;
}
