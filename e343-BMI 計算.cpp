#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	double a, b;
	while (cin >> a >> b)
	{
		b /= 100;
		cout << setprecision(3) <<a/(b*b) << endl;
	}
	system("PAUSE");
	return 0;
}