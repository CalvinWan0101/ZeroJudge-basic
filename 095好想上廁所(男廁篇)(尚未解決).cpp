#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	cout << "�p�K��ƶq�G";
	cin >> n;
	int array[21][2];
	for (int i = 0; i < 21; i++)
	{
		cout << "��" << i + 1 << "�ӤH&�L���ɶ��G";
		cin >> array[i][0] >> array[i][1];
	}

	system("PAUSE");
	return 0;
}