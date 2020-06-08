#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a, b, c;
	cin >> a >> b >> c;
	int s = (a + b + c) / 2;
	cout << s * (s - a)*(s - b)*(s - c) << endl;
	system("PAUSE");
	return 0;
}