#include <iostream>
using namespace std;
int arra[100] = { 0 };
//n���̤j���Ʀr�n
//array���s���h�ƪ��}�C�A�q1�}�l��
int used[100] = { 0 };
void print4(int flo, int array[100])
{
	if (flo == 4)
	{
		for (array[flo] = 1; array[flo] <= 4; array[flo]++)
			if (array[1] != array[2] && array[1] != array[3] && array[1] != array[4] && array[2] != array[3] && array[2] != array[4] && array[3] != array[4])
			{
				cout << array[1] << array[2] << array[3] << array[4];
				cout << endl;
			}
		return;
	}
	for (array[flo] = 1; array[flo] <= 4; array[flo]++)
		print4(flo + 1, array);
}


void print(int flo, int n, int array[100])
{
	int search;
	if (flo == n)
	{
		for (array[flo] = 1; array[flo] <= n; array[flo]++)
		{
			search = 0;
			for (int i = 1; i <= n; i++)
			{
				if (i == n)
					break;
				for (int j = i + 1; j <= n; j++)
				{
					if (array[i] == array[j])
						search++;
				}
			}
			if (search == 0)
			{
				for (int i = 1; i <= n; i++)
					cout << array[i];
				cout << endl;
			}
		}
		return;
	}
	for (array[flo] = 1; array[flo] <= n; array[flo]++)
		print(flo + 1, n, array);
}
int main(int argc, char** argv)
{
	cout << "�w�]�h�Ƭ��i4�j�̰򥻪��j��g�k�G" << endl;
	//���H4���Ҥl
	for (int i = 1; i <= 4; i++)
		for (int j = 1; j <= 4; j++)
			for (int k = 1; k <= 4; k++)
				for (int l = 1; l <= 4; l++)
					if (i != j && i != k && i != l && j != k && j != l && k != l)
						cout << i << j << k << l << endl;
	cout << endl;
	//���D�I�G
	//�ȯ�b�T�w�Ʀr�ɨϥ�
	//�L�k�ۭq�`��
	//�l��²r�����j��Ʒf�t�j��@�۩w�q�ϥΡI�I�I

	//����i,j,k,l��令�@�˪��F��
	//buffer[4]�}�C�I�I�I
	cout << "�Ni�Aj�Ak�Al�ഫ���}�C���g�k�G" << endl;
	//�`�N�G
	//�o�̪�buffer[i]��i�����O�h��
	int buffer[5];
	for (buffer[1] = 1; buffer[1] <= 4; buffer[1]++)
		for (buffer[2] = 1; buffer[2] <= 4; buffer[2]++)
			for (buffer[3] = 1; buffer[3] <= 4; buffer[3]++)
				for (buffer[4] = 1; buffer[4] <= 4; buffer[4]++)
					if (buffer[1] != buffer[2] && buffer[1] != buffer[3] && buffer[1] != buffer[4] && buffer[2] != buffer[3] && buffer[2] != buffer[4] && buffer[3] != buffer[4])
						cout << buffer[1] << buffer[2] << buffer[3] << buffer[4] << endl;
	cout << endl;
	//���ɪ�buffer[n]�N�i�H�̾a���n�Ȩӻ��j
	//�o�̨̾a�I�s��ƪ���
	cout << "�a���j���+�}�C���g�k�G" << endl;
	print4(1, arra);
	cout << endl;
	cout << "�ϥΪ̿�J�ۭq�h�ƹ�Ժt�m�G" << endl;
	int w;
	cin >> w;
	print(1, w, arra);
	system("PAUSE");
	return 0;
}