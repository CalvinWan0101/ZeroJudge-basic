#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	cout << "�r��G";
	char A[8];
	cin >> A;
	int a[7];
	int password[6];
	//�r��������
	for (int i = 0; i < 7; i++)
		a[i] = A[i];
	//�p��K�X
	for (int i = 0; i < 6; i++)
	{
		password[i] = a[i] - a[i + 1];
		if (password[i] < 0)
			password[i] *= (-1);
	}
	//�L�X�K�X
	cout << "�K�X�G";
	for (int i = 0; i < 6; i++)
		cout << password[i];
	system("PAUSE");
	return 0;
}