#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int array[2][3];
//輸入方程式元素
	cout << "請輸入方程式係數" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> array[i][j];
			cout << "(" << i << " , " << j << ")" << "已輸入完畢" << endl;
		}
	}
	//預覽所輸入的陣列
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout<<setw(4)<<array[i][j]<<'\t';
		}
		cout << endl;
	}
	cout << endl;
	//預覽所輸入的方程式
	for (int i = 0; i < 2; i++)
	{
		cout << setw(3)<<array[i][0] <<setw(3)<< (array[i][1] > 0 ? "x+" : "x")<<setw(3)<<array[i][1] << " y="<<setw(3)<< array[i][2] << endl;
	}
	//分出(無限多解)(無解)(唯一解)
	if (array[0][0] / array[1][0] == array[0][1] / array[1][1] && array[0][2] / array[1][2] == array[0][1] / array[1][1] && array[0][0] / array[1][0] == array[0][2] / array[1][2])
		cout << "無限多解" << endl;
	else if (array[0][0] / array[1][0] == array[0][1] / array[1][1] && array[0][2] / array[1][2] != array[0][1] / array[1][1])
		cout << "無解" << endl;
	else
	{
		//計算過程
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