#include <iostream>
using namespace std;
int arra[100] = { 0 };
//n為最大的數字鴨
//array為存取層數的陣列，從1開始喲
int used[100] = { 0 };
void print4(int flo, int array[100])
{
	if (flo == 4)
	{
		for (array[flo] = 1; array[flo] <= 4; array[flo]++)
			if (array[1] != array[2] && array[1] != array[3] && array[1] != array[4] && array[2] != array[3] && array[2] != array[4] && array[3] != array[4])
			{
				cout << array[1] << array[2] << array[3] << array[4];
				cout << endl;
			}
		return;
	}
	for (array[flo] = 1; array[flo] <= 4; array[flo]++)
		print4(flo + 1, array);
}


void print(int flo, int n, int array[100])
{
	int search;
	if (flo == n)
	{
		for (array[flo] = 1; array[flo] <= n; array[flo]++)
		{
			search = 0;
			for (int i = 1; i <= n; i++)
			{
				if (i == n)
					break;
				for (int j = i + 1; j <= n; j++)
				{
					if (array[i] == array[j])
						search++;
				}
			}
			if (search == 0)
			{
				for (int i = 1; i <= n; i++)
					cout << array[i];
				cout << endl;
			}
		}
		return;
	}
	for (array[flo] = 1; array[flo] <= n; array[flo]++)
		print(flo + 1, n, array);
}
int main(int argc, char** argv)
{
	cout << "預設層數為【4】最基本的迴圈寫法：" << endl;
	//先以4為例子
	for (int i = 1; i <= 4; i++)
		for (int j = 1; j <= 4; j++)
			for (int k = 1; k <= 4; k++)
				for (int l = 1; l <= 4; l++)
					if (i != j && i != k && i != l && j != k && j != l && k != l)
						cout << i << j << k << l << endl;
	cout << endl;
	//問題點：
	//僅能在確定數字時使用
	//無法自訂深度
	//召喚威猛的遞迴函數搭配迴圈作自定義使用！！！

	//先把i,j,k,l更改成一樣的東西
	//buffer[4]陣列！！！
	cout << "將i，j，k，l轉換成陣列的寫法：" << endl;
	//注意：
	//這裡的buffer[i]的i指的是層數
	int buffer[5];
	for (buffer[1] = 1; buffer[1] <= 4; buffer[1]++)
		for (buffer[2] = 1; buffer[2] <= 4; buffer[2]++)
			for (buffer[3] = 1; buffer[3] <= 4; buffer[3]++)
				for (buffer[4] = 1; buffer[4] <= 4; buffer[4]++)
					if (buffer[1] != buffer[2] && buffer[1] != buffer[3] && buffer[1] != buffer[4] && buffer[2] != buffer[3] && buffer[2] != buffer[4] && buffer[3] != buffer[4])
						cout << buffer[1] << buffer[2] << buffer[3] << buffer[4] << endl;
	cout << endl;
	//此時的buffer[n]就可以依靠更改n值來遞迴
	//這裡依靠呼叫函數的啦
	cout << "靠遞迴函數+陣列的寫法：" << endl;
	print4(1, arra);
	cout << endl;
	cout << "使用者輸入自訂層數實戰演練：" << endl;
	int w;
	cin >> w;
	print(1, w, arra);
	system("PAUSE");
	return 0;
}