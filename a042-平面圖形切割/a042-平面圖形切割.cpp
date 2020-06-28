#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a;
	while (cin >> a)
		cout << a * (a - 1) + 2 << endl;
	return 0;
}
