#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	//cout << "�զX�ơG";
	int n;
	cin >> n;
	int m;
	int array[537];
	int know = 0;
	//�j�j��O��ƪ��ռ�
	for (int i = 0; i < n; i++)
	{
		know = 0;
		//cout << "�����q�G";
		cin >> m;
		//��J�U����
		for (int i = 0; i < m; i++)
		{
			//cout << "��" << i + 1 << "�Ӥ����G";
			cin >> array[i];
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (i == j)
					continue;
				for (int k = 0; k < m; k++)
				{
					if (j == k || i == k)
						continue;
					if (array[i] + array[j] > array[k] && array[i] + array[k] > array[j] && array[j] + array[k] > array[i])
						know = 1;
				}
			}
		}

		if (know == 1)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
	system("PAUSE");
	return 0;
}