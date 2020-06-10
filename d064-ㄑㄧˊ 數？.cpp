#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	while (cin >> n)
		if (n % 2 == 0)
			cout << "Even" << endl;
		else
			cout << "Odd" << endl;
	system("PAUSE");
	return 0;
}