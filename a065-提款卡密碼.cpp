#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	cout << "字串：";
	char A[8];
	cin >> A;
	int a[7];
	int password[6];
	//字串資料轉整數
	for (int i = 0; i < 7; i++)
		a[i] = A[i];
	//計算密碼
	for (int i = 0; i < 6; i++)
	{
		password[i] = a[i] - a[i + 1];
		if (password[i] < 0)
			password[i] *= (-1);
	}
	//印出密碼
	cout << "密碼：";
	for (int i = 0; i < 6; i++)
		cout << password[i];
	system("PAUSE");
	return 0;
}
