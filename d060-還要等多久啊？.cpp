#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	while (cin >> n)
	{
		if (n > 25)
			cout << 60 - n + 25 << endl;
		else
			cout << 25 - n << endl;
	}
	system("PAUSE");
	return 0;
}