#include <iostream>
#include<string>
using namespace std;
int main(int argc, char** argv)
{
	//���D���
	//ù���Ʀr�@�զr���N��@��Ʀr
	//�@�դS�����p�iV�j�@�Ӧr�����@�եH�Φp�iIV�j��Ӧr�����@��
	//���]�ߥi�H��Ӧr�����@�ժ��}�Y�r���p�iI�j�iX�j�iC�j
	//�A�P�_�u���W�@�Ӭ��@�ժ��p�iV�j�iL�j�iD�j�iM�j
	string a, b;
	cout << "�Ĥ@��ù���Ʀr�G";
	cin >> a;
	cout << "�ĤG��ù���Ʀr�G";
	cin >> b;
	//�ഫa���Ʀr
	int suma = 0;
	string buffer[2];
	//�ഫstring a���Ʀr
	for (int i = 0; i < a.length(); i++)
	{
		buffer[0] = a[i];
		buffer[1] = a[i + 1];

		//I�}�Y�A�]�t�iI�j�iIV�j�iIX�j
		if (buffer[0].compare("I") == 0)
		{
			if (buffer[1].compare("V") == 0)
			{
				suma += 4;
				i++;
			}
			else if (buffer[1].compare("X") == 0)
			{
				suma += 9;
				i++;
			}
			else
				suma += 1;
		}
		//X�}�Y�A�]�t�iX�j�iXL�j�iXC�j
		if (buffer[0].compare("X") == 0)
		{
			if (buffer[1].compare("L") == 0)
			{
				suma += 40;
				i++;
			}
			else if (buffer[1].compare("C") == 0)
			{
				suma += 90;
				i++;
			}
			else
				suma += 10;
		}
		//C�}�Y�A�]�t�iC�j�iCD�j�iCM�j
		if (buffer[0].compare("C") == 0)
		{
			if (buffer[1].compare("D") == 0)
			{
				suma += 400;
				i++;
			}
			else if (buffer[1].compare("M") == 0)
			{
				suma += 900;
				i++;
			}
			else
				suma += 100;
		}
		//��WV
		if (buffer[0].compare("V") == 0)
			suma += 5;
		//��WL
		if (buffer[0].compare("L") == 0)
			suma += 50;
		//��WD
		if (buffer[0].compare("D") == 0)
			suma += 500;
		//��WM
		if (buffer[0].compare("M") == 0)
			suma += 1000;
	}
	cout << a << "=" << suma << endl;
	//�ഫstring b���Ʀr
	int sumb = 0;
	for (int i = 0; i < b.length(); i++)
	{
		buffer[0] = b[i];
		buffer[1] = b[i + 1];

		//I�}�Y�A�]�t�iI�j�iIV�j�iIX�j
		if (buffer[0].compare("I") == 0)
		{
			if (buffer[1].compare("V") == 0)
			{
				sumb += 4;
				i++;
			}
			else if (buffer[1].compare("X") == 0)
			{
				sumb += 9;
				i++;
			}
			else
				sumb += 1;
		}
		//X�}�Y�A�]�t�iX�j�iXL�j�iXC�j
		if (buffer[0].compare("X") == 0)
		{
			if (buffer[1].compare("L") == 0)
			{
				sumb += 40;
				i++;
			}
			else if (buffer[1].compare("C") == 0)
			{
				sumb += 90;
				i++;
			}
			else
				sumb += 10;
		}
		//C�}�Y�A�]�t�iC�j�iCD�j�iCM�j
		if (buffer[0].compare("C") == 0)
		{
			if (buffer[1].compare("D") == 0)
			{
				sumb += 400;
				i++;
			}
			else if (buffer[1].compare("M") == 0)
			{
				sumb += 900;
				i++;
			}
			else
				sumb += 100;
		}
		//��WV
		if (buffer[0].compare("V") == 0)
			sumb += 5;
		//��WL
		if (buffer[0].compare("L") == 0)
			sumb += 50;
		//��WD
		if (buffer[0].compare("D") == 0)
			sumb += 500;
		//��WM
		if (buffer[0].compare("M") == 0)
			sumb += 1000;
	}
	cout << b << "=" << sumb << endl;

	int sum = suma - sumb;
	//�Nsum�Hù���Ʀr�����A��X

	//�ഫ���
	//�N�Ҧ�ù���Ʀr���զX�C�X
	//�N���ഫ���Ʀr�q�j���p�A�s�^
	//�P�ɼW�[�Ҵ�Ʀr�ҹ�����ù���Ʀr
	//���쵲�G��0
	string rom[13] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };
	int romnum[13] = { 1000,900,500,400,100,90,50,40,10,9,5,4,1 }; \
		string print = "";
	if (sum == 0)
		cout << "zero" << endl;
	else {
		for (int i = 0; i < 13; i++)
		{
			if (sum < romnum[i])
				continue;
			while (sum >= romnum[i])
			{
				sum -= romnum[i];
				print += rom[i];
			}
		}
		cout << print << endl;
	}
	system("PAUSE");
	return 0;
}