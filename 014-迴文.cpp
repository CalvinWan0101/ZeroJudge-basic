#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	//�ܼ�limit���ҭn��J��ƪ��Ӽ�
	int limit;
	char before[100];
	char after[100];
	cout << "�п�J�ҭn��J����ƭӼ�" << endl;
	cin >> limit;
	//��J�}�C
	cout << "�п�J��ƨåH�Ů�@�����j" << endl;
	for (int i = 0; i < limit; i++)
		cin >> before[i];

	//�������I
	for (int j = 0; j <= (limit - 1); j++)
	{
		after[j] = before[limit - 1 - j];
	}
	//���
	int flag;
	if (limit % 2 == 0)
		for (int i = 0; i <= (limit - 1) / 2; i++)
		{
			if (before[i] != after[i])
				flag = 0;
			break;
		}
	else
		for (int j = 0; j <= limit / 2; j++)
		{
			if (before[j] != after[j])
				flag = 0;
			break;
		}
	if (flag == 0)
		cout << "�D�j��" << endl;
	else
		cout << "�O�j��" << endl;
	system("PAUSE");
	return 0;
}