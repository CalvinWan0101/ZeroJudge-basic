#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int input[2];
	char a;
	cout << "²{¦b®É¶¡¡G";
	cin >> input[0] >>a>> input[1];
	input[0] += 2;
	input[1] += 30;
	if (input[1] >= 60)
	{
		input[1] %= 60;
		input[0] ++;
	}
	if (input[0] >= 24)
		input[0] %= 24;
	
	if (input[0] < 10)
		cout << "0" << input[0] << ":";
	else
		cout << input[0] << ":";
	if (input[1] < 10)
		cout << "0" << input[1] << endl;
	else
		cout << input[1] << endl;
	system("PAUSE");
	return 0;
}
