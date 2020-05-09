#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int number;
	int a, b, c;
	cout << "數據組數：";
	cin >> number;
	for (int i = 0; i < number; i++)
	{
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout << "c=";
		cin >> c;
		switch (a)
		{
		case 1:
			cout << b + c << endl;
			break;
		case 2:
			cout << b - c << endl;
			break;
		case 3:
			cout << b * c << endl;
			break;
		case 4:
			cout << b / c << endl;
			break;
		}
		cout << endl;
	}
	system("PAUSE");
	return 0;
}