#include <iostream>
#include <stdlib.h>
#include<string>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	string a;
	getline(cin, a);
	cout << "��X" << a << endl;
	cout << "�@" << a.length() << "�줸" << endl;
	cout << "�ק�� :" << endl;
	for (int i = 0; i < a.length(); i++)
	{ 
		char e= a[i] + 7;
		cout << e;
	};
	system("PAUSE");
	return 0;
}