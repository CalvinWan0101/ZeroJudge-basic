#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a, b;
	cin >> a >> b;
	int count = 0;
	for (int i = a; i <= b; i++)
		if (i % 2 == 0)
			count++;
	cout << count << endl;
	system("PAUSE");
	return 0;
}