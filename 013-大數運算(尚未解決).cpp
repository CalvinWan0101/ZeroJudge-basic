#include <iostream>
#include <cstdlib>
#include <sstream>
#include <algorithm>
using namespace std;
//�����Ӥj�ƪ��j�p
int compare(int a[500], int b[1000])
{
	//��Jcompare��ƪ���Ӱ}�C�P�˨ϥ��A�˫᪺�}�C��K�p��
	int counta = 0, countb = 0;
	for (int i = 0; i < 500; i++)
		if (a[i] > 0)
			counta++;
	for (int i = 0; i < 500; i++)
		if (b[i] > 0)
			countb++;
	//�z��Ĥ@������
	if (counta > countb)
		return 1;
	else if (counta < countb)
		return 2;
	else if (counta == countb)
		return 3;
	//�p�G��Ƥ@�˫h�}�l����C�@��ƪ��j�p
	else
		for (int i = 0; i < counta; i++)
			if (a[counta - 1 - i] > b[counta - 1 - i])
			{
				return 1;
				break;
			}
			else
			{
				return 2;
				break;
			}
}
int main(int argc, char** argv)
{
	
	//��J����l���
	string a, b;
	//�B���
	string c;
	int A[500] = { 0 };
	int B[500] = { 0 };
	int last[1000] = { 0 };

	cout << "�п�J�p�⦡" << endl;;
	cin >> a >> c >> b;
	//�ഫstring�}�C��int�}�C
	int Z = max(a.length(), b.length());
	int Y = a.length() + b.length();
	cout << "���G�G";
	for (int i = 0; i < a.length(); i++)
	{
		stringstream transferA;
		transferA << a[i];
		transferA >> A[i];
		cout << A[i];
	}
	cout << c;
	for (int i = 0; i < b.length(); i++)
	{
		stringstream transferB;
		transferB << b[i];
		transferB >> B[i];
		cout << B[i];
	}
	cout << "=";
	//�A�˰}�CA
	int tranA[500] = { 0 };
	for (int i = 0; i < a.length(); i++)
		tranA[i] = A[a.length() - 1 - i];
	//�A�˰}�CB
	int tranB[500] = { 0 };
	for (int i = 0; i < b.length(); i++)
		tranB[i] = B[b.length() - 1 - i];
	//�[�k�p��
	if (c == "+")
	{
		int carry = 0;
		for (int i = 0; i <= Z; i++)
		{
			last[i] = tranA[i] + tranB[i] + carry;
			carry = (tranA[i] + tranB[i] + carry) / 10;
			last[i] = last[i] % 10;
		}
		//�̰���S���i��	
		if (last[Z] == 0)
			for (int i = 0; i < Z; i++)
				cout << last[Z - 1 - i];
		//���i��
		else
			for (int i = 0; i <= Z; i++)
				cout << last[Z - i];
	}
	//��k�p��
	else if (c == "-")
	{
		int i = 0, borrow = 0;
		for (; i < Z; i++)
		{
			last[i] = tranA[i] - tranB[i] - borrow;
			//�����o�{�p��0 =�n�����1
			if (last[i] < 0)
			{
				borrow = 1;
				last[i] += 10;
			}
			else
				borrow = 0;
		}
		//�̰���h��
		if (last[Z - 1] == 0)
			for (int i = 0; i < Z - 1; i++)
				cout << last[Z - 2 - i];
		//�̰��줣�h��
		else
			for (int i = 0; i < Z; i++)
				cout << last[Z - 1 - i];
	}
	//���k�p��
	else if (c == "*")
	{
		int carry = 0;
		for (int i = 0; i <= b.length(); i++)
		{
			//��a=0�ɸ��L�ԭz�i�J�j��U�@�B
			if (a[i] == 0)
				continue;
			for (int j = 0; j < a.length(); j++)
				last[i + j] += tranA[j] * tranB[i];
		}
		//�S���i��
		if (last[Y] == 0)
			for (int i = 0; i < Y - 1; i++)
			{
				last[i] += carry;
				carry = last[i] / 10;
				last[i] %= 10;
			}
		//���i��
		else
			for (int i = 0; i < Y; i++)
			{
				last[i] += carry;
				carry = last[i] / 10;
				last[i] %= 10;
			}
		//�L�X
	//�S���i��
		if (last[Y] == 0)
			for (int i = 0; i < Y - 1; i++)
				cout << last[Y - 2 - i];
		//���i��
		else
			for (int i = 0; i < Y; ++i)
				cout << last[Y - 1 - i];
	}
	//���k�p��
	else if (c == "/")
	{
		int result[500];
		//endless cycle�[�k�@���[���쵲�G�j��Q����
		int sum = 0;
		int carry = 0;
		int orgin = b.length();
		int change = b.length();
		while (true)
		{
			change = sizeof(last) / sizeof(last[0]);
			carry = 0;
			for (int i = 0; i <= (orgin + change); i++)
			{
				last[i] = last[i] + tranB[i] + carry;
				carry = (tranB[i] + last[i] + carry) / 10;
				last[i] = last[i] % 10;
			}
			sum++;
			if (compare(last, tranA) == 1)
			{
				cout << sum - 1 << endl;
				break;
			}
			else if (compare(last, tranA) == 1)
			{
				cout << sum << endl;
				break;
			}
		}
	}
	system("PAUSE");
	return 0;
}