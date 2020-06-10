#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a;
	while (cin >> a)
	{
		if (a == 0)
			break;
		if (a % 4 == 0 & a % 100 != 0 || a % 400 == 0)
			cout << "a leap year" << endl;
		else
			cout << "a normal year" << endl;
	}
	system("PAUSE");
	return 0;
}