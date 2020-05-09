#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	cout << "¤W­­¡G";
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		if (i % 7 == 0)
			continue;
		cout <<" "<<i;
	}
	system("PAUSE");
	return 0;
}