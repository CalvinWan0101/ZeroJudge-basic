#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a;
	while (cin >> a)
		//��a>50���ɭԴN��a�[�W-1
		cout << a - (a > 50) << endl;
	system("PAUSE");
	return 0;
}