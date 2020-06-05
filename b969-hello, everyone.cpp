#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	string a;
	getline(cin, a);
	int start = 0;
	int end = 0;
	//§ä²Ä¤@­Óend
	while (true)
	{
		for (int i = start; i <= a.length(); i++)
			if (a[i] == ' ')
			{
				end = i - 1;
				break;
			}
		//hello
		if (a[start] == 'h' && a[start + 1] == 'e' && a[start + 2] == 'l' && a[start + 3] == 'l' && a[start + 4] == 'o')
			break;
		cout << "hello, ";
		for (int i = start; i <= end; i++)
			cout << a[i];
		cout << endl;
		start = end + 2;

	}
	system("PAUSE");
	return 0;
}
