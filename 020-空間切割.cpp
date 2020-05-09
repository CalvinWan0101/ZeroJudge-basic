#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int number;
	cout << "平面數量：";
	cin >> number;
	cout << (pow(number, 3) + 5 * number + 6) / 6 << endl;
	system("PAUSE");
	return 0;
}