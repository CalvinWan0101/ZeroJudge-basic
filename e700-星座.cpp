/*#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	int array[5] = { 0 };
	int m, d;
	while (cin >> a)
	{
		for (int i = 0; i < a.length(); i++)
		{
			array[i] = a[i];
			array[i] -= 48;
		}
		//���
		if (a.length() == 3)
		{
			m = array[0];
			d = array[2];
		}
		//����
		else if (a.length() == 4 && array[2] == -1)
		{
			m = array[0] * 10 + array[1];
			d = array[3];
		}
		//����
		else if (a.length() == 4 && array[1] == -1)
		{
			m = array[0];
			d = array[2] * 10 + array[3];
		}
		//����
		else if (a.length() == 5)
		{
			m = array[0] * 10 + array[1];
			d = array[3] * 10 + array[4];
		}
		switch (m)
		{
		case 1:
			if (d >= 21)
				cout << "���~�y" << endl;
			else
				cout << "���~�y" << endl;
			break;
		case 2:
			if (d >= 20)
				cout << "�����y" << endl;
			else
				cout << "���~�y" << endl;
			break;
		case 3:
			if (d >= 21)
				cout << "�d�Ϯy" << endl;
			else
				cout << "�����y" << endl;
			break;
		case 4:
			if (d >= 21)
				cout << "�����y" << endl;
			else
				cout << "�d�Ϯy" << endl;
			break;
		case 5:
			if (d >= 22)
				cout << "���l�y" << endl;
			else
				cout << "�����y" << endl;
			break;
		case 6:
			if (d >= 22)
				cout << "���ɮy" << endl;
			else
				cout << "���l�y" << endl;
			break;
		case 7:
			if (d >= 23)
				cout << "��l�y" << endl;
			else
				cout << "���ɮy" << endl;
			break;
		case 8:
			if (d >= 22)
				cout << "�B�k�y" << endl;
			else
				cout << "��l�y" << endl;
			break;
		case 9:
			if (d >= 24)
				cout << "�ѯ��y" << endl;
			else
				cout << "�B�k�y" << endl;
			break;
		case 10:
			if (d >= 24)
				cout << "���Ȯy" << endl;
			else
				cout << "�ѯ��y" << endl;
			break;
		case 11:
			if (d >= 23)
				cout << "�g��y" << endl;
			else
				cout << "���Ȯy" << endl;
			break;
		case 12:
			if (d >= 23)
				cout << "���~�y" << endl;
			else
				cout << "�g��y" << endl;
		}
	}
	return 0;
}*/