#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a, b,cou;
	cout << "�п�J��۲���ơA���p��j" << endl;
	cin >> a >> b;
	for (int i = a; pow(i, 2) <= b; i++)
	{
		if ((pow(i, 2) >= a) && (pow(i, 2) <= b))
			cou += pow(i, 2);
	}
	cout << "�d�򤺧�������M��" << cou << endl;
	system("PAUSE");
	return 0;
}