#include <iostream>
#include <math.h>
#include<string>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int a, b,i,j;
	cout << "�Ш̧ǿ�Jy�Px" << endl;
	cin >> a >> b;
	int array1[99][99];
	int array2[99][99];
	cout << "�п�J����" << endl;
	for (i = 0; i <a ; i++)
	{
		for (j = 0l; j < b; j++)
		{
			cin >> array1[i][j];
			cout << "��(" << i<<","<< j<< ")�Ӥ�����J����" << endl;
			array2[j][i] = array1[i][j];
		}
	};
	cout << endl;
	//��X�ҿ�J���}�C
	cout << "��}�C:" << endl;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			cout << setw(3) << array1[i][j];
		}
		cout << endl;
	}
	cout << endl;

	//��X�ഫ��
	cout << "�����" << endl;
	for (i = 0; i < b; i++)
	{
		for (j = 0; j < a; j++)
		{
			cout << setw(3) << array2[i][j];
		}
		cout << endl;
	}
	system("PAUSE");
	return 0;
}