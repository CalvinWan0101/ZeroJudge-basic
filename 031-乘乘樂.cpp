#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(int argc, char** argv)
{
	string a;
	int A[500];
	int number;
	int sum;
	cout << "���ո�ƶq�G";
	cin >> number;
	for (int i = 0; i < number; i++)
	{
		//�M�ž�CA�Ϩ�Ҧ���=1
		for (int i = 0; i < number; i++)
			A[i] = 1;
		//�M��sum
		sum = 1;
		//input
		cout << "�Ĥ@�ӼơG";
		cin >> a;
		//�ഫstring��int�}�C
		for (int i = 0; i < a.length(); i++)
		{
			stringstream transferA;
			transferA << a[i];
			transferA >> A[i];
		}
		//�p��ۭ�����
		for (int i = 0; i < a.length(); i++)
			sum *= A[i];
		//�L�X��
		cout << "��=" << sum << endl;
	}
	system("PAUSE");
	return 0;
}