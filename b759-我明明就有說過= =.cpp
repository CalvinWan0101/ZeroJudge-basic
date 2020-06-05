#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	string a;
	cin >> a;
	string b[100];
	for (int i = 0; i < a.length(); i++)
		b[i] = a[i];
	for (int i = a.length(); i <= 2 * a.length(); i++)
		b[i] = a[i - a.length()];
	for (int i = 0; i < a.length(); i++)
	{
		for (int j = i; j < a.length() + i; j++)
			cout << b[j];
		cout << endl;
	}
	system("PAUSE");
	return 0;
}
