#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int a;
	int array[1000];
	cout << "��ƶq�G";
	cin >> a;
	cout << "�п�J���" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "��" << i << "�Ӹ�ơG";
		cin >> array[i];
	}
	//�L�X�Ƨǫe
	cout << "�Ƨǫe�G";
	for (int i = 0; i < a; i++)
		cout << setw(4) << array[i];
	int buffer;
	//bubble sort
	for(int i=0;i<a;i++)
		for(int j=0;j<a;j++)
			if (array[j] > array[j + 1])
			{
				buffer = array[j];
				array[j] = array[i];
				array[i] = buffer;
			}
	//�L�X�Ƨǫ�
	cout << endl << "�Ƨǫ�G";
	for (int i = 0; i < a; i++)
		cout << setw(4) << array[i];
	system("PAUSE");
	return 0;
}