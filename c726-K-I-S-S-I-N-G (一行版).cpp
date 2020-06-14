#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	string a;
	int end;
	while (getline(cin, a))
	{
		for (int i = 0; i < a.length(); i++)
			if (a[i] == ' ')
			{
				end = i;
				break;
			}
		for (int i = 0; i < end; i++)
			cout << a[i];
		cout << " and ";
		for (int i = end + 1; i < a.length(); i++)
			cout << a[i];
		cout << " sitting in the tree" << endl;
	}
	system("PAUSE");
	return 0;
}