#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	//西元年被4整除且不被100整除，或被400整除者即為閏年
	int year;
	for(int i=1;i<=2;i++)
	{
		cout << "請輸入您所想要查詢的年份" << endl;
	cin >> year;
	if (year % 400 == 0)
		cout << year << "年是閏年" << endl;
	else if (year % 4 == 0 && year % 100 != 0)
		cout << year << "年是閏年" << endl;
	else
		cout << year << "是平年" << endl;
	}
	system("PAUSE");
	return 0;
}
