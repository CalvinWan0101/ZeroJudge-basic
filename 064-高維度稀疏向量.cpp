#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	string a;
	string b;
	int front = 0, back = 0, point = 0;
	//buffer�}�C�ΨӼȮɦs���ഫ�r��
	int buffer[100] = { 0 };
	int sudden = 0;
	//placeA�s�J��m�AnumberA�s�J�ƭ�
	int placeA[100] = { -1 };
	int numberA[100] = { -1 };
	//�B�z��JA�r��
	cout << "�V�qA�G" << endl;
	for (int o = 1;; o++)
	{
		cin >> a;
		for (int i = 0; i < a.length(); i++)
			if (a[i] == ':')
				point = i;
		//�i:�j�e�ƭȦ�m(�D�O�����m,�q1�}�l)
		for (int i = 0; i < point; i++)
			buffer[i] = a[i];
		for (int i = 0; i < point; i++)
			buffer[i] -= 48;
		//�ഫ���@�Ӿ�Ʀs�i�ܼ�sudden�A�s�JplaceA�}�C
		for (int i = 0; i < point; i++)
			sudden += buffer[i] * pow(10, point - 1 - i);
		placeA[o] = sudden;
		sudden = 0;
		//�i:�j��ƭ�
		for (int i = point + 1; i < a.length(); i++)
			buffer[i] = a[i];
		for (int i = point + 1; i < a.length(); i++)
			buffer[i] -= 48;
		for (int i = point + 1; i < a.length(); i++)
			sudden += buffer[i] * pow(10, a.length() - 1 - i);
		numberA[o] = sudden;
		sudden = 0;
		if (a == "0:0")
			break;
		front = back = point = 0;
	}
	//placeB�s�J��m�AnumberB�s�J�ƭ�
	int placeB[100] = { -1 };
	int numberB[100] = { -1 };
	//�B�z��JB�r��
	
	cout << "�V�qB�G" << endl;
	
	for (int o = 1;; o++)
	{
		cin >> b;
		for (int i = 0; i < b.length(); i++)
			if (b[i] == ':')
				point = i;
		//�i:�j�e�ƭȦ�m(�D�O�����m,�q1�}�l)
		for (int i = 0; i < point; i++)
			buffer[i] = b[i];
		for (int i = 0; i < point; i++)
			buffer[i] -= 48;
		//�ഫ���@�Ӿ�Ʀs�i�ܼ�sudden�A�s�JplaceA�}�C
		for (int i = 0; i < point; i++)
			sudden += buffer[i] * pow(10, point - 1 - i);
		placeB[o] = sudden;
		sudden = 0;
		//�i:�j��ƭ�
		for (int i = point + 1; i < b.length(); i++)
			buffer[i] = b[i];
		for (int i = point + 1; i < b.length(); i++)
			buffer[i] -= 48;
		for (int i = point + 1; i < b.length(); i++)
			sudden += buffer[i] * pow(10, b.length() - 1 - i);
		numberB[o] = sudden;
		sudden = 0;
		if (b == "0:0")
			break;
		front = back = point = 0;
	}
	//�}�l���placeA�MplaceB���t���A�p�G��̬�!=(-1)
	//�h�p���̹�����mnumberA*numberB����
	int sum=0;
	//�v�����
	for (int i = 1;i<100; i++)
		for(int j=1;j<100;j++)
	if (placeA[i] == placeB[j] && placeA[i] != -1)
		sum += numberA[i] * numberB[j];
	cout << "�̲׭ȡG" << sum << endl;
	
	system("PAUSE");
	return 0;
}