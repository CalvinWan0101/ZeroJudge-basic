#include <iostream>
#include <algorithm>
using namespace std;
int cha[101] = { 0 };
int DP(int n, int w[], int v[], int C)
{
	//chartone[i]��i���I�]���e�q�W��
	//�����@�U���
	for (int i = 0; i <= C; i++)
		cha[i] = 0;
	//�ƾ�
	for (int q = 0; q < n; q++)
		//�I�]�e�q
		for (int p = C; p >= 0; p--)
			if (p < w[q])
				continue;
			else
				cha[p] = max(cha[p], cha[p - w[q]] + v[q]);
	int buffer = -10000;
	for (int i = 0; i <= C; i++)
		if (cha[i] > buffer)
			buffer = cha[i];
	return buffer;
}
int main()
{
	int w[10000];
	int v[10000];
	int n, i;
	int C, buffer;
	C = 100;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> w[i] >> v[i];
	//�έ��q�ƧǤ@��
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (w[i] > w[j])
			{
				buffer = w[i];
				w[i] = w[j];
				w[j] = buffer;
				buffer = v[i];
				v[i] = v[j];
				v[j] = buffer;
			}
	cout << DP(n, w, v, C) << endl;
}