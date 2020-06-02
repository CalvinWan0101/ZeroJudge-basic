#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	string input;
	cin >> input;
	if (input.length() == 1)
		cout << "go foward" << endl;
	int a=0;
	if (input.length() % 2 == 1)
	{
		for (int i = 0; i < input.length() / 2; i++)
			if (input[i] != input[input.length() - 1 - i])
				a++;
		if (a == 0)
			cout << "go foward" << endl;
		else
			cout << "keep defending" << endl;
	}
	else
	{
		for (int i = 0; i < input.length() / 2; i++)
			if (input[i] != input[input.length() - 1 - i])
				a++;
		if (a == 0)
			cout << "go foward" << endl;
		else
			cout << "keep defending" << endl;
	}
	system("PAUSE");
	return 0;
}