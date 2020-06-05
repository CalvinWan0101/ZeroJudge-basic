#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	
	//第一個方法
	//變數limit為所要輸入資料的個數
	int limit;
	int before[100];
	int after[100];
	cout << "請輸入所要輸入的資料個數" << endl;
	cin >> limit;
	//輸入陣列
	cout << "請輸入資料並以空格作為間隔" << endl;
	for (int i=0; i < limit; i++)
		cin >> before[i];
	
	//五行反轉！
	for (int j = 0; j <= (limit-1); j++)
	{
			after[j] = before[limit-1-j];
	}
	//情況分化成第一項為0與第一項不為0
	if(after[0]==0)
	for (int l = 1; l < limit; l++)
	{
		cout << after[l];
	}
	else
		for (int m = 0; m < limit; m++)
		{
			cout << after[m];
		}
	//第二個方法
	int lim;
	int A[100];
	cout << "請輸入所要輸入的資料個數" << endl;
	cin >> lim;
	//輸入陣列
	cout << "請輸入資料並以空格作為間隔" << endl;
	for (int i = 0; i < lim; i++)
		cin >> A[i];
	//反過來輸出
	//情況分化成第一項為0與第一項不為0
	if (before[lim-1] == 0)
		for (int l = lim-2; l >=0; l--)
		{
			cout << A[l];
		}
	else
		for (int m = lim-1; m >=0; m--)
		{
			cout << A[m];
		}
	system("PAUSE");
	return 0;
}
