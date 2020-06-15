#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a, b, count;
	while (cin >> a >> b)
	{
		count = 0;
		for (int i = a; i <= b; i++)
			if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
				count++;
		cout << count << endl;
	}
	system("PAUSE");
	return 0;
}