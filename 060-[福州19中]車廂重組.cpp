#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	//�w�j�Ƨǭp��ֱ̤ƧǦ���
	int count = 0;
	int n;
	cout << "���[�ƶq�G";
	cin >> n;
	int array[101];
	for (int i = 1; i <= n; i++)
	{
		cout << "��" << i << "�`���[�G";
		cin >> array[i];
	}
	int buffer;
	//�ƧǶ}�l
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - 1; j++)
			if (array[j] > array[j + 1])
			{
				buffer = array[j + 1];
				array[j + 1] = array[j];
				array[j] = buffer;
				count++;
			}
	}
	cout << "�ֻ̤ݭn����" << count << "��" << endl;
	system("PAUSE");
	return 0;
}