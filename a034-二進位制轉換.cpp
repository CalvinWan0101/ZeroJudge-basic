#include <iostream>
#include<string>
using namespace std;
int main(int argc, char** argv)
{
	//¦n¦n¹ï·Ó10¶i¦ì»P2¶i¦ì§ä³W«ß
	int in;
	cin >> in;
	int a = in / 2;
	int b = in % 2;
	for (int i = 0; i < a; i++)
	{
		cout << "1";

	}
	if (b == 0)
		cout << "0" << endl;
	else
		cout << "1" << endl;
	system("PAUSE");
	return 0;
}
