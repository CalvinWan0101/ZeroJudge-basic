#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	string a;
	//start���_�l�I�Aend��������@�I
	int start = 0, end = 0;
	getline(cin, a);
	while (true)
	{
		//�M��end
		for (int i = start; i < a.length(); i++)
			if (a[i] == ' ' || i == a.length() - 1)
			{
				end = i;
				break;
			}
		if (end != a.length() - 1)
			for (int i = start; i < end; i++)
				cout << a[i];
		else
			for (int i = start; i <= end; i++)
				cout << a[i];
		cout << endl;
		if (end == a.length() - 1)
			break;
		//��sstart
		start = end + 1;
	}
	system("PAUSE");
	return 0;
}