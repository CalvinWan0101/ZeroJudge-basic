#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	cout << "�ƾڶq�G";
	cin >> n;
	int array[10000];
	for (int i = 0; i < n; i++)
		cin >> array[i];
	int bucket[30001] = {0};
	//�N�Ʀr�s�J�۹�������l
	for (int i = 0; i < n; i++)
		bucket[array[i]]++;
	//�j�M�Ҧ���l���X�{�����Ƴ̦h���J
	int large=0;
	for (int i = 0; i < 30001; i++)
		if (bucket[i] > large)
			large = bucket[i];
	//�a�ۧ�X�Ӫ�large�A�^�h��X�{�ilarge�j�����Ʀr
	for (int i = 0; i < 30001; i++)
		if (bucket[i] == large)
			cout << i << " " << bucket[i] << endl;
	system("PAUSE");
	return 0;
}