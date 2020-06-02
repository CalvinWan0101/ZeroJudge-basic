#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a, b;
	cout << "起始點：";
	cin >> a;
	cout << "終點：";
	cin >> b;
	if (a > b)
		cout << 100 - a + b << endl;
	else
		cout << b - a << endl;
	system("PAUSE");
	return 0;
}