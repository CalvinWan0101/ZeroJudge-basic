#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a,b,god;
	while (cin >> a >> b)
	{
		god = a;
		for (; god >= 1; god--)
			if (b % god == 0&&a%god==0)
				break;
		cout << god<<endl;
	}
	system("PAUSE");
	return 0;
}
