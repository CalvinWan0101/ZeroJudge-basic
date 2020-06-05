#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a,b;
	cin >> a>>b;
	int god = a;
	for (; god >= 1; god--)
	{
		if (b% god == 0)
			break;
	}
	cout << god;
	system("PAUSE");
	return 0;
}
