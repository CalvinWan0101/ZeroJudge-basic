#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a, b;
	int count;
	while (cin >> a >> b)
	{
		count = 0;
		if (a == b)
			if (a % 2 == 0)
			{
				count = a;
				cout << count << endl;
				break;
			}

		if (b > a)
		{
			for (int i = a; i <= b; i++)
				if (i % 2 == 0)
					count += i;
		}
		else if (a > b)
		{
			for (int i = b; i <= a; i++)
				if (i % 2 == 0)
					count += i;
		}
		cout << count << endl;
	}
	system("PAUSE");
	return 0;
}