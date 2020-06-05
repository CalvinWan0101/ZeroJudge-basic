#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int month, day;
	int S;
	cout << "請輸入月份" << endl;
	cin >> month;
	cout << "請輸入日期" << endl;
	cin >> day;
	S = (month * 2 + day) % 3;
	switch (S)
	{
	case 0:
		cout << "普通" << endl;
		break;
	case 1:
		cout << "吉" << endl;
		break;
	case 2:
		cout << "大吉" << endl;
	}
	system("PAUSE");
	return 0;
}
