#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int month, day;
	int S;
	cout << "�п�J���" << endl;
	cin >> month;
	cout << "�п�J���" << endl;
	cin >> day;
	S = (month * 2 + day) % 3;
	switch (S)
	{
	case 0:
		cout << "���q" << endl;
		break;
	case 1:
		cout << "�N" << endl;
		break;
	case 2:
		cout << "�j�N" << endl;
	}
	system("PAUSE");
	return 0;
}
