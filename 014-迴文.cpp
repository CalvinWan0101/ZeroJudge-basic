#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	//變數limit為所要輸入資料的個數
	int limit;
	char before[100];
	char after[100];
	cout << "請輸入所要輸入的資料個數" << endl;
	cin >> limit;
	//輸入陣列
	cout << "請輸入資料並以空格作為間隔" << endl;
	for (int i = 0; i < limit; i++)
		cin >> before[i];

	//五行反轉！
	for (int j = 0; j <= (limit - 1); j++)
	{
		after[j] = before[limit - 1 - j];
	}
	//比較
	int flag;
	if (limit % 2 == 0)
		for (int i = 0; i <= (limit - 1) / 2; i++)
		{
			if (before[i] != after[i])
				flag = 0;
			break;
		}
	else
		for (int j = 0; j <= limit / 2; j++)
		{
			if (before[j] != after[j])
				flag = 0;
			break;
		}
	if (flag == 0)
		cout << "非迴文" << endl;
	else
		cout << "是迴文" << endl;
	system("PAUSE");
	return 0;
}