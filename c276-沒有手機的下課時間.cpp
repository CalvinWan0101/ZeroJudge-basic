#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(int argc, char** argv)
{
	string Opa;
	string Oin;
	int password[4] = { 0 };
	int input[4] = { 0 };
	cout << "���T�K�X�G";
	cin >> Opa;
	cout << "�K�X�G";
	cin >> Oin;
	//�ഫ���T�K�X
	for (int i = 0; i < 4; i++)
	{
		stringstream transferA;
		transferA << Opa[i];
		transferA >> password[i];
	}
	//�ഫ��J�K�X
	for (int i = 0; i < 4; i++)
	{
		stringstream transferB;
		transferB << Oin[i];
		transferB >> input[i];
	}
	int countpass[10] = { 0 };
	int countin[10] = { 0 };
	cout << "���T�K�X�G";
	for (int i = 0; i < 4; i++)
		cout << password[i]<<" ";
	cout << endl;
	cout << "��J�K�X�G";
	for (int i = 0; i < 4; i++)
		cout << input[i]<<" ";

	//���p��p
	int p = 0;
	for (int i = 0; i < 4; i++)
		if (input[i] == password[i])
		{
			p++;
			input[i] = 0;
			password[i] = 0;
		}
	cout << endl << "p=" << p << endl;
	//�h���w�g�T�w���T���}�C
	cout << "�h���۹�᥿�T�K�X�G";
	for (int i = 0; i < 4; i++)
		cout << password[i] << " ";
	cout << endl;
	cout << "�h���۹���J�K�X�G";
	for (int i = 0; i < 4; i++)
		cout << input[i] << " ";
	//��J���T�K�X�X�{���Ʀr
	for (int i = 0; i < 4; i++)
		countpass[password[i]]++;
	//��J�K�X�X�{���Ʀr
	for (int i = 0; i < 4; i++)
		countin[input[i]]++;
	//����
	cout << endl;
	cout << "���T�K�X�Ʀr�X�{����" << endl;
	for (int i = 0; i < 10; i++)
		cout << countpass[i] << " ";
	cout << endl;
	cout << "��J�K�X�Ʀr�X�{����" << endl;
	for (int i = 0; i < 10; i++)
		cout << countin[i] << " ";
	cout << endl;
	//����Ӳέp�Ϊ��}�C
	//0�����p
	int q = 0;
	if (countpass[0] != countin[0])
		if (countpass[0] > countin[0])
			q += (countin[0]-p);
		else
			q += (countpass[0]-p);
	for (int i = 1; i < 10; i++)
		if (countpass[i] != 0 && countin[i] != 0)
			if (countpass[i] > countin[i])
				q += countin[i];
			else
				q += countpass[i];
	cout << p << "A" << q << "B" << endl;
	system("PAUSE");
	return 0;
}