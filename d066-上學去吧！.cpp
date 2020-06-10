#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a, b;
	while (cin >> a >> b)
	{
		if (a < 7 || a>=17)
			cout << "Off School" << endl;
		else if (a > 7 && a < 17)
			cout << "At School" << endl;
		else if (a == 7)
			if (b < 30)
				cout << "Off School" << endl;
			else
				cout << "At School" << endl;
	}
	system("PAUSE");
	return 0;
}