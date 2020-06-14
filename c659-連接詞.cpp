#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	string a, b;
	int start = 0, end = 0;
	while (cin >> a)
	{
		start = 0;
		getline(cin, b);
		while (true)
		{
			//§äend
			for (int i = start; i < b.length(); i++)
				if (b[i] == ' '&&i!=0 || i == b.length() - 1)
				{
					end = i;
					break;
				}
			//cout << "end = " << end << endl;
			if (end == b.length() - 1)
			{
				for (int i = start; i <= end; i++)
					cout << b[i];
				cout << endl;
			}
			else
			{
				for (int i = start; i <= end; i++)
					cout << b[i];
				cout << a << " ";
			}
			if (end == b.length() - 1)
				break;
			start = end + 1;
		}
	}
	system("PAUSE");
	return 0;
}