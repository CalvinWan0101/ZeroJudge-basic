#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a;
	while (cin >> a)
		//當a>50的時候就把a加上-1
		cout << a - (a > 50) << endl;
	system("PAUSE");
	return 0;
}