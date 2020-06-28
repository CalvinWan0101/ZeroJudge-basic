#include <iostream>
#include<string>
using namespace std;
int main(int argc, char** argv)
{
	string a;
	getline(cin, a);
	for (int i = 0; i < a.length(); i++)
	{
		char e = a[i] - 7;
		cout << e;
	}
	return 0;
}
