#include <iostream>
#include <stdlib.h>
#include<string>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	string a;
	getline(cin, a);
	cout << "原碼" << a << endl;
	cout << "共" << a.length() << "位元" << endl;
	cout << "修改後 :" << endl;
	for (int i = 0; i < a.length(); i++)
	{ 
		char e= a[i] + 7;
		cout << e;
	};
	system("PAUSE");
	return 0;
}