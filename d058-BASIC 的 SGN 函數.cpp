#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	while (cin >> n)
		if (n < 0)
			cout << "-1" << endl;
		else if (n > 0)
			cout << "1" << endl;
		else
			cout << "0" << endl;
	system("PAUSE");
	return 0;
}