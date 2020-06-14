#include <iostream>
#include<string>
using namespace std;
int main(int argc, char** argv)
{
	//计埃猭
	string a;
	int array[10000] = { 0 };
	int sum;
	while (cin >> a)
	{
		sum = 0;
		for (int i = 0; i < a.length(); i++)
		{
			array[i] = a[i];
			array[i] -= 48;
		}
		//--3
		//タ计
		if (array[0] != -3)
		{
			for (int i = 0; i < a.length(); i++)
			{
				sum += array[i];
				sum %= 3;
				if (i == a.length() - 1 && sum != 0)
					cout << "no" << endl;
				else if (i == a.length() - 1 && sum == 0)
					cout << "yes" << endl;
			}
		}
		//肈ヘ粄﹚03计
		else if (array[0] == 0)
			cout << "yes" << endl;
		//璽计
		else
		{
			for (int i = 1; i < a.length(); i++)
			{
				sum += array[i];
				sum %= 3;
				if (i == a.length() - 1 && sum != 0)
					cout << "no" << endl;
				else if (i == a.length() - 1 && sum == 0)
					cout << "yes" << endl;
			}
		}
	}
	system("PAUSE");
	return 0;
}