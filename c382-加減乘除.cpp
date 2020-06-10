#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a, b;
	char c;
	while (cin >> a >> c >> b)
	{
		switch (c)
		{
		case '+':
			cout << a + b << endl;
			break;
		case '-':
			cout << a - b << endl;
			break;
		case '*':
			cout << a * b << endl;
			break;
		case '/':
			cout << a / b << endl;
			break;
		}
	}
	system("PAUSE");
	return 0;
}