#include <iostream>
#include <iomanip>
using namespace std;
int arr[4] = { 0 };
int sum;
void cat(int a, int n, int orgin, int kind[4])
{
	if (a == n-1)
	{
		for (arr[a] = 0; arr[a] <= orgin; arr[a]++)
		{
			sum = 0;
			//�p���e�f�t�Һc�����`���B
			for (int i = 0; i < n; i++)
				sum += (arr[i] * kind[i]);
			//���`���B==����B��
			if (sum == orgin)
			{
				cout << "(";
				for (int i = 0; i < n; i++)
				{
					if (i != n - 1)
						cout << setw(2) << arr[i] << ",";
					else
						cout << setw(2) << arr[i] << ")" << endl;
				}
			}
		}
		return;
	}
	for (arr[a] = 0; arr[a] <= orgin; arr[a]++)
		cat(a + 1, n, orgin, kind);
}
int main(int argc, char** argv)
{
	int n;
	cout << "�ɪO�����G";
	cin >> n;
	//���������������v
	int kind[4];
	for (int i =0 ; i < n; i++)
	{
		cout << "��" << i + 1 << "�ح��B�G";
		cin >> kind[i];
	}
	int orgin;
	cout << "�ҵ����B�G";
	cin >> orgin;
	//�^���k
	cat(0, n, orgin, kind);
	system("PAUSE");
	return 0;
}