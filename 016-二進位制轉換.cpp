#include <iostream>
#include<string>
using namespace std;
int main(int argc, char** argv)
{
	//�n�n���10�i��P2�i���W��
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