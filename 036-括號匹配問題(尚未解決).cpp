#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	int Lcount, Rcount;
	string input;
	cin >> input;
	for (int i = 0; i < input.length(); i++)
	{
		switch (input[i])
		{
		case '(':
			Lcount++;
			break;
		case ')':
			Rcount++;
			break;
		}
	}
	system("PAUSE");
	return 0;
}