#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a, b;
	cin >> a >> b;
	int i;
	for (i = a; i >= 2; i--)
		if (a % i == 0 && b % i == 0)
		{
			cout << i << endl;
			break;
		}
	if (i == 2)
		cout << "¤¬½è" << endl;
	system("PAUSE");
	return 0;
}
