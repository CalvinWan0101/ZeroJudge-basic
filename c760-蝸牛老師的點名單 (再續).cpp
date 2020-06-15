#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	string a;
	int start, end;
	while (getline(cin, a))
	{
		while (true)
		{
			start = 0;
			for (int i = start; i < a.length(); i++)
				if (a[i] == ' ' || i == a.length() - 1)
				{
					end = i;
					break;
				}
			for (int i = start; i < end; i++)
				cout << a[i];
			cout << endl;
			if (end == a.length() - 1)
				break;
			start = end + 1;
		}
	}
	system("PAUSE");
	return 0;
}