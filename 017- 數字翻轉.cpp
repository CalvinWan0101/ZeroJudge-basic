#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	
	//�Ĥ@�Ӥ�k
	//�ܼ�limit���ҭn��J��ƪ��Ӽ�
	int limit;
	int before[100];
	int after[100];
	cout << "�п�J�ҭn��J����ƭӼ�" << endl;
	cin >> limit;
	//��J�}�C
	cout << "�п�J��ƨåH�Ů�@�����j" << endl;
	for (int i=0; i < limit; i++)
		cin >> before[i];
	
	//�������I
	for (int j = 0; j <= (limit-1); j++)
	{
			after[j] = before[limit-1-j];
	}
	//���p���Ʀ��Ĥ@����0�P�Ĥ@������0
	if(after[0]==0)
	for (int l = 1; l < limit; l++)
	{
		cout << after[l];
	}
	else
		for (int m = 0; m < limit; m++)
		{
			cout << after[m];
		}
	//�ĤG�Ӥ�k
	int lim;
	int A[100];
	cout << "�п�J�ҭn��J����ƭӼ�" << endl;
	cin >> lim;
	//��J�}�C
	cout << "�п�J��ƨåH�Ů�@�����j" << endl;
	for (int i = 0; i < lim; i++)
		cin >> A[i];
	//�ϹL�ӿ�X
	//���p���Ʀ��Ĥ@����0�P�Ĥ@������0
	if (before[lim-1] == 0)
		for (int l = lim-2; l >=0; l--)
		{
			cout << A[l];
		}
	else
		for (int m = lim-1; m >=0; m--)
		{
			cout << A[m];
		}
	system("PAUSE");
	return 0;
}