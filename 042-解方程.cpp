#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int array[2][3];
//��J��{������
	cout << "�п�J��{���Y��" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> array[i][j];
			cout << "(" << i << " , " << j << ")" << "�w��J����" << endl;
		}
	}
	//�w���ҿ�J���}�C
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout<<setw(4)<<array[i][j]<<'\t';
		}
		cout << endl;
	}
	cout << endl;
	//�w���ҿ�J����{��
	for (int i = 0; i < 2; i++)
	{
		cout << setw(3)<<array[i][0] <<setw(3)<< (array[i][1] > 0 ? "x+" : "x")<<setw(3)<<array[i][1] << " y="<<setw(3)<< array[i][2] << endl;
	}
	//���X(�L���h��)(�L��)(�ߤ@��)
	if (array[0][0] / array[1][0] == array[0][1] / array[1][1] && array[0][2] / array[1][2] == array[0][1] / array[1][1] && array[0][0] / array[1][0] == array[0][2] / array[1][2])
		cout << "�L���h��" << endl;
	else if (array[0][0] / array[1][0] == array[0][1] / array[1][1] && array[0][2] / array[1][2] != array[0][1] / array[1][1])
		cout << "�L��" << endl;
	else
	{
		//�p��L�{
		//D
		int D = array[0][0] * array[1][1] - array[0][1] * array[1][0];
		//Dx
		int Dx = array[0][2] * array[1][1] - array[1][2] * array[0][1];
		//Dy
		int Dy = array[0][0] * array[1][2] - array[0][2] * array[1][0];
		int x = Dx / D;
		int y = Dy / D;
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	}
	system("PAUSE");
	return 0;
}