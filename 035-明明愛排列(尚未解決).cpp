#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int number;
	int array[1000];
	cout << "��ƶq�G";
	cin >> number;
	for (int i = 0; i < number; i++)
	{
		cout << "��" << i+1 << "�Ӹ�ơG";
		cin >> array[i];
	}

	system("PAUSE");
	return 0;
}