#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int input;
	cout << "ÀË´úªº¼Æ¦r¡G";
	cin >> input;
	int sum = 0;
	int i;
	while (input != 1)
	{
		for (i = 2; i <= input; i++)
		{
			if (input % i == 0)
			{
				input /= i;
				sum += i;
				if (input == 1)
					cout << i << "=";
				else
					cout << i << "+";
				i = 1;
			}
		}
	}
	cout << sum << endl;
	system("PAUSE");
	return 0;
}
