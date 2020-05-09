#include <iostream>
#include <math.h>
#include<string>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int a, b,i,j;
	cout << "請依序輸入y與x" << endl;
	cin >> a >> b;
	int array1[99][99];
	int array2[99][99];
	cout << "請輸入元素" << endl;
	for (i = 0; i <a ; i++)
	{
		for (j = 0l; j < b; j++)
		{
			cin >> array1[i][j];
			cout << "第(" << i<<","<< j<< ")個元素輸入完畢" << endl;
			array2[j][i] = array1[i][j];
		}
	};
	cout << endl;
	//輸出所輸入的陣列
	cout << "原陣列:" << endl;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			cout << setw(3) << array1[i][j];
		}
		cout << endl;
	}
	cout << endl;

	//輸出轉換後
	cout << "旋轉後" << endl;
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