#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	double r;
	cout << "手臂半徑：";
	cin >> r;
	cout << "大腿半徑：" << (r * 9) / 5 + 32 << endl;
	system("PAUSE");
	return 0;
}
