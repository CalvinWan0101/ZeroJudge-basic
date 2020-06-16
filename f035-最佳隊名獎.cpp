#include <iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int array[1000];
	while (getline(cin,a))
	{
		for (int i = 0; i < a.length(); i++)
			array[i] = a[i];
		for (int i = 0; i < a.length(); i++)
			if (i == a.length() - 1)
				cout << array[i] << endl;
			else
				cout << array[i] << "_";
	}
	return 0;
}