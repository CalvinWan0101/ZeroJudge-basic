#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	while (cin >> n)
		cout << (n +9) % 24 << endl;
	system("PAUSE");
	return 0;
}