#include <iostream>
#include<string>
using namespace std;
int main(int argc, char** argv)
{
	int count ;
	string a;
	while (cin >> a)
	{
		count = 0;
		for (int i = 0; i < a.length(); i++)
			for (int j = 0; j < a.length(); j++)
			{
				if (j >= i)
					continue;
				for (int k = 0; k < a.length(); k++)
				{
					if (i >= k || j >= k)
						continue;
					if (a[i] == 'Q' && a[j] == 'A' && a[k] == 'Q')
						count++;
				}
			}
		cout << count << endl;
	}
	system("PAUSE");
	return 0;
}