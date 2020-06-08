#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	while (cin >> n)
	{
		if (n <= 5 && n >= 0)
			cout << "0" << endl;
		else if (n <= 11)
			cout << "590" << endl;
		else if (n <= 17)
			cout << "790" << endl;
		else if (n <= 59)
			cout << "890" << endl;
		else
			cout << "399" << endl;
	}
	system("PAUSE");
	return 0;
}