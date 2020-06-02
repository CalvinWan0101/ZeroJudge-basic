#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a;
	cout << "首項：";
	cin >> a;
	int b;
	cout << "末項：";
	cin >> b;
	int d;
	cout << "公差：";
	cin >> d;
	for (int i = a; i <= b; i+=d)
		cout << i << " ";
	system("PAUSE");
	return 0;
}