#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	cout << "操作量：";
	cin >> n;
	int input;
	int array[100] = {0};
	//存取命令列
	int command[100][2] = {0};
	for (int i = 0; i < n; i++)
	{
		cin >> command[i][0];
		if (command[i][0] == 3)
			cin >> command[i][1];
	}
	cout << "預覽命令列" << endl;
	for (int i = 0; i < n; i++)
		cout << command[i][0]<<" "<<command[i][1]<<endl;
	cout << endl;
	
	for (int i = 0; i < n; i++)
	{
		switch (command[i][0])
		{
			//刪除
		case 1:
			for (int i = 0; i < 100; i++)
				if (array[i] != 0)
				{
					array[i] = 0;
					break;
				}
			break;
			//輸出頂端元素
		case 2:
			for (int i = 0; i < 100; i++)
				if (array[i] != 0)
				{
					cout << array[i] << endl;
					break;
				}
			break;
			//讀入一個整數進入堆疊
		case 3:
			for (int j = 99; j >= 0; j--)
				if (array[j] == 0)
				{
					array[j] = command[i][1];
					break;
				}
		}
	}
	system("PAUSE");
	return 0;
}