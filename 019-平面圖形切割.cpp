#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	//a為圓數
	int a;
	cin >> a;
	//a * (a - 1) + 2為一般項
	cout << a * (a - 1) + 2 << endl;
	system("PAUSE");
	return 0;
}